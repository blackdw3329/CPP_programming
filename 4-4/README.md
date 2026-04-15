# 실습과제1

## 1. string 객체의 자동 크기 조절 원리를 설명하라
> `string` 클래스는 내부적으로 동적 메모리를 사용하여 문자열 길이에 맞게 자동으로 크기를 조절합니다. 입력이 늘어나면 더 큰 메모리를 할당하고 기존 데이터를 복사하는 방식으로 확장되며, 사용자는 크기를 직접 관리할 필요가 없습니다.

## 2. 엔터키와 getline 함수의 구분문자의 차이를 설명하라
> 엔터키는 입력 스트림에서 줄의 끝을 의미하는 `\n` 문자로 저장됩니다. `getline` 함수의 구분문자는 문자열 입력을 어디까지 받을지를 결정하는 기준 문자이며, 기본값은 엔터(`\n`)입니다. 즉, 엔터는 실제 입력 데이터이고, 구분문자는 입력 종료 조건으로 사용됩니다.

# 실습과제2 소스코드 설명
</br>

```
#include <iostream>
#include <string>
```
* **입출력과 문자열 처리를 위해 `iostream`, `string` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
string str1, str2;
int count = 0;
```
* **입력 문자열(`str1`), 누적 문자열(`str2`), 입력 횟수(`count`)를 저장할 변수를 선언합니다.**

```
while (true)
```
* **문자열을 반복적으로 입력받기 위한 무한 루프입니다.**

```
cout << "문자열을 입력: ";
getline(cin, str1);
```
* **한 줄 전체를 문자열로 입력받습니다.**

```
if (str1 == "quit")
{
	break;
}
```
* **"quit"이 입력되면 반복을 종료합니다.**

```
str2 = str2 + "<" + to_string(++count) + ">" + str1;
```
* **입력 횟수를 문자열로 변환하여 `<번호>` 형태로 붙이고, 기존 문자열 뒤에 이어붙입니다.**

```
cout << "이어진 문자열: " << str2 << endl;
```
* **현재까지 이어진 문자열을 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료됩니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-2%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 실습과제3 소스코드 설명  
</br>

```
#include <iostream>
#include <string>
```
* **입출력과 문자열 처리를 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
int main()
```
* **프로그램의 시작 지점입니다.**

```
string str;
int count = 0;
```
* **입력 문자열과 문자 개수를 저장할 변수를 선언합니다.**

```
cout << "문자열을 입력: ";
getline(cin, str);
```
* **공백을 포함한 문자열을 입력받습니다.**

```
for (int i = 0; i < str.length(); i++)
```
* **문자열의 모든 문자를 순차적으로 탐색합니다.**

```
if(str[i] == 'a')
```
* **각 문자가 'a'인지 확인합니다.**

```
count++;
```
* **'a'의 개수를 증가시킵니다.**

```
cout << "문자 a는 " << count << "개 있습니다." << endl;
```
* **'a'의 총 개수를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-3%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 연습문제5 소스코드 설명  
</br>

