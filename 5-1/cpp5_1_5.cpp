// **********************************************
// 제 목 : 5_1 실습과제5
// 날 짜 : 2026년 5월 5일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>

using namespace std;

string GetLatterString(string arr[]);

int main() {
	string res;
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	res = GetLatterString(names);s

	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다" << endl;
	return 0;
}

string GetLatterString(string arr[]) {
	string tmp;
	tmp = arr[0];
	for (int i = 0; i < 5; i++) {
		if (tmp < arr[i]) tmp = arr[i];
	}
	return tmp;
}
