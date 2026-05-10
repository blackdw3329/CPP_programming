# 실습과제1

## 1. 참조에 의한 호출과 주소에 의한 호출의 차이점을 설명하라.
> 주소에 의한 호출은 포인터를 사용하여 변수의 주소를 전달합니다.  
> 참조에 의한 호출은 변수의 별명을 사용하여 원본 변수에 직접 접근합니다.

---

## 2. 참조에 의한 호출의 장점은 무엇인가?
> 포인터 연산 없이 원본 데이터를 직접 사용할 수 있어 코드가 간단하고 가독성이 좋습니다.

---

# 실습과제2

## 1. 이유
> 값에 의한 호출이므로 `number`의 복사본인 `value`만 2 증가합니다.  
> 따라서 `main` 함수의 원본 변수 `number`는 변경되지 않습니다.

---

## 2. 수정 코드
```
#include<iostream>
using namespace std;

void add2(int& value);

int main(void)
{
	int number;
	cout << "정수를 입력하세요 : ";
	cin >> number;

	add2(number);

	cout << "2만큼 증가한 값 :" << number << endl;
	return 0;
}

void add2(int& value)
{
	value += 2;
}
```
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-2-2.png?raw=true" />


# 실습과제3 소스코드 설명  
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
void swap(int& a, int& b);
```
* **참조 매개변수를 이용한 swap 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
int m, n;
```
* **두 개의 정수 변수를 선언합니다.**

```
cout << "정수 x를 입력하시오: ";
cin >> m;
```
* **첫 번째 정수를 입력받습니다.**

```
cout << "정수 y를 입력하시오: ";
cin >> n;
```
* **두 번째 정수를 입력받습니다.**

```
cout << "swap 함수 호출 전 x=" << m << ", y=" << n << endl;
```
* **교환 전 변수 값을 출력합니다.**

```
swap(m, n);
```
* **참조에 의한 호출로 두 변수 값을 교환합니다.**

```
cout << "swap 함수 호출 후 x=" << m << ", y=" << n << endl;
```
* **교환 후 변수 값을 출력합니다.**

```
void swap(int& a, int& b) {
```
* **참조 매개변수를 사용하는 swap 함수입니다.**

```
int tmp;
```
* **값 교환을 위한 임시 변수를 선언합니다.**

```
tmp = a;
a = b;
b = tmp;
```
* **임시 변수를 이용하여 두 변수 값을 교환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-2-3.png?raw=true" />



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
void get_parts(double num, int& jung, double& decimalPart);
```
* **실수의 정수부와 소수부를 분리하는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
double n;
int jung;
double sosu;
```
* **실수, 정수부, 소수부를 저장할 변수를 선언합니다.**

```
cout << "실수를 입력하시오 : ";
cin >> n;
```
* **사용자로부터 실수를 입력받습니다.**

```
get_parts(n, jung, sosu);
```
* **참조 매개변수를 이용하여 정수부와 소수부를 구합니다.**

```
cout << "정수부 : " << jung << endl;
```
* **정수부를 출력합니다.**

```
cout << "소수부 : " << sosu << endl;
```
* **소수부를 출력합니다.**

```
void get_parts(double num, int& jung, double& sosu) {
```
* **실수의 정수부와 소수부를 계산하는 함수입니다.**

```
jung = (int)num;
```
* **형변환을 이용하여 정수부를 구합니다.**

```
sosu = num - jung;
```
* **실수에서 정수부를 빼서 소수부를 구합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/CPP_programming/blob/main/img/5-2-4.png?raw=true" />
