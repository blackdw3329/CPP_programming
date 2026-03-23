// **********************************************
// 제 목 : 3_3 실습과제5
// 날 짜 : 2026년 3월 23일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

class Sphere {
public:
	int radius;
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();

};
Sphere::Sphere() {
	radius = 1;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

Sphere::Sphere(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}

double Sphere::getVolume() {
	return radius * radius * radius * 3.14 * 4 / 3;
}

Sphere sph1(10);
Sphere sph2(20);

// 클래스 정의
int main() {

	cout << "구의 부피는 " << sph1.getVolume() << endl;
	cout << "구의 부피는 " << sph2.getVolume() << endl;
	return 0;
}