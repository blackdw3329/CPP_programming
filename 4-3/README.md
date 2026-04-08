# 실습과제1

## 1. 메모리 누수를 설명하라
> 메모리 누수는 동적으로 할당한 메모리를 해제하지 않아 더 이상 사용되지 않지만 계속 메모리에 남아있는 상태를 의미합니다.

## 2. 메모리 누수가 왜 심각한 문제를 발생시키는지 설명하라
> 사용하지 않는 메모리가 계속 쌓이면 사용 가능한 메모리가 줄어들어 프로그램 성능 저하나 시스템 오류, 프로그램 종료 등의 문제가 발생할 수 있습니다.

## 3. 메모리 누수를 방지하는 방법을 설명하라
> 동적 메모리를 사용한 후 반드시 `delete` 또는 `delete[]`로 해제해야 하며, 스마트 포인터를 사용하면 자동으로 메모리가 관리되어 누수를 방지할 수 있습니다.

## 4. C++ 스마트 포인터 클래스에 대해 조사하라
> 스마트 포인터는 동적 메모리를 자동으로 관리하는 객체로, 대표적으로 `unique_ptr`, `shared_ptr`, `weak_ptr`가 있습니다. 객체가 더 이상 사용되지 않을 때 자동으로 메모리를 해제하여 안전하게 메모리를 관리할 수 있습니다.

# 실습과제2 소스코드 설명
</br>

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Circle
```
* **원의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
```
* **반지름을 저장하고 생성자·소멸자·면적 계산 기능을 제공하는 클래스입니다.**

```
Circle::Circle()
```
* **기본 생성자로 반지름을 1로 초기화합니다.**

```
{
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}
```
* **객체 생성 시 메시지를 출력합니다.**

```
Circle::Circle(int r)
```
* **매개변수를 받아 반지름을 초기화하는 생성자입니다.**

```
{
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}
```
* **입력값으로 초기화하고 생성 메시지를 출력합니다.**

```
Circle::~Circle()
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "소멸자 실행 radius = " << radius << endl;
}
```
* **객체가 메모리에서 해제될 때 메시지를 출력합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
int radius;
```
* **반지름 값을 입력받기 위한 변수입니다.**

```
while (true)
```
* **반복적으로 입력을 받기 위한 무한 루프입니다.**

```
cout << "반지름 입력(음수이면 종료)>> ";
cin >> radius;
```
* **사용자로부터 반지름을 입력받습니다.**

```
if (radius < 0) break;
```
* **음수가 입력되면 반복을 종료합니다.**

```
Circle* p = new Circle(radius);
```
* **동적 메모리를 할당하여 Circle 객체를 생성합니다.**

```
cout << "원의 면적:" << p->getArea() << endl;
```
* **객체 포인터를 이용하여 원의 면적을 계산하고 출력합니다.**

```
 delete p;
```
* **동적 할당된 메모리를 해제하는 코드이며, 이 문장이 빠지면 메모리 누수가 발생합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료됩니다.**

<img width="400" height="500" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-3-2%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제3 소스코드 설명
</br>

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Circle
```
* **원의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
```
* **반지름을 저장하고 생성자·소멸자·면적 계산 기능을 제공하는 클래스입니다.**

```
Circle::Circle()
```
* **기본 생성자로 반지름을 1로 초기화합니다.**

```
{
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}
```
* **객체 생성 시 메시지를 출력합니다.**

```
Circle::Circle(int r)
```
* **매개변수를 받아 반지름을 초기화하는 생성자입니다.**

```
{
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}
```
* **입력값으로 초기화하고 생성 메시지를 출력합니다.**

```
Circle::~Circle()
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "소멸자 실행 radius = " << radius << endl;
}
```
* **객체가 메모리에서 해제될 때 메시지를 출력합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Circle* pArray = new Circle[3];
```
* **Circle 객체 3개를 동적으로 생성하여 배열 형태로 할당합니다.**

```
for (int i = 0; i < 3; i++)
{
	cout << pArray->getArea() << '\n';
	pArray++;
}
```
* **포인터를 증가시키며 각 객체에 접근하지만, 원래 주소가 변경되는 문제가 발생합니다.**

```
delete[] pArray;
```
* **변경된 주소로 메모리를 해제하려 하므로 오류가 발생할 수 있습니다.**

## **해결방안**
```
Circle* pArray = new Circle[3];
Circle* p = pArray;
```
* **원래 주소를 보존하기 위해 별도의 포인터를 사용합니다.**

