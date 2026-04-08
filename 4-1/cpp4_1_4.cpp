// **********************************************
// 제 목 : 4_1 실습과제4
// 날 짜 : 2026년 4월 1일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;

class Triangle {
private:
    int width;
    int height;

public:
    Triangle(int b = 0, int h = 0) {
        width = b;
        height = h;
        cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    int getArea() {
        return width * height * 0.5;
    }

    ~Triangle() {
        cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }
};

int main() 
{
    Triangle t[3] = { Triangle(2, 2), Triangle(4, 4), Triangle(6, 6) };

    for (int i = 0; i < 3; i++) 
    {
        cout << "삼각형" << i << "의 면적은 " << t[i].getArea() << endl;
    }

    return 0;
}