```
#include <iostream>
#include <string>
```
* **입출력과 문자열 처리를 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
class Container
```
* **정수 배열을 관리하기 위한 클래스입니다.**

```
int* ptr;
int size;
```
* **동적 배열 포인터와 배열 크기를 저장합니다.**

```
Container(int s) {
	size = s;
	ptr = new int[size];
}
```
* **배열 크기를 설정하고 동적 메모리를 할당합니다.**

```
~Container() {
	delete[] ptr;
}
```
* **동적으로 할당한 메모리를 해제합니다.**

```
void read();
void write();
void rotate();
double avg();
```
* **입력, 출력, 회전, 평균 계산 기능을 선언합니다.**

```
void Container::read() {
	cout << "정수 " << size << "개 입력>> ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}
```
* **배열에 정수를 입력받아 저장합니다.**

```
void Container::write() {
	for (int i = 0; i < size; i++) {
		cout << ptr[i];
		cout << " ";
	}
	cout << endl;
}
```
* **배열의 모든 요소를 출력합니다.**

```
void Container::rotate() {
	int tmp = ptr[size-1];
	for (int i = size; i > 1; i--) {
		ptr[i - 1] = ptr[i - 2];
	}
	ptr[0] = tmp;
}
```
* **배열을 오른쪽으로 한 칸 회전시킵니다.**

```
double Container::avg(){
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += ptr[i];
	}
	return total / size;
}
```
* **배열 요소의 평균을 계산하여 반환합니다.**

```
int main() {
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은" << c.avg() << endl;
```
* **객체를 생성하고 입력, 출력, 회전, 평균 계산을 수행합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-4.5%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 연습문제8 소스코드 설명  
</br>

```
#include <iostream>
#include <string>
```
* **입출력과 문자열 처리를 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
string find_protocall(string* p) {
	return p->substr(0, p->find("://"));
}
```
* **URL에서 프로토콜 부분을 추출합니다.**

```
string find_host(string* p) {
	int host_end;
	int front = p->find("://") + 3;
```
* **호스트 시작 위치를 계산합니다.**

```
if (p->find(':', front) != string::npos) {
	host_end = p->find(':', front);
	return p->substr(front, host_end - front);
}
```
* **포트가 있는 경우 호스트를 추출합니다.**

```
else if (p->find('/', front) != string::npos) {
	host_end = p->find('/', front);
	return p->substr(front, host_end - front);
}
```
* **경로가 있는 경우 호스트를 추출합니다.**

```
else {
	return p->substr(front);
}
```
* **끝까지가 호스트인 경우 추출합니다.**

```
string find_port(string* p) {
	int front = p->find("://") + 3;
```
* **포트 시작 기준 위치를 설정합니다.**

```
if (p->find('/', front) != string::npos) {
	if (p->find(':', front) != string::npos)
		return p->substr(p->find(':',front)+1, p->find('/', front)-p->find(':', front)-1);
	else return "80";
}
```
* **경로가 있을 때 포트를 추출하거나 기본값 80을 반환합니다.**

```
else {
	if (p->find(':', front) != string::npos)
		return p->substr(p->find(':', front)+1);
	else return "80";
}
```
* **경로가 없을 때 포트를 추출하거나 기본값 80을 반환합니다.**

```
string find_other(string* p) {
	int front = p->find("://") + 3;
```
* **나머지 경로의 시작 위치를 설정합니다.**

```
if (p->find('/', front) != string::npos) {
	return p->substr(p->find('/', front));
}
```
* **경로 부분을 추출합니다.**

```
else return "/";
```
* **경로가 없으면 기본값 "/"를 반환합니다.**

```
int main() {
	string address;
	while (true)
```
* **문자열 입력을 반복하기 위한 구조입니다.**

```
cout << "웹 주소 입력>>";
getline(cin, address);
```
* **웹 주소를 입력받습니다.**

```
if (address == "그만") break;
```
* **"그만" 입력 시 반복을 종료합니다.**

```
cout << "프로토콜: " << find_protocall(&address) << endl;
cout << "호스트: " << find_host(&address) << endl;
cout << "포트: " << find_port(&address) << endl;
cout << "나머지 부분: " << find_other(&address) << endl;
```
* **각 구성 요소를 분리하여 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-4.8%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 연습문제9 소스코드 설명  
</br>

```
#include <iostream>
```
* **입출력을 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
class Book {
```
* **책 정보를 저장하기 위한 클래스입니다.**

```
string title;
int price;
```
* **책 제목과 가격을 저장합니다.**

```
Book() { title = ""; price = 0; }
```
* **초기값을 설정하는 기본 생성자입니다.**

```
void set(string title, int price) {
	this->title = title;
	this->price = price;
}
```
* **책 제목과 가격을 설정합니다.**

```
string getTitle() { return title; }
int getPrice() { return price; }
```
* **책 제목과 가격을 반환합니다.**

```
class Library {
```
* **도서관 정보를 관리하는 클래스입니다.**

```
string name;
Book* p;
int size;
int next = 0;
```
* **도서관 이름, 책 배열, 크기, 현재 저장 개수를 관리합니다.**

```
Library(string name, int size);
~Library();
```
* **생성자와 소멸자를 선언합니다.**

```
void add(string name, int price);
void show();
Book* mostExpensive();
```
* **책 추가, 출력, 최고가 책 탐색 기능을 선언합니다.**

```
Library::Library(string n, int s) {
	name = n;
	size = s;
	p = new Book[s];
}
```
* **도서관 이름 설정 및 동적 배열을 생성합니다.**

```
Library::~Library() { delete[] p; }
```
* **동적 할당된 배열을 해제합니다.**

```
void Library::add(string t, int pric) {
	(p+next++)->set(t, pric);
}
```
* **다음 위치에 책 정보를 저장합니다.**

```
void Library::show() {
	cout << name << "에 입고된 책은 다음 " << next << "권입니다." << endl;
```
* **도서관 정보와 책 개수를 출력합니다.**

```
for (int i = 0; i < next; i++)
```
* **저장된 책을 순차적으로 탐색합니다.**

```
cout << '[';
cout << (p+i)->getTitle();
cout << ']' << "   ";
```
* **각 책의 제목을 출력합니다.**

```
cout << endl;
```
* **출력을 마무리합니다.**

```
Book* Library::mostExpensive() {
	if (next == 0) return nullptr;
```
* **책이 없으면 null을 반환합니다.**

```
int max = p->getPrice();
Book* max_p = p;
```
* **최대값과 해당 책을 초기 설정합니다.**

```
for (int i = 0; i < next; i++)
```
* **모든 책을 비교합니다.**

```
if (max < (p + i)->getPrice()) {
	max = (p + i)->getPrice();
	max_p = (p + i);
}
```
* **더 비싼 책이 있으면 갱신합니다.**

```
return max_p;
```
* **가장 비싼 책의 주소를 반환합니다.**

```
int main() {
	Library* lib = new Library("한국도서관", 10);
```
* **도서관 객체를 동적으로 생성합니다.**

```
lib->add("명품 C++", 30000);
lib->add("라즈베리파이", 34000);
lib->add("HTML5", 33000);
lib->add("자료구조론", 32000);
lib->add("선형대수학", 35000);
```
* **여러 권의 책을 추가합니다.**

```
lib->show();
```
* **책 목록을 출력합니다.**

```
Book* b = lib->mostExpensive();
```
* **가장 비싼 책을 찾습니다.**

```
cout << "가장 비싼 책: " << b->getTitle() << ", " << b->getPrice() << endl;
```
* **가장 비싼 책의 정보를 출력합니다.**

```
delete lib;
```
* **동적으로 생성한 객체를 해제합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-4.9%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 연습문제11 소스코드 설명  
</br>

```
#include <iostream>
```
* **입출력을 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
class Container {
    int size;
```
* **재료의 양을 저장하는 클래스입니다.**

```
Container() { size = 10; }
```
* **초기 재료 양을 10으로 설정합니다.**

```
void fill(int n) { size = n; }
```
* **재료 양을 지정한 값으로 채웁니다.**

```
bool consume(int n) {
    if (size < n) return false;
    size -= n;
    return true;
}
```
* **재료를 소비하고 부족하면 실패를 반환합니다.**

```
int getSize() { return size; }
```
* **현재 재료 양을 반환합니다.**

```
class CoffeeVendingMachine {
```
* **커피 자판기를 구현한 클래스입니다.**

```
Container tong[3];
```
* **커피, 물, 설탕을 저장하는 배열입니다.**

```
void is_empty() { cout << "원료가 부족합니다." << endl; }
```
* **재료 부족 메시지를 출력합니다.**

```
void show() {
    cout << "커피 " << tong[0].getSize()
        << ", 물 " << tong[1].getSize()
        << ", 설탕 " << tong[2].getSize() << endl;
}
```
* **현재 재료 상태를 출력합니다.**

```
void getEspresso() {
    if (tong[0].consume(1) && tong[1].consume(1))
        cout << "에스프레소 드세요"<<endl;
    else { is_empty(); return; }
}
```
* **에스프레소 제조 시 재료를 소비합니다.**

```
void getAmericano() {
    if (tong[0].consume(1) && tong[1].consume(2))
        cout << "아메리카노 드세요"<<endl;
    else { is_empty(); return; }
}
```
* **아메리카노 제조 시 재료를 소비합니다.**

```
void getSugarCoffee() {
    if (tong[0].consume(1) && tong[1].consume(2) && tong[2].consume(1))
        cout << "설탕커피 드세요"<<endl;
    else { is_empty(); return; }
}
```
* **설탕커피 제조 시 재료를 소비합니다.**

```
void fill() {
    for (int i = 0; i < 3; i++) tong[i].fill(10);
}
```
* **모든 재료를 다시 채웁니다.**

```
CoffeeVendingMachine() {
    for (int i = 0; i < 3; i++) tong[i].fill(10);
}
```
* **초기 재료를 모두 채운 상태로 설정합니다.**

```
void run() {
    while (true) {
```
* **사용자 입력을 계속 받기 위한 반복문입니다.**

```
cout << "다음 선택: 1.에스프레소, 2.아메리카노, 3.설탕커피, 4.잔량 보기, 5.채우기>>";
int menu;
cin >> menu;
```
* **메뉴를 입력받습니다.**

```
switch (menu) {
```
* **입력값에 따라 기능을 분기합니다.**

```
case 1: getEspresso(); break;
case 2: getAmericano(); break;
case 3: getSugarCoffee(); break;
case 4: show(); break;
case 5: fill(); break;
```
* **선택한 메뉴에 맞는 기능을 실행합니다.**

```
default: return;
```
* **기타 입력 시 프로그램을 종료합니다.**

```
int main() {
    CoffeeVendingMachine m;
```
* **자판기 객체를 생성합니다.**

```
cout << "***** 커피자판기를 작동합니다. *****" << endl;
```
* **프로그램 시작 메시지를 출력합니다.**

```
m.run();
```
* **자판기 실행을 시작합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-4-4.11%EA%B2%B0%EA%B3%BC.png?raw=true" />
