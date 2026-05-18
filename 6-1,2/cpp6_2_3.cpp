#include <iostream>
using namespace std;

class Point3D {
	int p1, p2, p3;
public:
	Point3D(int p1 = 0, int p2 = 0, int p3 = 0) { this->p1 = p1; this->p2 = p2; this->p3 = p3; }
	void show() {
		cout << "3차원 점의 좌표는 (" << p1 << "," << p2 << "," << p3 << ")" << endl;
	}
};

int main() {
	Point3D p0;
	p0.show();
	Point3D p1(1);
	p1.show();
	Point3D p2(1, 2);
	p2.show();
	Point3D p3(1, 2, 3);
	p3.show();
	return 0;
}