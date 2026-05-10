// **********************************************
// 제 목 : 5_2 실습과제4
// 날 짜 : 2026년 5월 10일
// 작성자 : 김동욱
// **********************************************

#include <iostream>
using namespace std;

void get_parts(double num, int& jung, double& decimalPart);

int main() {
    double n;
    int jung;
    double sosu;

    cout << "실수를 입력하시오 : ";
    cin >> n;

    get_parts(n, jung, sosu);

    cout << "정수부 : " << jung << endl;
    cout << "소수부 : " << sosu << endl;

    return 0;
}

void get_parts(double num, int& jung, double& sosu) {
    jung = (int)num;
    sosu = num - jung;
}