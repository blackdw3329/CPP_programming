# C++ 1장-2 실습과제1
날 짜 : 2026년 3월 4일<br>
작성자 : 2301358 김동욱<br>

## 1. IDE란 무엇인가?

> **IDE**는 프로그램 개발에 필요한 **코드 작성, 컴파일, 실행, 디버깅 등의 기능을 하나의 프로그램 안에서 통합적으로 제공하는 개발 환경**으로, 개발자가 여러 도구를 따로 사용하지 않고 **효율적으로 프로그램을 개발할 수 있도록 도와주는 소프트웨어**입니다.

---

## 2. IDE의 종류에 대하여 조사하시오.

> 대표적인 IDE의 종류에는 **Visual Studio, VS Code, Eclipse, IntelliJ IDEA, Code::Blocks** 등이 있으며, 이러한 IDE들은 다양한 **프로그래밍 언어와 개발 환경을 지원하여 프로그램을 보다 효율적으로 개발할 수 있도록 도움을 줍니다.**

---

## 3. IDE에 포함된 기능은 무엇인가?

> IDE에는 프로그램 개발을 돕기 위한 다양한 기능이 포함되어 있으며, 대표적으로 **코드 편집 기능, 컴파일 기능, 디버깅 기능, 자동 완성 기능, 빌드 기능, 실행 기능** 등이 있습니다.  
> 또한 최근에는 **인공지능 기반 코드 추천, 코드 자동 생성, 오류 분석 및 수정 제안과 같은 인공지능 기능**도 포함되어 있습니다.


<br><br>
# C++ 1장-2 실습과제2
날 짜 : 2026년 3월 4일<br>
작성자 : 2301358 김동욱<br>

# 소스코드 설명
</br>

```
#include<iostream>
```
* **입출력 기능을 사용하기 위해 `iostream` 라이브러리를 포함하는 지시문입니다.**
```
int main()
```
* **프로그램의 실행이 시작되는 메인 함수로, 프로그램의 시작 지점입니다.**
```
	std::cout << "Hello";
```
* **표준 출력 객체인 `cout`을 사용하여 화면에 `"Hello"`라는 문자열을 출력하는 코드입니다.**
```
	std::cout << std::endl;
```
* **화면에 출력한 뒤 줄을 바꾸는(다음 줄로 넘어가는) 코드입니다.**
```
	return 0;
```
* **프로그램이 정상적으로 종료되었음을 운영체제에 알리는 코드입니다.**

# 소스코드 결과
---
<img width="745" height="286" alt="결과화면" src="https://github.com/blackdw3329/just_box/blob/main/img/%EA%B2%B0%EA%B3%BC%ED%99%94%EB%A9%B41-2.png?raw=true" />

<br><br>
# 소스파일(cpp), 목적파일(obj), 실행파일(exe)의 위치를 찾아보라.

## 소스파일(cpp)
<img width="745" height="286" alt="소스코드" src="https://github.com/blackdw3329/just_box/blob/main/img/소스코드캡쳐.png?raw=true" />

## 목적파일(obj)
<img width="745" height="286" alt="목적파일" src="https://github.com/blackdw3329/just_box/blob/main/img/목적파일캡쳐.png?raw=true" />

## 실행파일(exe)
<img width="745" height="286" alt="실행파일" src="https://github.com/blackdw3329/just_box/blob/main/img/실행파일캡쳐.png?raw=true" />
