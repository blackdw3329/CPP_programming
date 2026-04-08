// **********************************************
// 제 목 : 4_3 실습과제3
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

//int main() {
//	Circle* pArray = new Circle[3];
//	for (int i = 0; i < 3; i++) {
//		cout << pArray->getArea() << '\n';
//		pArray++; // 해제할때 pArray의 주소가  달라져있어 문제가된다
//	}
//	delete[] pArray;
//	return 0;
//}

// 해결한 main 함수

int main() {
	Circle* pArray = new Circle[3];
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // 다른 포인터를 만들어 주소를 따로 접근한다
	}
	delete[] pArray;
	return 0;
}
