
# 실습과제1

## 1. 참조에 의한 호출의 장점을 2가지 측면에서 설명하시오.
> 메모리 사용량 측면에서는 객체나 배열을 복사하지 않아 메모리를 절약할 수 있습니다.  
> 처리시간 측면에서는 복사 과정이 줄어들어 함수 호출 속도가 빨라집니다.

---

## 2. C++언어 함수의 반환과정을 상세히 설명하라.
> 함수가 종료될때 임시변수를 할당하고 임시변수를 반환값으로 초기화 합니다.
> 이후 함수 호출 위치로 값이 전달됩니다.
---

## 3. 반환형이 참조로 선언된 경우 반환값의 의미를 설명하라.
> 반환형이 참조이면 임시변수를 할당 및 초기화 하는 것이 아니라 기존 변수의 별명을 반환합니다.  
> 따라서 반환된 값을 통해 원본 데이터를 직접 사용할 수 있습니다.

---

## 4. 참조 리턴을 응용하는 예제를 인터넷에서 검색하여 실행해보고 설명하시오.
> 참조 리턴은 배열 원소나 객체 내부 값을 직접 수정할 때 사용할 수 있습니다.  
> `operator[]`처럼 원소에 접근하고 수정해야 하는 경우 참조를 반환합니다.

```
#include <iostream>
using namespace std;

int& getElement(int arr[], int index) {
	return arr[index];
}

int main() {
	int arr[3] = { 10, 20, 30 };

	getElement(arr, 1) = 100;

	cout << arr[1] << endl;

	return 0;
}
```

> `getElement(arr, 1)`이 `arr[1]`의 참조를 반환하므로 값을 직접 변경할 수 있습니다.

---

# 실습과제2 소스코드 설명  
</br>

```
#include <iostream>
#include <string>
#include <cctype>
```
* **입출력, 문자열 처리, 문자 변환 기능을 위해 라이브러리를 포함합니다.**

```
using namespace std;
```
* **표준 라이브러리를 간편하게 사용하기 위해 선언합니다.**

```
void Uppercase(string& str);
```
* **문자열을 대문자로 변환하는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string s1("hello");
```
* **문자열 변수를 선언하고 초기화합니다.**

```
cout << "변환 전 문자열" << s1 << endl;
```
* **변환 전 문자열을 출력합니다.**

```
Uppercase(s1);
```
* **참조에 의한 호출로 문자열을 대문자로 변환합니다.**

```
cout << "변환 후 문자열" << s1 << endl;
```
* **변환 후 문자열을 출력합니다.**

```
void Uppercase(string& str)
```
* **문자열을 대문자로 변환하는 함수입니다.**

```
for (int i = 0; i < str.length(); i++)
```
* **문자열의 모든 문자를 순차적으로 탐색합니다.**

```
str[i] = toupper(str[i]);
```
* **각 문자를 대문자로 변환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-3-2.png?raw=true" />


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
void SwapString(string& str1, string& str2);
```
* **두 문자열을 교환하는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string s1(" hello ");
string s2(" world ");
```
* **교환할 문자열 변수를 선언하고 초기화합니다.**

```
cout << "교환전 문자열" << s1 << s2 << endl;
```
* **교환 전 문자열 상태를 출력합니다.**

```
SwapString(s1, s2);
```
* **참조에 의한 호출로 문자열 값을 교환합니다.**

```
cout << "교환후 문자열" << s1 << s2 << endl;
```
* **교환 후 문자열 상태를 출력합니다.**

```
void SwapString(string& str1, string& str2) {
```
* **참조 매개변수를 사용하는 문자열 교환 함수입니다.**

```
string tmp;
```
* **문자열 교환을 위한 임시 변수를 선언합니다.**

```
tmp = str1;
str1 = str2;
str2 = tmp;
```
* **임시 변수를 이용하여 문자열 값을 서로 교환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**


<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-3-3.png?raw=true" />


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
class Circle {
```
* **원의 반지름을 관리하는 클래스입니다.**

```
int radius;
```
* **원의 반지름을 저장하는 멤버 변수입니다.**

```
Circle(int radius) { this->radius = radius; }
```
* **반지름 값을 초기화하는 생성자입니다.**

```
Circle& plus(int n) {
	radius += n;
	return *this;
}
```
* **반지름을 증가시키고 자기 자신 객체를 반환합니다.**

```
Circle& minus(int n) {
	radius -= n;
	return *this;
}
```
* **반지름을 감소시키고 자기 자신 객체를 반환합니다.**

```
int getRadius() { return radius; }
```
* **현재 반지름 값을 반환합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
Circle a(5);
```
* **반지름이 5인 객체를 생성합니다.**

```
a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5).plus(8);
```
* **객체 자신을 반환하여 함수 호출을 연속적으로 수행합니다.**

```
cout << "객체 a의 반지름은 " << a.getRadius();
```
* **최종 반지름 값을 출력합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-3-4.png?raw=true" />
