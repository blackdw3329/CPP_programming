// **********************************************
// 제 목 :X모양의 별을 출력하는 프로그램
// 날 짜 : 2026년 3월11일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
int main() {
	int n = 7;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j or i + j == n + 1)
			{
				cout << "*";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}
	return 0;
}