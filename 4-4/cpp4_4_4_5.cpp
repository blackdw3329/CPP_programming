// **********************************************
// 제 목 : 4_4 4장 연습문제 5
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>
#include <string>
using namespace std;

class Container
{
private:
	int* ptr;
	int size;
public:
	Container(int s) {
		size = s;
		ptr = new int[size];
	}
	~Container() {
		delete[] ptr;
	}
	void read();
	void write();
	void rotate();
	double avg();

};

void Container::read() {
	cout << "정수 " << size << "개 입력>> ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}

void Container::write() {
	for (int i = 0; i < size; i++) {
		cout << ptr[i];
		cout << " ";
	}
	cout << endl;
}

void Container::rotate() {
	int tmp = ptr[size-1];
	for (int i = size; i > 1; i--) {
		ptr[i - 1] = ptr[i - 2];
	}
	ptr[0] = tmp;
}

double Container::avg(){
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += ptr[i];
	}
	return total / size;
}

int main() {
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은" << c.avg() << endl;

	return 0;
}