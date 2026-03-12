// **********************************************
// 제 목 : 2_2 실습과제5
// 날 짜 : 2026년 3월12일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

int main()
{
	char buf[100];
	cin >> buf;
	for (int i = 0; i < sizeof(buf); i++)
	{
		cout << buf[i] << " ";
		if (buf[i] == NULL) break;
	}
	return 0;
}