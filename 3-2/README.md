# 실습과제1

## 1. C++에서 생성자를 통하여 멤버변수의 초기화를 하는 이유를 설명하라.
> 생성자는 객체 생성 시 자동 호출되어 멤버 변수를 초기화하며, 객체를 안전하고 일관되게 사용하기 위해 필요합니다.

## 2. 생성자 작성시 생성자 몸체에서 멤버를 초기화하는 것 보다 멤버 초기화 리스트에서 초기화하는 이유를 설명하라.
> 초기화 리스트는 멤버 생성과 동시에 초기화되어 효율적입니다.

## 3. 위임, 타겟 생성자로 나누어 작성하는 이유를 설명하라
> 공통 초기화 코드를 줄이기 위해 사용하며 코드 중복을 줄이고 유지보수를 쉽게 합니다.

## 4. 함수 몸체(`body`)에서 생성자를 직접 호출하면 어떻게 되는지 조사해보라
> 생성자를 호출해도 현재 객체는 초기화되지 않으며 임시 객체만 생성되고 바로 소멸됩니다.

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
class Triangle
```

* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int width;
	int height;
	Triangle();
	Triangle(int w, int h);
	double getArea();
};
```

* **밑변과 높이를 저장하고, 생성자와 면적 계산 함수를 선언한 클래스입니다.**

```
Triangle::Triangle(int w, int h)
```

* **매개변수를 받아 밑변과 높이를 초기화하는 생성자입니다.**

```
{
	width = w;
	height = h;
}
```

* **입력받은 값으로 멤버 변수를 초기화합니다.**

```
Triangle::Triangle() :Triangle(1, 1) {}
```

* **기본 생성자에서 다른 생성자를 호출하는 위임 생성자로, 밑변과 높이를 1로 초기화합니다.**

```
double Triangle::getArea()
```

* **삼각형의 면적을 계산하는 함수입니다.**

```
{
	return width * height * 1.0 / 2.0;
}
```

* **공식 `밑변 × 높이 ÷ 2`를 이용하여 면적을 계산합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri1;
```

* **기본 생성자를 통해 밑변과 높이가 1로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```

* **첫 번째 삼각형의 면적을 계산하여 출력합니다.**

```
Triangle tri2(2, 4);
```

* **매개변수 생성자를 통해 밑변 2, 높이 4로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```

* **두 번째 삼각형의 면적을 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-2-2%EA%B2%B0%EA%B3%BC.png?raw=true" />

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
class Sphere
```

* **구의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int radius;
	double getVolume();
	Sphere();
	Sphere(int r);

private:

};
```

* **반지름을 저장하고, 부피 계산 함수와 생성자를 선언한 클래스입니다.**

```
Sphere::Sphere() :Sphere(1) {}
```

* **기본 생성자로, 위임 생성자를 사용하여 반지름을 1로 초기화합니다.**

```
Sphere::Sphere(int r)
```

* **매개변수를 받아 반지름을 초기화하는 생성자입니다.**

```
{
	radius = r;
}
```

* **입력받은 값을 반지름에 저장합니다.**

```
double Sphere::getVolume()
```

* **구의 부피를 계산하는 함수입니다.**

```
{
	return 4.0 / 3.0 * 3.14 * radius * radius * radius;
}
```

* **공식 `4/3 × π × r³`을 이용하여 구의 부피를 계산합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Sphere sph1;
```

* **기본 생성자를 이용해 반지름이 1인 객체를 생성합니다.**

```
cout << "구의 부피는 " << sph1.getVolume() << endl;
```

* **첫 번째 구의 부피를 계산하여 출력합니다.**

```
Sphere sph2(3);
```

* **매개변수 생성자를 이용해 반지름이 3인 객체를 생성합니다.**

```
cout << "구의 부피는 " << sph2.getVolume() << endl;
```

* **두 번째 구의 부피를 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-2-3%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 실습과제# 소스코드 설명
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
class Rectangle
```

* **사각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int width, height;
	int x, y;
	Rectangle();
	Rectangle(int x_i, int y_i);
	Rectangle(int x_j, int y_j, int w, int h);
	int getArea();
	int getRound();
	void getCoord();
};
```

* **좌표와 크기를 저장하고, 다양한 생성자와 면적·둘레·좌표 출력 함수를 선언한 클래스입니다.**

```
Rectangle::Rectangle()
```

* **기본 생성자로 모든 값을 1로 초기화합니다.**

```
{
	width = height = x = y = 1;
}
```

* **멤버 변수들을 모두 1로 설정합니다.**

```
Rectangle::Rectangle(int x_i, int y_i)
```

* **좌표만 입력받는 생성자입니다.**

```
{
	x = x_i; y = y_i; width = height = 1;
}
```

* **좌표는 입력값으로, 크기는 1로 초기화합니다.**

```
Rectangle::Rectangle(int x_j, int y_j, int w, int h)
```

* **좌표와 크기를 모두 입력받는 생성자입니다.**

```
{
	width = w;  height = h; x = x_j; y = y_j;
}
```

* **입력값으로 모든 멤버 변수를 초기화합니다.**

```
int Rectangle::getArea()
```

* **사각형의 면적을 계산하는 함수입니다.**

```
{
	return width * height;
}
```

* **가로 × 세로로 면적을 계산합니다.**

```
int Rectangle::getRound()
```

* **사각형의 둘레를 계산하는 함수입니다.**

```
{
	return 2 * (width + height);
}
```

* **둘레 공식 `2 × (가로 + 세로)`를 사용합니다.**

```
void Rectangle::getCoord()
```

* **우측하단 좌표를 출력하는 함수입니다.**

```
{
	cout << "rect3의 우측하단의 좌표는(" << x + width << ", " << y - height << ")" << endl;
}
```

* **좌측상단 기준으로 `(x+width, y-height)` 좌표를 계산하여 출력합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Rectangle rect1;
```

* **기본 생성자를 통해 모든 값이 1인 객체를 생성합니다.**

```
Rectangle rect2(3, 5);
```

* **좌표만 설정된 객체를 생성합니다.**

```
Rectangle rect3(3, 5, 2, 4);
```

* **좌표와 크기가 모두 설정된 객체를 생성합니다.**

```
cout << "rect1의 면적은 " << rect1.getArea() << endl;
```

* **rect1의 면적을 계산하여 출력합니다.**

```
cout << "rect1의 둘레는 " << rect1.getRound() << endl;
```

* **rect1의 둘레를 계산하여 출력합니다.**

```
rect3.getCoord();
```

* **rect3의 우측하단 좌표를 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-2-4%EA%B2%B0%EA%B3%BC.png?raw=true" />
