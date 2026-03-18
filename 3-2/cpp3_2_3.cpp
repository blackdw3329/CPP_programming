// **********************************************
// 제 목 : 3_2 실습과제3
// 날 짜 : 2026년 3월 18일
// 작성자 : 2301358 김동욱
// **********************************************



#include <iostream>
using namespace std;

class Sphere
{
public:
	int radius;
	double getVolume();
	Sphere();
	Sphere(int r);
	

private:

};

Sphere::Sphere() :Sphere(1) {}
Sphere::Sphere(int r)
{
	radius = r;
}
double Sphere::getVolume()
{
	return 4.0 / 3.0 * 3.14 * radius * radius * radius;
}

int main()
{
	Sphere sph1;
	cout << "구의 부피는 " << sph1.getVolume() << endl;
	
	Sphere sph2(3);
	cout << "구의 부피는 " << sph2.getVolume() << endl;
	return 0;
}
