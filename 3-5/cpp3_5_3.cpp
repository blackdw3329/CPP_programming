// **********************************************
// 제 목 : 3_5 실습과제3
// 날 짜 : 2026년 3월 30일
// 작성자 : 2301358 김동욱
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Account
{
public:
	Account(const char* n) { strcpy(name, n); money = 0; };
	~Account() {}
	char* setOwner(char* n) { strcpy(name, n); }
	void setMoney(int m) { money = m; }
	int inquiry() { return money; }
	int withdraw(int wm) {
		if (wm <= money) {
			money -= wm;
			return wm;
		}
		else {
			cout << "잔액 " << money << endl;
			return 0;
		}
	}
	void deposit(int dm) { money += dm; }
	const char* getOwner() { return name; }


private:
	char name[50];
	int money;
};
int main()
{
	Account a("홍길동");
	a.deposit(20000);
	cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(15000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	money = a.withdraw(8000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
}