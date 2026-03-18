// **********************************************
// 제 목 : 3_2 실습과제3
// 날 짜 : 2026년3월18일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
class Rectangle 
{
public:
	int width, height;
	int x, y;
	Rectangle();
	Rectangle(int x_i, int y_i);
	Rectangle(int x_j, int y_j, int w, int h);
	int getArea();
	int getRound();
	void getCoord();
};
Rectangle::Rectangle() 
{
	width = height = x = y = 1;
}
Rectangle::Rectangle(int x_i, int y_i) 
{
	x = x_i; y = y_i; width = height = 1;
}
Rectangle::Rectangle(int x_j, int y_j, int w, int h) 
{
	width = w;  height = h; x = x_j; y = y_j;
}

int Rectangle::getArea() 
{
	return width * height;
}
int Rectangle::getRound() 
{
	return 2 * (width + height);
}
void Rectangle::getCoord() 
{
	cout << "rect3의 우측하단의 좌표는(" << x + width << ", " << y - height << ")" << endl;
}
// 정사각형이면 true를 리턴하는 멤버 함수

int main() 
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3, 5, 2, 4);
	cout << "rect1의 면적은 " << rect1.getArea() << endl;
	cout << "rect1의 둘레는 " << rect1.getRound() << endl;
	rect3.getCoord();

	return 0;
}