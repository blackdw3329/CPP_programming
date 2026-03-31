// **********************************************
// 제 목 : 3_5 실습과제3 연습문제 1
// 날 짜 : 2026년 3월 30일
// 작성자 : 2301358 김동욱
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Picture
{
public:
	Picture() {
		width = 5;
		height = 7;
		strcpy(location, "모름");
	}
	Picture(int w, int h, const char* loca) {
		width = w;
		height = h;
		strcpy(location, loca);
	}
	~Picture() {}

	int getWidth() { return width; }
	int getHeight() { return height; }
	const char* getPlace() { return location; }

private:
	char location[100];
	int width, height;
};

int main()
{
	Picture pic;
	Picture mt(10, 14, "한라산");
	cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
	cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
}