```
for (int i = 0; i < 3; i++)
{
	cout << p->getArea() << '\n';
	p++;
}
```
* **보조 포인터를 이동시키며 배열 요소에 안전하게 접근합니다.**

```
delete[] pArray;
```
* **초기 주소를 유지한 포인터로 정상적으로 메모리를 해제합니다.**

| 실행 결과 | 해결 결과 |
|----------|----------|
| ![](https://github.com/blackdw3329/just_box/blob/main/img/4-3-3%EA%B2%B0%EA%B3%BC.png?raw=true) | ![](https://github.com/blackdw3329/just_box/blob/main/img/4-3-3%EA%B2%B0%EA%B3%BC(%ED%95%B4%EA%B2%B0).png?raw=true) |

# 실습과제4 소스코드 설명
</br>

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Triangle
```
* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
	int width, height;
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea() { return (0.5 * width * height); }
};
```
* **폭과 높이를 저장하고 생성자·소멸자·면적 계산 기능을 제공하는 클래스입니다.**

```
Triangle::Triangle() :Triangle(1, 1) {}
```
* **기본 생성자로 위임 생성자를 사용해 (1,1)로 초기화합니다.**

```
Triangle::Triangle(int w, int h)
```
* **매개변수를 받아 폭과 높이를 초기화하는 생성자입니다.**

```
{
	width = w; height = h;
	cout << "밑변" << width << " 높이" << height << "인 삼각형 생성" << endl;
}
```
* **객체 생성 시 메시지를 출력합니다.**

```
Triangle::~Triangle()
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "밑변" << width << " 높이" << height << "인 삼각형 소멸" << endl;
}
```
* **객체가 메모리에서 해제될 때 메시지를 출력합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle* pArray = new Triangle[3]{ Triangle(),Triangle(2,2),Triangle(4,4) };
```
* **동적 배열을 생성하고 각 요소를 서로 다른 값으로 초기화합니다.**

```
Triangle* p = pArray;
```
* **배열의 시작 주소를 가리키는 보조 포인터를 선언합니다.**

```
for (int i = 0; i < 3; i++)
```
* **배열의 각 요소를 순회합니다.**

```
cout << "삼각형의 면적은 " << p->getArea() << '\n';
```
* **포인터를 통해 각 객체의 면적을 계산하여 출력합니다.**

```
p++;
```
* **포인터를 증가시켜 다음 객체로 이동합니다.**

```
delete[] pArray;
```
* **동적 할당된 배열 메모리를 해제합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료됩니다.**

<img width="400" height="500" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-3-4%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제5 소스코드 설명
</br>

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Sphere
```
* **구의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
	int radius;
public:
	Sphere();
	~Sphere() {}
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius * radius * 4 / 3; }
};
```
* **반지름을 저장하고 생성자·부피 계산 기능을 제공하는 클래스입니다.**

```
Sphere::Sphere()
```
* **기본 생성자로 반지름을 1로 초기화합니다.**

```
{
	radius = 1;
}
```
* **초기값을 설정합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
cout << "생성하고자 하는 구의 개수: ";
```
* **생성할 구의 개수를 입력받기 위한 메시지를 출력합니다.**

```
int n, radius;
cin >> n;
```
* **구의 개수와 반지름 입력을 위한 변수를 선언하고 개수를 입력받습니다.**

```
Sphere* pArray = new Sphere[n];
```
* **입력받은 개수만큼 Sphere 객체를 동적으로 생성합니다.**

```
for (int i = 0; i < n; i++)
```
* **각 구의 반지름을 입력받기 위한 반복문입니다.**

```
cout << "구" << i + 1 << "의 반지름: ";
cin >> radius;
(pArray + i)->setRadius(radius);
```
* **포인터 연산을 이용하여 각 객체의 반지름을 설정합니다.**

```
for (int j = 0; j < n; j++)
```
* **각 구의 부피를 출력하기 위한 반복문입니다.**

```
cout << "구" << j + 1 << "의 부피: " << (pArray + j)->getArea() << endl;
```
* **포인터를 이용하여 각 구의 부피를 계산하고 출력합니다.**

```
delete[] pArray;
```
* **동적 할당된 배열 메모리를 해제합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료됩니다.**

<img width="400" height="500" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/4-3-5%EA%B2%B0%EA%B3%BC.png?raw=true" />
