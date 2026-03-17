// **********************************************
// 제 목 : 3_1 실습과제4
// 날 짜 : 2026년 3월17일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;

class Rectangle {
public:
	int x=1;
	int y=2;
	int width=3;
	int height=4;
	int getArea();
	int getRound();
	int getCoord();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getRound() {
	return 2 * (width + height);
}

int Rectangle::getCoord() {
	cout << "사각형의 우측하단 죄표는 (" << x + width << "," << y - height << ")" << endl;
	return 0;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 둘레길이는 " << rect.getRound() << endl;
	rect.getCoord();

	return 0;
}