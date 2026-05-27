#include <iostream>
using namespace std;

class Complex;
class ComplexManager {
public:
	Complex ComplexAdd(Complex& x, Complex& y);
};
class Complex {
	int real;
	int img;
public:
	friend ComplexManager;
	Complex(int x = 0, int y = 0) { real = x; img = y; cout << "복소수 " << this->real << "+" << this->img << "j 생성" << endl; }
	void show() { cout << this->real << "+" << this->img << "j" << endl; }
	Complex ComplexAdd(Complex& x, Complex& y) {
		Complex c;
		c.real = x.real + y.real;
		c.img = x.img + y.img;
		return c;
	}
};

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	ComplexManager man;
	sum = man.ComplexAdd(x, y);
	cout << "두 복소수의 합은 ";
	sum.show();
}
