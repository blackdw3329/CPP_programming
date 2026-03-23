# 실습과제1

## 1. 객체의 생성과 소멸의 의미를 설명하라
> 객체 생성은 메모리에 객체가 만들어지고 생성자가 호출되는 과정이며, 소멸은 객체가 메모리에서 제거되고 소멸자가 호출되는 과정입니다.

## 2. 지역변수(지역객체), 전역변수(전역객체)의 차이를 조사하라
> 지역객체는 함수 내부에 선언되어 해당 함수 내에서만 접근 가능하며 함수 호출 시 생성되고 종료 시 소멸됩니다. 전역객체는 함수 밖에 선언되어 프로그램 전체에서 접근 가능하며 프로그램 시작 시 생성되고 종료 시 소멸됩니다.

## 3. 프로그램 실행 후 main함수가 실행되기 전에 어떤 일이 처리되는지 조사해보라
> 전역 객체가 먼저 생성되고 전역 변수 초기화가 수행된 후 main 함수가 실행됩니다.

## 4. main함수가 종료 후 프로그램이 종료하기 전에 어떤 일이 처리되는지 조사하라
> 지역 객체가 먼저 소멸되고 이후 전역 객체가 소멸되며 정리 작업이 수행된 후 프로그램이 종료됩니다.

## 5. 실습과제 2와 3, 4와 5의 결과가 다른 이유
> 실습과제 2,4는 객체가 `main` 함수 내부에서 생성된 지역객체이기 때문에 `main`함수가 실행 시 생성되고 종료 시 소멸됩니다.  
> 반면 실습과제 3,5는 객체가 전역으로 선언되어 `main`함수 실행 전에 먼저 생성되고 프로그램 종료 후에 소멸되기 때문에 생성과 소멸 순서 및 출력 결과가 다르게 나타납니다.

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
	~Triangle();
	double getArea();
};
```

* **밑변과 높이를 저장하고, 생성자·소멸자·면적 계산 함수를 선언한 클래스입니다.**

```
Triangle::Triangle() : Triangle(1, 1) {}
```

* **기본 생성자로, 위임 생성자를 사용하여 밑변과 높이를 1로 초기화합니다.**

```
Triangle::Triangle(int w, int h)
```

* **매개변수를 받아 값을 초기화하는 생성자입니다.**

```
{
	width = w; height = h;
	cout << "밑변 " << width << "높이" << height << "인 삼각형 생성" << endl;
}
```

* **객체 생성 시 초기화와 함께 메시지를 출력합니다.**

```
Triangle::~Triangle()
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "밑변 " << width << "높이" << height << "인 삼각형 소멸" << endl;
}
```

* **객체가 메모리에서 제거될 때 메시지를 출력합니다.**

```
double Triangle::getArea()
```

* **삼각형의 면적을 계산하는 함수입니다.**

```
{
	return 0.5 * width * height;
}
```

* **공식 `밑변 × 높이 × 0.5`를 이용하여 면적을 계산합니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri1;
```

* **기본 생성자를 통해 (1,1)로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은" << tri1.getArea() << endl;
```

* **첫 번째 삼각형의 면적을 계산하여 출력합니다.**

```
Triangle tri2(2, 4);
```

* **매개변수 생성자를 통해 (2,4)로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은" << tri2.getArea() << endl;
```

* **두 번째 삼각형의 면적을 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-3-2%EA%B2%B0%EA%B3%BC.png?raw=true" />


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
public:
	int width;
	int height;
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea();
};
```

* **밑변과 높이를 저장하고, 생성자·소멸자·면적 계산 함수를 선언한 클래스입니다.**

```
Triangle::Triangle()
```

* **기본 생성자로 밑변과 높이를 1로 초기화합니다.**

```
{
	width = 1; height = 1;
	cout << "밑변 " << width << "높이" << height << "인 삼각형 생성" << endl;
}
```

* **객체 생성 시 초기값 설정과 함께 메시지를 출력합니다.**

```
Triangle::Triangle(int w, int h)
```

* **매개변수를 받아 값을 초기화하는 생성자입니다.**

```
{
	width = w; height = h;
	cout << "밑변 " << width << "높이" << height << "인 삼각형 생성" << endl;
}
```

* **입력값으로 초기화하고 생성 메시지를 출력합니다.**

```
Triangle::~Triangle()
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "밑변 " << width << "높이" << height << "인 삼각형 소멸" << endl;
}
```

* **객체가 프로그램 종료 시 메모리에서 제거되며 메시지를 출력합니다.**

```
double Triangle::getArea()
```

* **삼각형의 면적을 계산하는 함수입니다.**

```
{
	return 0.5 * width * height;
}
```

* **공식 `밑변 × 높이 × 0.5`를 이용하여 면적을 계산합니다.**

```
Triangle tri1(4, 8);
Triangle tri2(2, 2);
```

* **전역 객체로, 프로그램 시작 시 main 실행 전에 생성되고 종료 후 소멸됩니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
cout << "삼각형의 면적은" << tri2.getArea() << endl;
```

