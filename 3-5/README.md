# 실습과제1

## 1. 함수를 사용하는 이유를 설명하라.
> 코드 재사용과 가독성을 높이고 프로그램을 구조적으로 관리하기 위해 사용합니다.

## 2. 짧은 코드를 갖는 함수를 자주 호출하면 발생하는 함수의 오버헤드를 설명하라.
> 함수 호출 시 스택 처리와 점프가 발생하여 실행 시간이 증가하는 오버헤드가 생깁니다.

## 3. 인라인함수에서 private 멤버변수를 직접 접근하는 것이 문법오류인가?
> 인라인 함수도 클래스 내부 함수이므로 private 멤버 접근이 가능하며 문법 오류가 아닙니다.

## 4. 인라인함수를 사용하는 이유를 설명하라
> 함수 호출 오버헤드를 줄이면서도 함수 구조를 유지하기 위해 사용하며 코드의 효율성과 가독성을 동시에 확보할 수 있습니다.

# 실습과제2 소스코드 설명
</br>

```
#define _CRT_SECURE_NO_WARNINGS
````

* **Visual Studio에서 `strcpy` 사용 시 보안 경고를 막기 위한 전처리 지시문입니다.**

```
#include <iostream>
```

* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**

```
using namespace std;
```

* **`std` 이름공간에 선언된 모든 이름에 `std::`를 생략합니다.**

```
class Account
```

* **계좌 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Account(const char* n) { strcpy(name, n); money = 0; };
	~Account() {}
	char* setOwner(char* n) { strcpy(name, n); }
	void setMoney(int m) { money = m; }
	int inquiry() { return money; }
	int withdraw(int wm) {
		if (wm <= money) {
			money -= wm;
			return wm;
		}
		else {
			cout << "잔액 " << money << endl;
			return 0;
		}
	}
	void deposit(int dm) { money += dm; }
	const char* getOwner() { return name; }

private:
	char name[50];
	int money;
};
```

* **예금주 이름과 잔액을 저장하고, 입금·출금·잔액조회·예금주 조회 기능을 제공하는 클래스입니다.**

```
Account(const char* n) { strcpy(name, n); money = 0; };
```

* **생성자로 예금주 이름을 저장하고 초기 잔액을 0으로 설정합니다.**

```
~Account() {}
```

* **객체가 소멸될 때 호출되는 소멸자입니다.**

```
char* setOwner(char* n) { strcpy(name, n); }
```

* **예금주 이름을 변경하는 함수입니다.**

```
void setMoney(int m) { money = m; }
```

* **잔액을 설정하는 함수입니다.**

```
int inquiry() { return money; }
```

* **현재 잔액을 반환하는 함수입니다.**

```
int withdraw(int wm)
```

* **출금 요청 금액을 처리하는 함수입니다.**

```
{
	if (wm <= money) {
		money -= wm;
		return wm;
	}
	else {
		cout << "잔액 " << money << endl;
		return 0;
	}
}
```

* **잔액이 충분하면 출금하고, 부족하면 현재 잔액을 출력한 뒤 0을 반환합니다.**

```
void deposit(int dm) { money += dm; }
```

* **입금 금액만큼 잔액을 증가시키는 함수입니다.**

```
const char* getOwner() { return name; }
```

* **예금주 이름을 반환하는 함수입니다.**

```
int main()
```

* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Account a("홍길동");
```

* **예금주가 `홍길동`인 계좌 객체를 생성합니다.**

```
a.deposit(20000);
```

* **계좌에 20000원을 입금합니다.**

```
cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
```

* **예금주 이름과 현재 잔액을 출력합니다.**

```
int money = a.withdraw(15000);
```

* **15000원을 출금하고 출금 금액을 변수에 저장합니다.**

```
cout << money << "원 출금, ";
```

* **출금한 금액을 출력합니다.**

```
cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
```

* **출금 후 남은 잔액을 출력합니다.**

```
money = a.withdraw(8000);
```

* **8000원 출금을 시도합니다.**

```
cout << money << "원 출금, ";
```

* **실제 출금된 금액을 출력합니다.**

```
cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
```

* **최종 잔액을 출력합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

# 실습과제4 소스코드 설명
</br>

```
#define _CRT_SECURE_NO_WARNINGS
```
* **Visual Studio에서 `strcpy` 사용 시 보안 경고를 막기 위한 전처리 지시문입니다.**

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Picture
```
* **사진의 정보를 표현하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Picture() {
		width = 5;
		height = 7;
		strcpy(location, "모름");
	}
	Picture(int w, int h, const char* loca) {
		width = w;
		height = h;
		strcpy(location, loca);
	}
	~Picture() {}

	int getWidth() { return width; }
	int getHeight() { return height; }
	const char* getPlace() { return location; }

