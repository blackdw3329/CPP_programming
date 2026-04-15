// **********************************************
// 제 목 : 4_4 실습과제3
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int count = 0;
	cout << "문자열을 입력: ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] == 'a')
		{
			count++;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
	return 0;
}