* **tri2 객체의 면적을 계산하여 출력합니다.**

```
cout << "삼각형의 면적은" << tri1.getArea() << endl;
```

* **tri1 객체의 면적을 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-3-3%EA%B2%B0%EA%B3%BC.png?raw=true" />


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
class Sphere
```

* **구의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	int radius;
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();
};
```

* **반지름을 저장하고, 생성자·소멸자·부피 계산 함수를 선언한 클래스입니다.**

```
Sphere::Sphere()
```

* **기본 생성자로 반지름을 1로 초기화합니다.**

```
{
	radius = 1;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
```

* **객체 생성 시 초기값 설정과 메시지를 출력합니다.**

```
Sphere::Sphere(int r)
```

* **매개변수를 받아 반지름을 초기화하는 생성자입니다.**

```
{
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
```

* **입력값으로 초기화하고 생성 메시지를 출력합니다.**

```
Sphere::~Sphere()
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}
```

* **객체가 메모리에서 제거될 때 메시지를 출력합니다.**

```
double Sphere::getVolume()
```

* **구의 부피를 계산하는 함수입니다.**

```
{
	return radius * radius * radius * 3.14 * 4 / 3;
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

* **기본 생성자를 통해 반지름이 1인 객체를 생성합니다.**

```
cout << "구의 부피는 " << sph1.getVolume() << endl;
```

* **첫 번째 구의 부피를 계산하여 출력합니다.**

```
Sphere sph2(3);
```

* **매개변수 생성자를 통해 반지름이 3인 객체를 생성합니다.**

```
cout << "구의 부피는 " << sph2.getVolume() << endl;
```

* **두 번째 구의 부피를 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-3-4%EA%B2%B0%EA%B3%BC.png?raw=true" />


# 실습과제5 소스코드 설명
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
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();
};
```

* **반지름을 저장하고, 생성자·소멸자·부피 계산 함수를 선언한 클래스입니다.**

```
Sphere::Sphere()
```

* **기본 생성자로 반지름을 1로 초기화합니다.**

```
{
	radius = 1;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
```

* **객체 생성 시 초기값 설정과 메시지를 출력합니다.**

```
Sphere::Sphere(int r)
```

* **매개변수를 받아 반지름을 초기화하는 생성자입니다.**

```
{
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
```

* **입력값으로 초기화하고 생성 메시지를 출력합니다.**

```
Sphere::~Sphere()
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
{
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}
```

* **객체가 프로그램 종료 시 메모리에서 제거되며 메시지를 출력합니다.**

```
double Sphere::getVolume()
```

* **구의 부피를 계산하는 함수입니다.**

```
{
	return radius * radius * radius * 3.14 * 4 / 3;
}
```

* **공식 `4/3 × π × r³`을 이용하여 구의 부피를 계산합니다.**

```
Sphere sph1(10);
Sphere sph2(20);
```

* **전역 객체로, 프로그램 시작 시 main 함수 실행 전에 생성되고 종료 후 소멸됩니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
cout << "구의 부피는 " << sph1.getVolume() << endl;
```

* **sph1 객체의 부피를 계산하여 출력합니다.**

```
cout << "구의 부피는 " << sph2.getVolume() << endl;
```

* **sph2 객체의 부피를 계산하여 출력합니다.**

```
return 0;
```

* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/3-3-5%EA%B2%B0%EA%B3%BC.png?raw=true" />

