# 실습과제 1-1

## 1. C언어와 C++언어에서 컴파일러가 호출할 함수를 결정하는 방식의 차이를 설명하라.
> C언어는 함수 이름만으로 호출할 함수를 결정합니다.  
> C++언어는 함수 이름뿐 아니라 매개변수의 개수와 자료형까지 함께 비교하여 호출할 함수를 결정합니다.

---

# 실습과제 1-2 소스코드 설명  
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

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/6-1-2.png?raw=true" />

# 실습과제 1-3 소스코드 설명  
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
class Rectangle {
```
* **사각형 정보를 저장하는 클래스입니다.**

```
int width, height;
```
* **사각형의 폭과 높이를 저장합니다.**

```
Rectangle() :Rectangle(1, 1) {}
```
* **기본 생성자에서 폭과 높이를 1로 초기화합니다.**

```
Rectangle(int w) {
	this->width = w;
	this->height = 1;
}
```
* **폭만 입력받아 높이는 1로 초기화합니다.**

```
Rectangle(int w, int h) {
	this->width = w;
	this->height = h;
}
```
* **폭과 높이를 모두 초기화하는 생성자입니다.**

```
void show() {
	cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
}
```
* **사각형의 폭과 높이를 출력합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Rectangle rect0;
```
* **기본 생성자를 이용하여 객체를 생성합니다.**

```
rect0.show();
```
* **rect0 객체 정보를 출력합니다.**

```
Rectangle rect1(10);
```
* **폭만 지정하여 객체를 생성합니다.**

```
rect1.show();
```
* **rect1 객체 정보를 출력합니다.**

```
Rectangle rect2(10, 20);
```
* **폭과 높이를 지정하여 객체를 생성합니다.**

```
rect2.show();
```
* **rect2 객체 정보를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/6-1-3.png?raw=true" />

# 실습과제 1-4 소스코드 설명  
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
class Point3D {
```
* **3차원 좌표를 저장하는 클래스입니다.**

```
int p1, p2, p3;
```
* **x, y, z 좌표값을 저장합니다.**

```
Point3D():Point3D(0,0,0){}
```
* **기본 생성자에서 모든 좌표를 0으로 초기화합니다.**

```
Point3D(int p1) {
	this->p1 = p1;
	this->p2 = 0;
	this->p3 = 0;
}
```
* **x 좌표만 입력받고 나머지는 0으로 초기화합니다.**

```
Point3D(int p1, int p2){
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = 0;
}
```
* **x, y 좌표를 입력받고 z 좌표는 0으로 초기화합니다.**

```
Point3D(int p1, int p2, int p3){
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}
```
* **x, y, z 좌표를 모두 초기화합니다.**

```
void show() {
	cout << "3차원 점의 좌표는 (" << p1 << "," << p2 << "," << p3 << ")" << endl;
}
```
* **현재 좌표값을 출력합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Point3D p0;
```
* **기본 생성자를 이용하여 객체를 생성합니다.**

```
p0.show();
```
* **p0 객체의 좌표를 출력합니다.**

```
Point3D p1(1);
```
* **x 좌표만 지정하여 객체를 생성합니다.**

```
p1.show();
```
* **p1 객체의 좌표를 출력합니다.**

```
Point3D p2(1, 2);
```
* **x, y 좌표를 지정하여 객체를 생성합니다.**

```
p2.show();
```
* **p2 객체의 좌표를 출력합니다.**

```
Point3D p3(1, 2, 3);
```
* **x, y, z 좌표를 지정하여 객체를 생성합니다.**

```
p3.show();
```
* **p3 객체의 좌표를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/6-1-4.png?raw=true" />

# 실습과제 2-1

## 1. 디폴트 매개변수는 함수의 선언에서 정의해주어야 한다. 이유를 설명하라.
> 함수 호출 시 컴파일러가 인자의 개수를 확인해야 하므로 선언 단계에서 디폴트 값을 알아야 합니다.

---

## 2. 만약 함수의 정의에서 디폴트 매개변수를 지정하면 어떻게 되는가?
> 함수 호출 전에 디폴트 값을 알 수 없어 컴파일 오류가 발생할 수 있습니다.

---

# 실습과제 2-2 소스코드 설명  
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
class Rectangle {
```
* **사각형 정보를 저장하는 클래스입니다.**

```
int width, height;
```
* **사각형의 폭과 높이를 저장합니다.**

```
Rectangle(int w = 1, int h = 1) {
	this->width = w;
	this->height = h;
}
```
* **디폴트 매개변수를 이용하여 폭과 높이를 초기화합니다.**

```
void show() {
	cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
}
```
* **사각형의 폭과 높이를 출력합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Rectangle rect0;
```
* **기본값을 사용하여 객체를 생성합니다.**

```
rect0.show();
```
* **rect0 객체 정보를 출력합니다.**

```
Rectangle rect1(10);
```
* **폭만 지정하여 객체를 생성합니다.**

```
rect1.show();
```
* **rect1 객체 정보를 출력합니다.**

```
Rectangle rect2(10, 20);
```
* **폭과 높이를 지정하여 객체를 생성합니다.**

```
rect2.show();
```
* **rect2 객체 정보를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/6-2-2.png?raw=true" />

# 실습과제 2-3 소스코드 설명  
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
class Point3D {
```
* **3차원 좌표를 저장하는 클래스입니다.**

```
int p1, p2, p3;
```
* **x, y, z 좌표값을 저장합니다.**

```
Point3D(int p1 = 0, int p2 = 0, int p3 = 0) {
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}
```
* **디폴트 매개변수를 이용하여 좌표값을 초기화합니다.**

```
void show() {
	cout << "3차원 점의 좌표는 (" << p1 << "," << p2 << "," << p3 << ")" << endl;
}
```
* **현재 좌표값을 출력합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Point3D p0;
```
* **기본값을 사용하여 객체를 생성합니다.**

```
p0.show();
```
* **p0 객체의 좌표를 출력합니다.**

```
Point3D p1(1);
```
* **x 좌표만 지정하여 객체를 생성합니다.**

```
p1.show();
```
* **p1 객체의 좌표를 출력합니다.**

```
Point3D p2(1, 2);
```
* **x, y 좌표를 지정하여 객체를 생성합니다.**

```
p2.show();
```
* **p2 객체의 좌표를 출력합니다.**

```
Point3D p3(1, 2, 3);
```
* **x, y, z 좌표를 지정하여 객체를 생성합니다.**

```
p3.show();
```
* **p3 객체의 좌표를 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/6-2-3.png?raw=true" />
