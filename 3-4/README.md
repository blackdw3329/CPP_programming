# 실습과제1

## 1. 접근지정자가 왜 필요한가?
> 멤버 변수와 함수의 접근 범위를 제한하여 데이터를 보호하기 위해 필요합니다.
> 외부에서 직접 접근을 막아 안정성과 보안을 높입니다.

## 2. 생성자와 setter 멤버함수의 차이점을 설명하라
> 생성자는 객체 생성 시 초기값을 설정하는 것이고,
> setter는 객체 생성 후 값을 변경하고 싶을때 사용됩니다.

## 3. 객체지향형 언어의 특징인 캡슐화와 정보은닉을 설명하라
> 캡슐화는 데이터와 기능을 하나로 묶는 것이고,
> 정보은닉은 내부 데이터를 외부에서 직접 접근하지 못하도록 숨기는 것입니다.

# 실습과제2 소스코드 설명
</br>

```
#include <iostream>
````

* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**

```
using namespace std;
```

* **std 이름공간에 선언된 모든 이름에 `std::`를 생략합니다.**

```
class Circle
```

* **원의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
private:
	int radius;
public:
	Circle();
	int getRadius();
	void setRadius(int n);
};
```

* **반지름을 `private`으로 보호하고, 값을 설정·조회하는 함수와 생성자를 선언한 클래스입니다.**

```
Circle::Circle()
```

* **생성자로 반지름을 초기화합니다.**

```
{ radius = 1; }
```

* **초기 반지름 값을 1로 설정합니다.**

```
int Circle::getRadius()
```

* **반지름 값을 반환하는 함수입니다.**

```
{ return radius; }
```

* **현재 반지름 값을 반환합니다.**

```
void Circle::setRadius(int n)
```

* **반지름 값을 설정하는 함수입니다.**

```
{ radius = n; }
```

* **입력값으로 반지름을 변경합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Circle waffle;
```

* **Circle 객체 `waffle`을 생성합니다.**

```
waffle.setRadius(5);
```

* **반지름을 5로 설정합니다.**

```
cout << "원의 반지름은" << waffle.getRadius() << endl;
```

* **설정된 반지름 값을 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-4-2%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제3 소스코드 설명
</br>

```
#include <iostream>
````

* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**

```
using namespace std;
```

* **std 이름공간에 선언된 모든 이름에 `std::`를 생략합니다.**

```
class Triangle
```

* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
private:
	int width;
	int height;
public:
	Triangle();
	Triangle(int w, int h);
	double getArea();
	int getWidth();
	void setWidth(int w);
	int getHeight();
	void setHeight(int h);
};
```

* **폭과 높이를 `private`으로 보호하고, 생성자와 값 설정·조회 및 면적 계산 함수를 선언한 클래스입니다.**

```
Triangle::Triangle() :Triangle(1, 1) {}
```

* **기본 생성자로 위임 생성자를 사용해 폭과 높이를 1로 초기화합니다.**

```
Triangle::Triangle(int w, int h)
```

* **매개변수를 받아 폭과 높이를 초기화하는 생성자입니다.**

```
{ width = w; height = h; }
```

* **입력값으로 멤버 변수를 설정합니다.**

```
int Triangle::getHeight()
```

* **높이 값을 반환하는 함수입니다.**

```
{ return height; }
```

* **현재 높이를 반환합니다.**

```
int Triangle::getWidth()
```

* **폭 값을 반환하는 함수입니다.**

```
{ return width; }
```

* **현재 폭을 반환합니다.**

```
void Triangle::setHeight(int h)
```

* **높이 값을 설정하는 함수입니다.**

```
{ height = h; }
```

* **입력값으로 높이를 변경합니다.**

```
void Triangle::setWidth(int w)
```

* **폭 값을 설정하는 함수입니다.**

```
{ width = w; }
```

* **입력값으로 폭을 변경합니다.**

```
double Triangle::getArea()
```

* **삼각형의 면적을 계산하는 함수입니다.**

```
{ return 0.5 * height * width; }
```

* **공식 `밑변 × 높이 × 0.5`를 이용하여 면적을 계산합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri;
```

