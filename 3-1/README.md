# 실습과제1

## 1. 구조체와 클래스의 차이점을 설명하라.
> 구조체는 다른 종류의 데이터 변수들의 집합이고,
> 클래스는 구조체에서 발전된 형태로 관련있는 변수와 함수들을 모아놓은 것입니다.

## 2. 클래스와 객체의 차이점을 설명하라
> 클래스는 사용자 정의 자료형으로 객체를 생성할 설계도이며,
> 객체는 그 설계도를 바탕으로 만들어진 클래스형 변수입니다. 

## 3. sizeof(클래스명)의 결과값을 출력해보고 결과를 설명하라
> 객체의 메모리 크기를 반환합니다.
> 멤버 변수의 크기이고 멤버 함수는 객체에 포함되어있지 않아 `sizeof` 결과에 영향을 주지 않습니다.

# 실습과제2 소스코드 설명
</br>

```
#include<iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**
```
using namespace std;
```
* **std 이름공간에 선언된 모든 이름에 `std::`생략합니다.**
```
class Triangle 
```
* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**
```
{
public:
	int height;
	int width;
	double getArea();
};
```
* **높이(`height`), 밑변(`width`)을 멤버 변수로 가지고, 면적을 구하는 함수(`getArea`)를 선언한 클래스입니다.**
```
double Triangle::getArea()
```
* **Triangle 클래스에 속한 멤버 함수 getArea를 클래스 외부에서 정의하는 코드입니다.**
```
{
	return width * height * 0.5;
}
```
* **삼각형의 면적 공식(밑변 × 높이 × 0.5)을 이용하여 면적을 계산하고 반환합니다.**
```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수로, 프로그램의 시작 지점입니다.**

```
Triangle tri;
```
* **Triangle 클래스의 객체 tri를 생성합니다.**

```
tri.width = 3;
```
* **삼각형의 밑변 값을 3으로 설정합니다.**
```
tri.height = 5;
```
* **삼각형의 높이 값을 5로 설정합니다.**
```
cout << "삼각형의 면적은 " << tri.getArea() << endl;
```
* **getArea() 함수를 호출하여 계산된 삼각형의 면적을 출력합니다.**
```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-1-2%EA%B2%B0%EA%B3%BC.png?raw=true" />\

# 실습과제3 소스코드 설명
</br>

```
#include<iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**
```
using namespace std;
```
* **std 이름공간에 선언된 모든 이름에 `std::`생략합니다.**
```
class Sphere
```
* **구의 정보를 표현하기 위한 사용자 정의 클래스입니다.**
```
{
public:
	int rad;
	double getVolume();
	double getArea();
};
```
* **반지름(rad)을 저장하고, 부피와 표면적을 계산하는 함수를 선언한 클래스입니다.**
```
double Sphere::getVolume()
```
* **구의 부피를 계산하는 멤버 함수를 정의합니다.**
```
{
	return 4.0 / 3.0 * 3.14 * rad * rad * rad;
}
```
* **공식 4/3 × π × r³을 이용하여 구의 부피를 계산합니다.**
```
double Sphere::getArea()
```
* **구의 표면적을 계산하는 멤버 함수를 정의합니다.**
```
{
	return 4 * 3.14 * rad * rad;
}
```
* **공식 4 × π × r²을 이용하여 구의 표면적을 계산합니다.**
```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수로, 프로그램의 시작 지점입니다.**

```
Sphere sp;
```
* **Sphere 클래스의 객체 sp를 생성합니다.**

```
sp.rad = 5;
```
* **반지름 값을 5로 설정합니다.**
```
cout << "구의 부피는: " << sp.getVolume() << endl;
```
* **구의 부피를 계산하여 출력합니다.**
```
cout << "구의 표면적은: " << sp.getArea() << endl;
```
* **구의 표면적을 계산하여 출력합니다.**
```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-1-3%EA%B2%B0%EA%B3%BC.png?raw=true" />

# 실습과제4 소스코드 설명
</br>

