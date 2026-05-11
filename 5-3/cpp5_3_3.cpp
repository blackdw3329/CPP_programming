// **********************************************
// 제 목 : 5_3 실습과제3
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>
using namespace std;

void SwapString(string& str1, string& str2);


int main() {
	string s1(" hello ");
	string s2(" world ");
	cout << "교환전 문자열" << s1 << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열" << s1 << s2 << endl;
	return 0;
}

void SwapString(string& str1, string& str2) {
	string tmp;
	tmp = str1;
	str1 = str2;
	str2 = tmp;
}
