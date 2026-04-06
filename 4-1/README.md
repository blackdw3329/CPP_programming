# 실습과제1

## 1. 배열명의 의미를 설명하라
> 배열명은 배열의 첫 번째 원소의 주소를 의미하며, 포인터처럼 사용할 수 있습니다.

## 2. 객체 포인터의 의미를 설명하라
> 객체 포인터는 객체의 주소를 저장하는 변수로, `->` 연산자를 통해 객체의 멤버에 접근할 수 있습니다.

## 3. 포인터를 이용하여 배열 각 원소의 주소를 구하는 방법을 설명하라
> 배열의 시작 주소를 포인터에 저장한 후 `(포인터 + 인덱스)` 형태로 각 원소의 주소를 구할 수 있습니다.

## 4. 포인터를 이용하여 배열 각 원소의 값을 구하는 방법을 설명하라
> 포인터를 이용해 `*(포인터 + 인덱스)` 또는 `포인터[인덱스]` 형태로 각 원소의 값을 얻을 수 있습니다.

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
class Triangle
```
* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Triangle() { height = 1; width = 1; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; width = w; }
	void setHeight(int h) { if (h <= 0)return; height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};
```
* **폭과 높이를 저장하고, 생성자·소멸자·값 설정 및 면적 계산 기능을 제공하는 클래스입니다.**

```
Triangle() { height = 1; width = 1; }
```
* **기본 생성자로 폭과 높이를 1로 초기화합니다.**

```
~Triangle() {}
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
void setWidth(int w) { if (w <= 0)return; width = w; }
```
* **폭을 설정하는 함수이며, 0 이하의 값은 무시합니다.**

```
void setHeight(int h) { if (h <= 0)return; height = h; }
```
* **높이를 설정하는 함수이며, 0 이하의 값은 무시합니다.**

```
double getArea() { return width * height * 0.5; }
```
* **삼각형의 면적을 계산하여 반환하는 함수입니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
unique_ptr<Triangle> ptr1(new Triangle());
```
* **`Triangle` 객체를 동적으로 생성하고 이를 관리하는 스마트 포인터를 선언합니다.**

```
Triangle tri;
```
* **일반 객체 `tri`를 생성합니다.**

```
Triangle* p;
```
* **`Triangle` 객체를 가리킬 포인터 변수를 선언합니다.**

```
p = &tri;
```
* **포인터 `p`가 객체 `tri`의 주소를 저장하도록 합니다.**

```
p->setWidth(3);
```
* **객체 포인터를 이용하여 폭을 3으로 설정합니다.**

```
p->setHeight(5);
```
* **객체 포인터를 이용하여 높이를 5로 설정합니다.**

```
cout << "삼각형의 면적은" << p->getArea() << endl;
```
* **객체 포인터를 이용하여 삼각형의 면적을 계산하고 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

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
class Triangle
```
* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Triangle() { this->height = 1; this->width = 1; }
	Triangle(int h) { this->height = h; this->width = 1; }
	Triangle(int h, int w) { this->height = h; this->width = w; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; this->width = w; }
	void setHeight(int h) { if (h <= 0)return; this->height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};
```
* **여러 생성자를 통해 다양한 방식으로 초기화할 수 있으며, `this` 포인터를 이용해 멤버 변수를 설정하는 클래스입니다.**

```
Triangle()
```
* **기본 생성자로 폭과 높이를 1로 초기화합니다.**

```
Triangle(int h)
```
* **높이만 입력받아 설정하고, 폭은 1로 초기화합니다.**

```
Triangle(int h, int w)
```
* **높이와 폭을 모두 입력받아 초기화합니다.**

```
~Triangle()
```
* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
void setWidth(int w)
```
* **폭을 설정하는 함수이며, 0 이하 값은 무시합니다.**

```
void setHeight(int h)
```
* **높이를 설정하는 함수이며, 0 이하 값은 무시합니다.**

```
double getArea()
```
* **삼각형의 면적을 계산하는 함수입니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri1;
```
* **기본 생성자를 통해 (1,1)로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
* **첫 번째 삼각형의 면적을 출력합니다.**

```
Triangle tri2(10);
```
* **높이 10, 폭 1로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
* **두 번째 삼각형의 면적을 출력합니다.**

```
Triangle tri3(10, 2);
```
* **높이 10, 폭 2로 초기화된 객체를 생성합니다.**

```
cout << "삼각형의 면적은 " << tri3.getArea() << endl;
```
* **세 번째 삼각형의 면적을 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

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
private:
    int width;
    int height;

public:
    Triangle(int b = 0, int h = 0) {
        width = b;
        height = h;
        cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    int getArea() {
        return width * height * 0.5;
    }

    ~Triangle() {
        cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }
};
```
* **기본값을 가지는 생성자를 사용하여 다양한 초기화가 가능하며, 생성과 소멸 시 메시지를 출력하는 클래스입니다.**

```
Triangle(int b = 0, int h = 0)
```
* **매개변수 기본값을 사용한 생성자로, 값이 없으면 (0,0)으로 초기화됩니다.**

```
int getArea()
```
* **삼각형의 면적을 계산하는 함수입니다.**

```
~Triangle()
```
* **객체가 소멸될 때 호출되어 메시지를 출력합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle t[3] = { Triangle(2, 2), Triangle(4, 4), Triangle(6, 6) };
```
* **Triangle 객체 배열을 생성하며 각각 다른 값으로 초기화합니다.**

```
for (int i = 0; i < 3; i++)
```
* **배열의 각 요소를 순회하기 위한 반복문입니다.**

```
cout << "삼각형" << i << "의 면적은 " << t[i].getArea() << endl;
```
* **각 삼각형 객체의 면적을 계산하여 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

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
class Triangle
```
* **삼각형 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Triangle(int w, int h) { width = w; height = h; }
	~Triangle() {}
	void setWidth(int w) { if (w <= 0)return; this->width = w; }
	void setHeight(int h) { if (h <= 0)return; this->height = h; }
	double getArea() { return width * height * 0.5; }

private:
	int width, height;
};
```
* **폭과 높이를 저장하고, 생성자·값 설정·면적 계산 기능을 제공하는 클래스입니다.**

```
Triangle(int w, int h)
```
* **폭과 높이를 입력받아 초기화하는 생성자입니다.**

```
double getArea()
```
* **삼각형의 면적을 계산하는 함수입니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Triangle tri_array[3] = { Triangle(2,2),Triangle(4,4),Triangle(6,6) };
```
* **Triangle 객체 배열을 생성하고 각각 다른 값으로 초기화합니다.**

```
Triangle* p = tri_array;
```
* **배열의 시작 주소를 가리키는 포인터를 선언합니다.**

```
for (int i = 0; i < 3; i++)
{
	cout << "삼각형" << i << "의 면적은 " << (p + i)->getArea() << endl;
}
```
* **포인터 연산 `(p + i)`를 이용해 각 요소에 접근하여 면적을 출력합니다.**

```
for (int i = 0; i < 3; i++)
{
	cout << "삼각형" << i << "의 면적은 " << p[i].getArea() << endl;
}
```
* **배열 인덱스 방식으로 포인터를 사용하여 면적을 출력합니다.**

```
for (int i = 0; i < 3; i++)
{
	cout << "삼각형" << i << "의 면적은 " << p->getArea() << endl;
	p++;
}
```
* **포인터를 증가시키며 순차적으로 각 객체에 접근하여 면적을 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />
