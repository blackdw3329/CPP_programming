// **********************************************
// 제 목 : 3_2 실습과제2
// 날 짜 : 2026년 3월18일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;

class Triangle 
{
public:
	int width;
	int height;
	Triangle();
	Triangle(int w, int h);
	double getArea();

};

Triangle::Triangle(int w, int h)
{
	width = w;
	height = h;
}

Triangle::Triangle() :Triangle(1, 1) {}

double Triangle::getArea()
{
	return width * height * 1.0 / 2.0;
}

int main() 
{
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;

	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
