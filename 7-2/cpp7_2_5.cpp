#include <iostream>
using namespace std;

class Complex {
	int img, real;
public:
	Complex(int real = 0, int img = 0) { this->real = real; this->img = img; }
	void show();
	Complex operator-(int n);
};
void Complex::show() {
	cout << this->real << "+" << this->img << "j" << endl;
}
Complex Complex::operator-(int n) {
	Complex tmp;
	tmp.img = this->img - n;
	tmp.real = this->real - n;
	return tmp;
}

int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2; // 복소수 객체와 정수 빼기
	a.show();
	b.show();
	return 0;
}