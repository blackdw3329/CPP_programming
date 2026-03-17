// **********************************************
// 제 목 : 3_1 실습과제3
// 날 짜 : 2026년 3월17일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

class Sphere
{
public:
	int rad;
	double getVolume();
	double getArea();
};

double Sphere::getVolume()
{
	return 4.0 / 3.0 * 3.14 * rad * rad * rad;
}

double Sphere::getArea()
{
	return 4 * 3.14 * rad * rad;
}



int main()
{
	Sphere sp;

	sp.rad = 5;
	cout << "구의 부피는: " << sp.getVolume() << endl;
	cout << "구의 표면적은: " << sp.getArea() << endl;

	return 0;
}