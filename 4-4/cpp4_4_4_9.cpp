// **********************************************
// 제 목 : 4_4 4장 연습문제 9
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************

#include <iostream>

using namespace std;

class Book {
private:
	string title;
	int price;
public:
	Book() { title = ""; price = 0; }
	void set(string title, int price) {
		this->title = title;
		this->price = price;
	}
	string getTitle() { return title; }
	int getPrice() { return price; }
};
class Library {
private:
	string name;
	Book* p;
	int size;
	int next = 0;
public:
	Library(string name, int size);
	~Library();
	void add(string name, int price);
	void show();
	Book* mostExpensive();
};

Library::Library(string n, int s) {
	name = n;
	size = s;
	p = new Book[s];
}
Library::~Library() { delete[] p; }

void Library::add(string t, int pric) {
	(p+next++)->set(t, pric);
}
void Library::show() {
	cout << name << "에 입고된 책은 다음 " << next << "권입니다." << endl;
	for (int i = 0; i < next; i++)
	{
		cout << '[';
		cout << (p+i)->getTitle();
		cout << ']' << "   ";
	}
	cout << endl;
}
Book* Library::mostExpensive() {
	if (next == 0) return nullptr;
	int max = p->getPrice();
	Book* max_p = p;
	for (int i = 0; i < next; i++)
	{
		if (max < (p + i)->getPrice()) {
			max = (p + i)->getPrice();
			max_p = (p + i);
		}
	}
	return max_p;
}

int main() {
	Library* lib = new Library("한국도서관", 10);
	lib->add("명품 C++", 30000);
	lib->add("라즈베리파이", 34000);
	lib->add("HTML5", 33000);
	lib->add("자료구조론", 32000);
	lib->add("선형대수학", 35000);
	lib->show();
	Book* b = lib->mostExpensive();
	cout << "가장 비싼 책: " << b->getTitle() << ", " << b->getPrice() << endl;
	delete lib;
}