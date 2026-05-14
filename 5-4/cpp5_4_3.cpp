// **********************************************
// 제 목 : 5_4 실습과제3
// 날 짜 : 2026년 5월 13일
// 작성자 : 김동욱
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Mystack {
	int* p;			//배열 주소
	int size;	//배열의 크기
	int tos;	//다음에 저장할 배열의 인덱스
public:
	Mystack();
	Mystack(int size);
	Mystack(const Mystack& src);
	~Mystack();
	bool push(int n);	//꽉 차있으면 false 비어있으면 true
	bool pop(int& n);	//비어있으면 false 비어있으면 true

};
Mystack::Mystack() :Mystack(10) {}
Mystack::Mystack(int size) {
	this->size = size;
	this->tos = 0;
	p = new int[size];
}
Mystack::Mystack(const Mystack& src) {
	this->size = src.size;
	this->tos = src.tos;

	p = new int[size];

	for (int i = 0; i < tos; i++) {
		p[i] = src.p[i];
	}
}
Mystack::~Mystack() {
	delete[]p;
}
bool Mystack::push(int n) {
	if (size <= tos) return false;
	else {
		p[tos++] = n;
		return true;
	}
}
bool Mystack::pop(int& n) {
	if (tos == 0) return false;
	else {
		n = p[--tos];
		return true;
	}
}

int main() {
	Mystack a(10);
	a.push(10);
	a.push(20);

	Mystack b = a;
	b.push(30);
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;	//20
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;	//30
}