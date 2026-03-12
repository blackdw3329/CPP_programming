// **********************************************
// 제 목 : 2_2 실습과제4
// 날 짜 : 2026년 3월12일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;

int main() {
    double num[10];
    double sum = 0;

    cout << "실수 5개를 입력하세요>> ";
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    for (int j = 0; j < 5; j++)
    {
        if (num[j] > 0)
        {
            sum += num[j];
        }
    }
    cout << "양수의 합: " << sum << endl;
    return 0;
}