// **********************************************
// 제 목 : 4_1 실습과제2
// 날 짜 : 2026년 4월 1일
// 작성자 : 2301358 김동욱
// **********************************************


#include <iostream>
using namespace std;

class Triangle
{
public:
	Triangle() { height = 1; width = 1; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; width = w; }
	void setHeight(int h) { if (h <= 0)return; height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};


int main() {
	unique_ptr<Triangle> ptr1(new Triangle());
	// Triangle tri; 객체포인터변수 선언 및 초기화 코드 추가
	Triangle tri;
	Triangle* p;
	p = &tri;
	// tri.setWidth(3); 객체포인터 표현으로 변경

	p->setWidth(3);
	// tri.setHeight(5); 객체포인터 표현으로 변경

	p->setHeight(5);
	// cout << "삼각형의 면적은"<< tri.getArea()<< endl; 포인터표현으로 변경
	cout << "삼각형의 면적은" << p->getArea() << endl;
	return 0;
}