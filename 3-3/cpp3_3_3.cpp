// **********************************************
// Á¦ ¸ñ : 3_3 ½Ç½À°úÁ¦2
// ³¯ Â¥ : 2026³â 3¿ù 23ÀÏ
// ÀÛ¼ºÀÚ : 2301358 ±èµ¿¿í
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
Triangle::Triangle() {
	width = 1; height = 1;
	cout << "¹Øº¯ " << width << "³ôÀÌ" << height << "ÀÎ »ï°¢Çü »ý¼º" << endl;
}

Triangle::Triangle(int w, int h) {
	width = w; height = h;
	cout << "¹Øº¯ " << width << "³ôÀÌ" << height << "ÀÎ »ï°¢Çü »ý¼º" << endl;
}

Triangle::~Triangle() {
	cout << "¹Øº¯ " << width << "³ôÀÌ" << height << "ÀÎ »ï°¢Çü ¼Ò¸ê" << endl;
}

double Triangle::getArea() {
	return 0.5 * width * height;
}

Triangle tri1(4, 8);
Triangle tri2(2, 2);

// Å¬·¡½º Á¤ÀÇ
int main() {
	cout << "»ï°¢ÇüÀÇ ¸éÀûÀº" << tri2.getArea() << endl;
	cout << "»ï°¢ÇüÀÇ ¸éÀûÀº" << tri1.getArea() << endl;
	return 0;
}