* **기본 생성자를 통해 (1,1)로 초기화된 객체를 생성합니다.**

```
tri.setWidth(3);
```

* **폭을 3으로 설정합니다.**

```
tri.setHeight(5);
```

* **높이를 5로 설정합니다.**

```
cout << "삼각형의 폭은 " << tri.getWidth() << endl;
```

* **폭을 출력합니다.**

```
cout << "삼각형의 높이는 " << tri.getHeight() << endl;
```

* **높이를 출력합니다.**

```
cout << "삼각형의 높이는 " << tri.getArea() << endl;
```

* **면적을 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-4-3%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제4 소스코드 설명
</br>

```
#include <iostream>
````

* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**

```
using namespace std;
```

* **std 이름공간에 선언된 모든 이름에 `std::`를 생략합니다.**

```
class Triangle
```

* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
private:
	int width;
	int height;
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea();	
	int getWidth();
	void setWidth(int w);
	int getHeight();
	void setHeight(int h);
};
```

* **폭과 높이를 `private`으로 보호하고, 생성자·소멸자·값 설정 및 조회·면적 계산 함수를 선언한 클래스입니다.**

```
Triangle::Triangle():Triangle(1,1) {}
```

* **기본 생성자로 위임 생성자를 사용해 폭과 높이를 1로 초기화합니다.**

```
Triangle::Triangle(int w, int h)
```

* **매개변수를 받아 값을 초기화하는 생성자입니다.**

```
{
	if (w < 0 || h < 0) {
		cout << "길이는 양수여야함, 대신에 폭1,높이1 삼각형생성" << endl;
		width = 1; height = 1;
	}
	else width = w; height = h;
}
```

* **음수 입력 시 경고 메시지와 함께 (1,1)로 초기화하고, 정상 값이면 그대로 설정합니다.**

```
Triangle::~Triangle()
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{ cout << "폭" << width << ", 높이" << height << " 삼각형 소멸" << endl; }
```

* **객체가 메모리에서 제거될 때 정보를 출력합니다.**

```
int Triangle::getHeight()
```

* **높이를 반환하는 함수입니다.**

```
{ return height; }
```

* **현재 높이를 반환합니다.**

```
int Triangle::getWidth()
```

* **폭을 반환하는 함수입니다.**

```
{ return width; }
```

* **현재 폭을 반환합니다.**

```
void Triangle::setHeight(int h)
```

* **높이를 설정하는 함수입니다.**

```
{ if (h < 0) cout << "폭은 양수이어야 함" << endl; else height = h; }
```

* **음수 입력 시 경고하고, 정상 값이면 높이를 변경합니다.**

```
void Triangle::setWidth(int w)
```

* **폭을 설정하는 함수입니다.**

```
{ if (w < 0) cout << "높이는 양수이어야 함" << endl; else width = w; }
```

* **음수 입력 시 경고하고, 정상 값이면 폭을 변경합니다.**

```
double Triangle::getArea()
```

* **삼각형의 면적을 계산하는 함수입니다.**

```
{ return 0.5 * height * width; }
```

* **공식 `밑변 × 높이 × 0.5`를 이용하여 면적을 계산합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri(-10, -5);
```

* **음수 값으로 생성하여 예외 처리 후 (1,1)로 초기화됩니다.**

```
tri.setWidth(-3);
```

* **잘못된 값 입력으로 경고 메시지만 출력됩니다.**

```
tri.setHeight(-5);
```

* **잘못된 값 입력으로 경고 메시지만 출력됩니다.**

```
tri.setWidth(3);
```

* **정상 값으로 폭을 3으로 설정합니다.**

```
tri.setHeight(5);
```

* **정상 값으로 높이를 5로 설정합니다.**

```
cout << "삼각형의 폭은 " << tri.getWidth() << endl;
```

* **현재 폭을 출력합니다.**

```
cout << "삼각형의 높이는 " << tri.getHeight() << endl;
```

* **현재 높이를 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-4-4%EA%B2%B0%EA%B3%BC.png?raw=true" />