private:
	char location[100];
	int width, height;
};
```
* **사진의 위치, 너비, 높이를 저장하고 생성자와 값을 반환하는 함수들을 제공하는 클래스입니다.**

```
Picture()
```
* **기본 생성자로, 크기를 (5,7)로 설정하고 위치를 "모름"으로 초기화합니다.**

```
Picture(int w, int h, const char* loca)
```
* **매개변수를 받아 크기와 위치를 설정하는 생성자입니다.**

```
~Picture() {}
```
* **객체 소멸 시 호출되는 소멸자입니다.**

```
int getWidth() { return width; }
```
* **너비 값을 반환합니다.**

```
int getHeight() { return height; }
```
* **높이 값을 반환합니다.**

```
const char* getPlace() { return location; }
```
* **사진의 위치 정보를 반환합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Picture pic;
```
* **기본 생성자를 통해 (5,7,"모름")으로 초기화된 객체를 생성합니다.**

```
Picture mt(10, 14, "한라산");
```
* **매개변수 생성자를 통해 (10,14,"한라산")으로 초기화된 객체를 생성합니다.**

```
cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
```
* **첫 번째 객체의 크기와 위치를 출력합니다.**

```
cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
```
* **두 번째 객체의 크기와 위치를 출력합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

# 실습과제5 소스코드 설명
</br>

```
#define _CRT_SECURE_NO_WARNINGS
```
* **Visual Studio에서 `strcpy` 사용 시 보안 경고를 막기 위한 전처리 지시문입니다.**

```
#include <iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함합니다.**

```
using namespace std;
```
* **`std::`를 생략하고 표준 라이브러리를 사용하기 위해 선언합니다.**

```
class Storage
```
* **데이터를 저장하고 평균을 계산하기 위한 사용자 정의 클래스입니다.**

```
{
public:
	Storage() {
		for (int i = 0; i < 10; i++) {
			average_total[i] = 0.0;
		}
		count = 0; 
	}
	~Storage() {}
	void put(double temp);
	double getAvg();
	void dump();

private:
	double average_total[10];
	int count;
};
```
* **데이터 배열과 개수를 저장하고, 입력·평균 계산·출력 기능을 제공하는 클래스입니다.**

```
Storage()
```
* **기본 생성자로 배열을 0으로 초기화하고 저장 개수를 0으로 설정합니다.**

```
void Storage::put(double temp)
```
* **데이터를 저장하는 함수입니다.**

```
{
	if (count < 10) { average_total[count] += temp; count++; }
	else cout << "최대 10회를 초과 하였습니다." << endl;
}
```
* **최대 10개까지 데이터를 저장하고, 초과 시 경고 메시지를 출력합니다.**

```
double Storage::getAvg()
```
* **평균을 계산하는 함수입니다.**

```
{
	double total = 0;
	for (int j = 0; j < count; j++) total += average_total[j];
	return total / count;
}
```
* **저장된 값들의 합을 구한 뒤 평균을 반환합니다.**

```
void Storage::dump()
```
* **저장된 데이터를 출력하는 함수입니다.**

```
{
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ". " << average_total[i] << endl;
	}
}
```
* **저장된 데이터를 순서대로 출력합니다.**

```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수입니다.**

```
Storage a;
```
* **Storage 객체를 생성합니다.**

```
a.put(36.7);
```
* **첫 번째 데이터를 저장합니다.**

```
a.put(36.9);
```
* **두 번째 데이터를 저장합니다.**

```
a.put(36.4);
```
* **세 번째 데이터를 저장합니다.**

```
a.dump();
```
* **저장된 데이터를 출력합니다.**

```
cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
```
* **평균 값을 계산하여 출력합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />
