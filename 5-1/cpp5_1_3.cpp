// **********************************************
// 제 목 : 5_1 실습과제3
// 날 짜 : 2026년 5월 5일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>

using namespace std;

string GetLatterString(string* s1, string* s2);

int main() {
	string s1("hello");
	string s2("world");
	string res;

	res = GetLatterString(&s1, &s2);

	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
	return 0;
}

string GetLatterString(string* s1, string* s2) {
	if (*s1 > *s2) return *s1;
	else return *s2;
}
