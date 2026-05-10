// **********************************************
// 제 목 : 5_2 실습과제3
// 날 짜 : 2026년 5월 9일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
void swap(int& a, int& b);
int main() {
	int m, n;
	cout << "정수 x를 입력하시오: ";
	cin >> m;
	
	cout << "정수 y를 입력하시오: ";
	cin >> n;
	cout << "swap 함수 호출 전 x=" << m << ", y=" << n << endl;
	swap(m, n);
	cout << "swap 함수 호출 후 x=" << m << ", y=" << n << endl;
}
void swap(int& a, int& b) { // 호출직후 a,b는 main함수의 m,n의 별명
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
