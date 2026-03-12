// **********************************************
// 제 목 : 2_2 실습과제5
// 날 짜 : 2026년 3월12일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char text[100];

	while(true)
	{
		cin.getline(text, sizeof(text));

		if(strcmp(text, "exit") == 0)
			break;

		int count = 0;
		for(int i = 0; text[i] != '\0'; i++)
		{
			if(text[i] != ' ' && (i == 0 || text[i-1] == ' '))
			{
				count++;
			}
		}
		cout << "단어 개수: " << count << endl;
	}

	return 0;
}