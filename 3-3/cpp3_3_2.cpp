// **********************************************
// 제 목 : 3_3 실습과제2
// 날 짜 : 2026년 3월 23일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

class Triangle {
public:
	int width;
	int height;
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea();

};

Triangle::Triangle() : Triangle(1, 1) {}

Triangle::Triangle(int w, int h) {
	width = w; height = h;
	cout << "밑변 " << width << "높이" << height << "인 삼각형 생성" << endl;
}

Triangle::~Triangle() {
	cout << "밑변 " << width << "높이" << height << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return 0.5 * width * height;
}


// 클래스 정의
int main() {
	Triangle tri1; //밑변,높이 1로 초기화
	cout << "삼각형의 면적은" << tri1.getArea() << endl;
	Triangle tri2(2, 4); //밑변=2,높이=4로 초기화
	cout << "삼각형의 면적은" << tri2.getArea() << endl;
	return 0;
}
