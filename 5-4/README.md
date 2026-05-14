# 실습과제1

## 1. 일반생성자와 복사생성자의 차이는?
> 일반생성자는 객체를 처음 생성하며 값을 초기화합니다.  
> 복사생성자는 기존 객체의 값을 복사하여 새로운 객체를 생성합니다.

---

## 2. 대입연산과 얕은 복사생성자의 차이는 무엇인가?
> 대입연산은 이미 생성된 객체에 값을 복사합니다.  
> 얕은 복사생성자는 객체 생성 시 멤버 값만 단순 복사합니다.

---

## 3. 지금까지 배운 내용기준으로 컴파일러가 자동으로 추가하는 멤버함수는 어떤 것이 있는가?(4가지)
> 생성자, 복사 생성자, 소멸자, 대입 연산자 함수가 자동으로 추가될 수 있습니다.

---

# 실습과제2 소스코드 설명  
</br>

```
#define _CRT_SECURE_NO_WARNINGS
```
* **Visual Studio의 보안 경고를 제거하기 위한 전처리문입니다.**

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
class Person {
```
* **사람 정보를 저장하는 클래스입니다.**

```
string name;
int id;
```
* **이름과 ID를 저장하는 멤버 변수입니다.**

```
Person(int id, const string name);
Person(const Person& person);
~Person();
```
* **생성자, 복사 생성자, 소멸자를 선언합니다.**

```
void changeName(const string name);
```
* **이름을 변경하는 함수를 선언합니다.**

```
void show() {
    cout << id << ", " << name << endl;
}
```
* **객체 정보를 출력합니다.**

```
Person::Person(int id, const string name) {
    this->id = id;
    this->name = name;
}
```
* **ID와 이름을 초기화하는 생성자입니다.**

```
Person::Person(const Person& person) {
    this->id = person.id;
    this->name = person.name;
```
* **원본 객체의 값을 복사하는 복사 생성자입니다.**

```
cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
```
* **복사 생성자 실행 메시지를 출력합니다.**

```
Person::~Person() {
}
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
void Person::changeName(const string name) {
    this->name = name;
}
```
* **객체의 이름을 변경합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Person father(1, "Kitae");
```
* **father 객체를 생성합니다.**

```
Person daughter(father);
```
* **복사 생성자를 이용하여 daughter 객체를 생성합니다.**

```
cout << "daughter 객체 생성 직후 ----" << endl;
```
* **객체 생성 후 상태를 출력하기 위한 메시지입니다.**

```
father.show();
daughter.show();
```
* **두 객체의 정보를 출력합니다.**

```
daughter.changeName("Grace");
```
* **daughter 객체의 이름을 변경합니다.**

```
cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
```
* **이름 변경 후 상태를 출력하기 위한 메시지입니다.**

```
father.show();
daughter.show();
```
* **변경 후 객체 정보를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-4-2.png?raw=true" />

# 실습과제3 소스코드 설명  
</br>

```
#define _CRT_SECURE_NO_WARNINGS
```
* **Visual Studio의 보안 경고를 제거하기 위한 전처리문입니다.**

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
class Mystack {
```
* **정수형 스택을 구현하기 위한 클래스입니다.**

```
int* p;
int size;
int tos;
```
* **배열 주소, 배열 크기, 다음 저장 위치를 저장합니다.**

```
Mystack();
Mystack(int size);
Mystack(const Mystack& src);
~Mystack();
```
* **기본 생성자, 생성자, 복사 생성자, 소멸자를 선언합니다.**

```
bool push(int n);
bool pop(int& n);
```
* **스택에 값을 삽입하고 삭제하는 함수를 선언합니다.**

```
Mystack::Mystack() :Mystack(10) {}
```
* **기본 크기 10으로 생성자를 위임합니다.**

```
Mystack::Mystack(int size) {
	this->size = size;
	this->tos = 0;
	p = new int[size];
}
```
* **스택 크기를 설정하고 동적 배열을 생성합니다.**

```
Mystack::Mystack(const Mystack& src) {
	this->size = src.size;
	this->tos = src.tos;
```
* **원본 스택의 크기와 위치 정보를 복사합니다.**

```
p = new int[size];
```
* **깊은 복사를 위해 새로운 배열을 생성합니다.**

```
for (int i = 0; i < tos; i++) {
	p[i] = src.p[i];
}
```
* **원본 스택의 데이터를 새 배열에 복사합니다.**

```
Mystack::~Mystack() {
	delete[]p;
}
```
* **동적으로 할당한 배열 메모리를 해제합니다.**

```
bool Mystack::push(int n) {
	if (size <= tos) return false;
```
* **스택이 가득 차면 삽입 실패를 반환합니다.**

```
else {
	p[tos++] = n;
	return true;
}
```
* **값을 저장하고 다음 저장 위치를 증가시킵니다.**

```
bool Mystack::pop(int& n) {
	if (tos == 0) return false;
```
* **스택이 비어 있으면 삭제 실패를 반환합니다.**

```
else {
	n = p[--tos];
	return true;
}
```
* **마지막 값을 꺼내고 삭제 성공을 반환합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Mystack a(10);
```
* **크기가 10인 스택 객체를 생성합니다.**

```
a.push(10);
a.push(20);
```
* **스택 a에 값을 삽입합니다.**

```
Mystack b = a;
```
* **복사 생성자를 이용하여 스택 b를 생성합니다.**

```
b.push(30);
```
* **스택 b에 값을 추가합니다.**

```
int n;
```
* **pop한 값을 저장할 변수를 선언합니다.**

```
a.pop(n);
cout << "스택 a에서 팝한 값 " << n << endl;
```
* **스택 a에서 값을 꺼내 출력합니다.**

```
b.pop(n);
cout << "스택 b에서 팝한 값 " << n << endl;
```
* **스택 b에서 값을 꺼내 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-4-3.png?raw=true" />

# 실습과제4 소스코드 설명  
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
class Collector
```
* **정수 데이터를 저장하고 관리하는 클래스입니다.**

```
int* p;
int size = 0;
```
* **동적 배열 주소와 데이터 개수를 저장합니다.**

```
Collector(int size, int values[]);
Collector(const Collector& src);
~Collector();
```
* **생성자, 복사 생성자, 소멸자를 선언합니다.**

```
void show();
int getSize() { return size; }
int get(int index) { return p[index]; }
```
* **출력, 데이터 개수 반환, 데이터 반환 기능을 제공합니다.**

```
Collector::Collector(int size, int values[])
{
	this->size = size;
	this->p = new int[size];
```
* **배열 크기를 설정하고 동적 배열을 생성합니다.**

```
for (int i = 0; i < size; i++)
{
	p[i] = values[i];
}
```
* **입력 배열 데이터를 복사합니다.**

```
Collector::Collector(const Collector& src)
{
	this->size = src.size;
	this->p = new int[size];
```
* **복사 생성자를 이용하여 새 배열을 생성합니다.**

```
for (int i = 0; i < size; i++)
{
	this->p[i] = src.p[i];
}
```
* **원본 객체의 데이터를 깊은 복사합니다.**

```
Collector::~Collector() { delete[] p; }
```
* **동적 할당된 메모리를 해제합니다.**

```
void Collector::show() {
	cout << "데이터 수 " << this->size << ": ";
```
* **데이터 개수를 출력합니다.**

```
for (int i = 0; i < this->size; i++)
{
	cout << p[i] << " ";
}
```
* **배열의 모든 데이터를 출력합니다.**

```
cout << endl;
```
* **출력을 마무리합니다.**

```
double calcAvg(Collector w) {
```
* **객체를 복사 받아 평균을 계산하는 함수입니다.**

```
int total = 0;
```
* **총합을 저장할 변수를 선언합니다.**

```
for (int i = 0; i < w.getSize(); i++)
{
	total += w.get(i);
}
```
* **배열 데이터를 모두 더합니다.**

```
return (double)total / w.getSize();
```
* **평균값을 계산하여 반환합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
int temp[] = { 69, 70, 71, 72, 74 };
```
* **초기 데이터를 저장한 배열입니다.**

```
Collector weight(4, temp);
```
* **Collector 객체를 생성합니다.**

```
double avg = calcAvg(weight);
```
* **평균값을 계산합니다.**

```
weight.show();
```
* **객체 데이터를 출력합니다.**

```
cout << "평균은 " << avg << endl;
```
* **평균값을 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-4-4.png?raw=true" />
