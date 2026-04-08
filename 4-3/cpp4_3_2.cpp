// **********************************************
// 제 목 : 4_3 실습과제2
// 날 짜 : 2026년 4월 8일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
int main() {
	int radius;
	while (true) {
		cout << "반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break;
		Circle* p = new Circle(radius);
		cout << "원의 면적:" << p->getArea() << endl;
		//delete p;  // 메모리 해제를 안해주면 메모리 누수 발생
	}
	return 0;
}