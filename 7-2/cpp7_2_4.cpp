#include <iostream>
using namespace std;

class Complex {
	int img, real;
public:
	Complex(int real = 0, int img = 0) { this->real = real; this->img = img; }
	void show();
	Complex& operator+=(Complex b);
};
void Complex::show() {
	cout << this->real << "+" << this->img << "j" << endl;
}
Complex& Complex::operator+=(Complex b) {
	this->img = this->img + b.img;
	this->real = this->real + b.real;
	return *this;
}

int main() {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();
	return 0;
}