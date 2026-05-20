#include <iostream>
#include <string>
using namespace std;

class Board {
	static string boardStr;
	static int boardNum;
public:
	static void add(string str);
	static void print();
};
string Board::boardStr = "";
int Board::boardNum = 0;

void Board::add(string str) {
	boardStr += to_string(++boardNum) + ": " + str + '\n';
}

void Board::print() {
	cout << "***************** 게시판.(" << boardNum << ")**************************" << endl;
	cout << boardStr << endl;
	cout << "******************************************************"<<endl;
}


int main() {
	// Board myBoard;
	while (1) {
		int menu; string text;
		cout << "1:게시글 입력, 2:게시글 보기, 3:종료>>";
		cin >> menu;
		cin.ignore(1);
		switch (menu) {
		case 1: getline(cin, text);
			Board::add(text); break;
		case 2: Board::print();break;
		case 3:return 0;
		}
	}
}