```
#include<iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**
```
using namespace std;
```
* **std 이름공간에 선언된 모든 이름에 `std::`생략합니다.**

```
class Rectangle
```
* **사각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int x=1;
	int y=2;
	int width=3;
	int height=4;
	int getArea();
	int getRound();
	int getCoord();
};
```
* **좌표(x, y)와 크기(width, height)를 저장하고, 면적·둘레·좌표를 계산하는 함수를 선언한 클래스입니다.**

```
int Rectangle::getArea()
```
* **Rectangle 클래스의 면적 계산 함수를 정의합니다.**

```
{
	return width * height;
}
```
* **가로 × 세로를 통해 사각형의 면적을 반환합니다.**

```
int Rectangle::getRound()
```
* **Rectangle 클래스의 둘레 계산 함수를 정의합니다.**
```
{
	return 2 * (width + height);
}
```
* **둘레 공식 2 × (가로 + 세로)를 이용하여 값을 반환합니다.**
```
int Rectangle::getCoord()
```
* **Rectangle 클래스의 우측 하단 좌표를 출력하는 함수를 정의합니다.**

```
{
	cout << "사각형의 우측하단 죄표는 (" << x + width << "," << y - height << ")" << endl;
	return 0;
}
```
* **현재 좌표 기준으로 우측하단 좌표 (x+width, y-height)를 계산하여 출력합니다.**
```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수로, 프로그램의 시작 지점입니다.**
```
Rectangle rect;
```
* **Rectangle 클래스의 객체 rect를 생성합니다.**

```
rect.width = 3;
```
* **사각형의 가로 길이를 3으로 설정합니다.**
```
cout << "사각형의 면적은 " << rect.getArea() << endl;
```
* **면적을 계산하여 출력합니다.**
```
rect.getCoord();
```
* **사각형의 우측하단 좌표를 계산하여 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-1-4%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제5 소스코드 설명
</br>

```
#include<iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**
```
using namespace std;
```
* **std 이름공간에 선언된 모든 이름에 `std::`생략합니다.**

```
class Rectangle
```
* **사각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int x=1;
	int y=2;
	int width=3;
	int height=4;
	int getArea();
	int getRound();
	int getCoord();
};
```
* **좌표(x, y)와 크기(width, height)를 저장하고, 면적·둘레·좌표를 계산하는 함수를 선언한 클래스입니다.**

```
int Rectangle::getArea()
```
* **Rectangle 클래스의 면적 계산 함수를 정의합니다.**

```
{
	return width * height;
}
```
* **가로 × 세로를 통해 사각형의 면적을 반환합니다.**

```
int Rectangle::getRound()
```
* **Rectangle 클래스의 둘레 계산 함수를 정의합니다.**
```
{
	return 2 * (width + height);
}
```
* **둘레 공식 2 × (가로 + 세로)를 이용하여 값을 반환합니다.**
```
int Rectangle::getCoord()
```
* **Rectangle 클래스의 우측 하단 좌표를 출력하는 함수를 정의합니다.**

```
{
	cout << "사각형의 우측하단 죄표는 (" << x + width << "," << y - height << ")" << endl;
	return 0;
}
```
* **현재 좌표 기준으로 우측하단 좌표 (x+width, y-height)를 계산하여 출력합니다.**
```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수로, 프로그램의 시작 지점입니다.**
```
Rectangle rect;
```
* **Rectangle 클래스의 객체 rect를 생성합니다.**
```
cout << "사각형의 좌측상단 좌표(x,y) : ";
```
* **좌표 입력 안내 메시지를 출력합니다.**

```
cin >> rect.x >> rect.y;
```
* **좌측상단 좌표를 입력받습니다.**

```
cout << "사각형의 폭과 높이(width,height) : ";
```
* **크기 입력 안내 메시지를 출력합니다.**

```
cin >> rect.width >> rect.height;
```
* **폭과 높이를 입력받습니다.**


```
rect.width = 3;
```
* **사각형의 가로 길이를 3으로 설정합니다.**
```
cout << "사각형의 면적은 " << rect.getArea() << endl;
```
* **면적을 계산하여 출력합니다.**
```
rect.getCoord();
```
* **사각형의 우측하단 좌표를 계산하여 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-1-5%EA%B2%B0%EA%B3%BC.png?raw=true" />

