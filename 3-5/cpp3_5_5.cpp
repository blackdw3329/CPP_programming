// **********************************************
// 제 목 : 3_5 실습과제3 연습문제 7
// 날 짜 : 2026년 3월 30일
// 작성자 : 2301358 김동욱
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Storage
{
public:
	Storage() {
		for (int i = 0; i < 10; i++) {
			average_total[i] = 0.0;
		}
		count = 0; 
	}
	~Storage() {}
	void put(double temp);
	double getAvg();
	void dump();

private:
	double average_total[10];
	int count;
};

void Storage::put(double temp)
{
	if (count < 10) { average_total[count] += temp; count++; }
	else cout << "최대 10회를 초과 하였습니다." << endl;
}
double Storage::getAvg()
{
	double total = 0;
	for (int j = 0; j < count; j++) total += average_total[j];
	return total / count;
}
void Storage::dump()
{
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ". " << average_total[i] << endl;
	}
}

int main()
{
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
}
