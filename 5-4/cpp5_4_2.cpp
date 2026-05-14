// **********************************************
// 제 목 : 5_4 실습과제2
// 날 짜 : 2026년 5월 13일
// 작성자 : 김동욱
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int id;

public:
    Person(int id, const string name);
    Person(const Person& person);
    ~Person();

    void changeName(const string name);

    void show() {
        cout << id << ", " << name << endl;
    }
};

Person::Person(int id, const string name) {
    this->id = id;
    this->name = name;
}

Person::Person(const Person& person) {
    this->id = person.id;
    this->name = person.name;

    cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
}

void Person::changeName(const string name) {
    this->name = name;
}

int main() {
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");

    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}
