// **********************************************
// 제 목 : 4_1 실습과제3
// 날 짜 : 2026년 4월 1일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;


class Triangle
{
public:
	Triangle() { this->height = 1; this->width = 1; }
	Triangle(int h) { this->height = h; this->width = 1; }
	Triangle(int h, int w) { this->height = h; this->width = w; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; this->width = w; }
	void setHeight(int h) { if (h <= 0)return; this->height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};

int main() {
	Triangle tri1; // 밑변=높이=1로 초기화
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(10); // 밑변=10,높이=1로 초기화
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	Triangle tri3(10, 2); // 밑변=10,높이=2로 초기화
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;
	return 0;
}