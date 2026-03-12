// **********************************************
// 제 목 : 2_2 실습과제3
// 날 짜 : 2026년 3월12일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char number[10];
	char name[10];
	char address[30];

	cout << "학번을 입력하시오: ";
	cin >> number;

	cout << "이름을 입력하시오: ";
	cin >> name;
	cin.ignore(); // c언어에서 플러시 함수 fflush() => 버퍼 비워주기

	cout << "주소을 입력하시오: ";
	cin.getline(address, sizeof(address), '\n');


	cout << "1.학번:" << number << endl << "2.이름:" << name << endl << "3.주소:" << address << endl;


	return 0;
}