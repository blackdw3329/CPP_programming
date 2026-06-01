#include <iostream>
using namespace std;

class Complex {
	int img, real;
public:
	Complex(int real = 0, int img = 0) { this->real = real; this->img = img; }
	void show();
	Complex operator+(Complex b);
};
void Complex::show() {
	if (this->img > 0) cout << this->real << "+" << this->img << "j" << endl;
	else cout << this->real << this->img << "j" << endl; 
}
Complex Complex::operator+(Complex b) {
	Complex tmp;
	tmp.img = this->img + b.img;
	tmp.real = this->real + b.real;
	return tmp;

}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x + y;
	cout << "두 복소수의 합은 ";
	sum.show();
	return 0;
}
