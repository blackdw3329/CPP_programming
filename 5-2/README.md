# 실습과제1

## 1. 참조에 의한 호출과 주소에 의한 호출의 차이점을 설명하라.
> 주소에 의한 호출은 포인터를 사용하여 변수의 주소를 전달합니다.  
> 참조에 의한 호출은 변수의 별명을 사용하여 원본 변수에 직접 접근합니다.

---

## 2. 참조에 의한 호출의 장점은 무엇인가?
> 포인터 연산 없이 원본 데이터를 직접 사용할 수 있어 코드가 간단하고 가독성이 좋습니다.

---

# 실습과제1

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

