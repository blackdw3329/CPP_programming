// **********************************************
// 제 목 : 4_4 실습과제2
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>
using namespace std;


int main() {
	string str1, str2;
	int count = 0;
	while (true) {
		cout << "문자열을 입력: ";
		getline(cin, str1);
		if (str1 == "quit") {
			break;
		}
		str2 = str2 + "<"+to_string(++count)+">" + str1;
		cout << "이어진 문자열: " << str2 << endl;
	}
	return 0;
}