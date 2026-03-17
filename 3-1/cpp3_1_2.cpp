// **********************************************
// 제 목 : 3_1 실습과제2
// 날 짜 : 2026년 3월16일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;

class Triangle
{
public:
	int height;
	int width;
	double getArea();
};
double Triangle::getArea()
{
	return 0.5 * width * height;
}
int main()
{
	Triangle tri;
	tri.width = 3;
	tri.height = 5;
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	cout << sizeof(tri.getArea()) << endl;


	return 0;
}