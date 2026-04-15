// **********************************************
// 제 목 : 4_4 4장 연습문제 11
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************


#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill(int n) { size = n; }
    bool consume(int n) {
        if (size < n) return false;
        size -= n;
        return true;
    }
    int getSize() { return size; }
};

class CoffeeVendingMachine {
private:
    Container tong[3];
    
    void is_empty() { cout << "원료가 부족합니다." << endl; }
    void show() {
        cout << "커피 " << tong[0].getSize()
            << ", 물 " << tong[1].getSize()
            << ", 설탕 " << tong[2].getSize() << endl;
    }

    void getEspresso() {
        if (tong[0].consume(1) && tong[1].consume(1))
            cout << "에스프레소 드세요"<<endl;
        else { is_empty(); return; }
    }

    void getAmericano() {
        if (tong[0].consume(1) && tong[1].consume(2))
            cout << "아메리카노 드세요"<<endl;
        else { is_empty(); return; }
    }

    void getSugarCoffee() {
        if (tong[0].consume(1) && tong[1].consume(2) && tong[2].consume(1))
            cout << "설탕커피 드세요"<<endl;
        else { is_empty(); return; }
    }

    void fill() {
        for (int i = 0; i < 3; i++) tong[i].fill(10);
    }
public:
    CoffeeVendingMachine() {
        for (int i = 0; i < 3; i++) tong[i].fill(10);
    }
    void run() {
        while (true) {
            cout << "다음 선택: 1.에스프레소, 2.아메리카노, 3.설탕커피, 4.잔량 보기, 5.채우기>>";
            int menu;
            cin >> menu;
            switch (menu) {
            case 1: getEspresso(); break;
            case 2: getAmericano(); break;
            case 3: getSugarCoffee(); break;
            case 4: show(); break;
            case 5: fill(); break;
            default: return;
            }
        }
    }
};

int main() {
    CoffeeVendingMachine m;
    cout <<
        "***** 커피자판기를 작동합니다. *****" << endl;
    m.run();
    return 0;
}