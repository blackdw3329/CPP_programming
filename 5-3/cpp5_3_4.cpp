// **********************************************
// 제 목 : 5_3 실습과제4
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n) {
		radius += n;
		return *this;
	}
	Circle& minus(int n) {
		radius -= n;
		return *this;
	}
	int getRadius() { return radius; }
};

int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5).plus(8);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}
