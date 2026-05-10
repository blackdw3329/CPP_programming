// **********************************************
// 제 목 : 5_1 실습과제4
// 날 짜 : 2026년 5월 5일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>

using namespace std;

void SwapString(string* s1, string* s2);

int main() {
	string s1("hello");
	string s2("world");

	cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
	SwapString(&s1, &s2);
	cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
	return 0;
}

void SwapString(string* s1, string* s2) {
	string tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
