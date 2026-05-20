#include <iostream>
using namespace std;

class Triangle {
private:
	static int total;
public:
	Triangle() {total++; }
	~Triangle() { total--; }
	static int getNumofTriangle() { return total; }

};
int Triangle::total = 0;

int main() {
	Triangle* tri1 = new Triangle[5];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	delete[] tri1;
	Triangle tri2[15];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	return 0;
}
