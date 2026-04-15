// **********************************************
// 제 목 : 4_4 4장 연습문제 8
// 날 짜 : 2026년 4월 15일
// 작성자 : 2301358 김동욱
// **********************************************
#include <iostream>
#include <string>
using namespace std;



string find_protocall(string* p) {
	return p->substr(0, p->find("://"));
}

string find_host(string* p) {
	int host_end;
	int front = p->find("://") + 3;
	if (p->find(':', front) != string::npos) {
		host_end = p->find(':', front);
		return p->substr(front, host_end - front);
	}
	else if (p->find('/', front) != string::npos) {
		host_end = p->find('/', front);
		return p->substr(front, host_end - front);
	}
	else {
		return p->substr(front);
	}
}

string find_port(string* p) {
	int front = p->find("://") + 3;
	if (p->find('/', front) != string::npos) {
		if (p->find(':', front) != string::npos)
			return p->substr(p->find(':',front)+1, p->find('/', front)-p->find(':', front)-1);
		else return "80";
	}
	else {
		if (p->find(':', front) != string::npos)
			return p->substr(p->find(':', front)+1);
		else return "80";
	}
}

string find_other(string* p) {
	int front = p->find("://") + 3;
	if (p->find('/', front) != string::npos) {
		return p->substr(p->find('/', front));
	}
	else return "/";
}


int main() {
	string address;
	while (true)
	{
		cout << "웹 주소 입력>>";
		getline(cin, address);
		if (address == "그만") break;
		cout << "프로토콜: " << find_protocall(&address) << endl;
		cout << "호스트: " << find_host(&address) << endl;
		cout << "포트: " << find_port(&address) << endl;
		cout << "나머지 부분: " << find_other(&address) << endl;
	}
	return 0;
}