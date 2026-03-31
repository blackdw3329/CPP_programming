#include <iostream>
using namespace std;

class Triangle
{
public:
	Triangle() {
		width = 1; height = 1;
		cout << "Æø" << width << ", ³ôÀÌ" << height << "ÀÎ »ï°¢Çü »ý¼º" << endl;
	};
	~Triangle() { cout << "Æø" << width << ", ³ôÀÌ" << height << "ÀÎ »ï°¢Çü ¼Ò¸ê" << endl; };
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	double getArea() { return 0.5 * width * height; }
private:
	int width, height;
};



int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "»ï°¢ÇüÀÇ ¸éÀûÀº " << tri.getArea() << endl;
	return 0;
}