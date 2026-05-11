// **********************************************
// 제 목 : 5_3 실습과제2
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void Uppercase(string& str);


int main() {
	string s1("hello");
	cout << "변환 전 문자열" << s1 << endl;
	Uppercase(s1);
	cout << "변환 후 문자열" << s1 << endl;
	return 0;
}

void Uppercase(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
}
