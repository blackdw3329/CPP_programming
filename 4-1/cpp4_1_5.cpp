// **********************************************
// 제 목 : 4_1 실습과제5
// 날 짜 : 2026년 4월 1일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
using namespace std;


class Triangle
{
public:
	Triangle(int w, int h) { width = w; height = h; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; this->width = w; }
	void setHeight(int h) { if (h <= 0)return; this->height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};

int main() {
	Triangle tri_array[3] = { Triangle(2,2),Triangle(4,4),Triangle(6,6) };
	Triangle* p = tri_array;
	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은 " << (p + i)->getArea() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은 " << p[i].getArea() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
	return 0;
}