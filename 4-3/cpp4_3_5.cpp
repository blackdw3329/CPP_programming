// **********************************************
// 제 목 : 4_3 실습과제4
// 날 짜 : 2026년 4월 8일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;
class Sphere {
	int radius;
public:
	Sphere();
	~Sphere() {}
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius * radius * 4 / 3; }
};
Sphere::Sphere() {
	radius = 1;
}
int main() {
	cout << "생성하고자 하는 구의 개수: ";
	int n, radius;
	cin >> n;
	Sphere* pArray = new Sphere[n];
	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> radius;
		(pArray + i)->setRadius(radius);
	}
	for (int j = 0; j < n; j++) {
		cout << "구" << j + 1 << "의 부피: " << (pArray + j)->getArea() << endl;
	}
	delete[] pArray;
	return 0;
}