// **********************************************
// 제 목 : 4_3 실습과제4
// 날 짜 : 2026년 4월 8일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
class Triangle {
	int width, height;
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea() { return (0.5 * width * height); }
};
Triangle::Triangle() :Triangle(1, 1) {}
Triangle::Triangle(int w, int h) {
	width = w; height = h;
	cout << "밑변" << width << " 높이" << height << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << width << " 높이" << height << "인 삼각형 소멸" << endl;
}

int main() {
	Triangle* pArray = new Triangle[3]{ Triangle(),Triangle(2,2),Triangle(4,4) };

	Triangle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << "삼각형의 면적은 " << p->getArea() << '\n';
		p++;
	}
	delete[] pArray;
	return 0;
}