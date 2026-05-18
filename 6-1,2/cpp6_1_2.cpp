// **********************************************
// 제 목 : 6_1 실습과제2
// 날 짜 : 2026년 5월 18일
// 작성자 : 김동욱
// **********************************************

#include <iostream>
#include <string>
using namespace std;

int big(int a, int b);
double big(double a, double b);
string big(string a, string b);

int main() {
	int x = big(10, 20);
	cout << "큰 정수값 " << x << endl;
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;
	string z = big("hello ", "world");
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
	return 0;
}

int big(int a, int b) {
	if (a > b)return a;
	return b;
}
double big(double a, double b) {
	if (a > b)return (double)a;
	return (double)b;
}
string big(string a, string b) {
	if (a > b)return a;
	return b;
}
