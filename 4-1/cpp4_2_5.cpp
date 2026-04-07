// **********************************************
// 제 목 : 4_2 실습과제5
// 날 짜 : 2026년 4월 6일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

int main()
{
	int  n;
	int max;
	cout << "저장할 문자열의 크기를 입력하세요:";
	cin >> n;
	char* p = new char[n + 1];
	cout << "문자열을 입력하시오: ";
	cin.ignore();
	cin.getline(p, n + 1);
	cout << "입력한 문자열은: " << p << "입니다." << endl;

	delete[]p;
}