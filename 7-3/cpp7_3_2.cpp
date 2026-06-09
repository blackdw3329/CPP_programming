// **********************************************
// 제 목 : 7_3 실습과제2
// 날 짜 : 2026년 6월8일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

class Complex {
	int real, img;
public:
	Complex(int r = 0, int i = 0) {
		this->real = r; this->img = i;
		if (img < 0) cout << "복소수 " << real << img << 'j' << " 생성" << endl;
		else cout << "복소수 " << real << '+' << img << 'j' << " 생성" << endl;
	}
	friend Complex& operator++(Complex& op);
	friend Complex operator--(Complex& op, int x);
	void show() {
		if (img < 0) cout << real << img << 'j' << endl;
		else cout << real << '+' << img << 'j' << endl;
	}
};

Complex& operator++(Complex& op) {
	op.real++;
	op.img++;
	return op;
}

Complex operator--(Complex& op, int x) {
	Complex tmp = op;
	op.real--;
	op.img--;
	return tmp;
}




int main() {
	Complex x(2, -3);
	++x;
	cout << "증가결과 ";
	x.show();
	x--;
	cout << "감소결과 ";
	x.show();
	return 0;
}

