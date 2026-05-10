

# 실습과제2 소스코드 설명  
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
string GetLatterString(string s1, string s2);
```
* **두 문자열 중 사전 순으로 뒤에 오는 문자열을 반환하는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string s1("hello");
string s2("world");
string res;
```
* **비교할 문자열과 결과를 저장할 변수를 선언합니다.**

```
res = GetLatterString(s1, s2);
```
* **함수를 호출하여 사전 순으로 뒤에 오는 문자열을 반환받습니다.**

```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다" << endl;
```
* **비교 결과를 출력합니다.**

```
string GetLatterString(string s1, string s2) {
```
* **두 문자열을 비교하는 함수입니다.**

```
if (s1 > s2) return s1;
else return s2;
```
* **사전 순으로 더 뒤에 있는 문자열을 반환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

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
string GetLatterString(string *s1, string *s2);
```
* **문자열 포인터를 매개변수로 받는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string s1("hello");
string s2("world");
string res;
```
* **비교할 문자열과 결과를 저장할 변수를 선언합니다.**

```
res = GetLatterString(&s1, &s2);
```
* **문자열의 주소를 함수에 전달합니다.**

```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
* **비교 결과를 출력합니다.**

```
string GetLatterString(string *s1, string *s2) {
```
* **포인터를 이용하여 문자열을 비교하는 함수입니다.**

```
if (*s1 > *s2) return *s1;
else return *s2;
```
* **역참조를 통해 문자열 값을 비교하여 반환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />

# 실습과제4 소스코드 설명  
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
void SwapString(string *s1, string *s2);
```
* **두 문자열을 교환하는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string s1("hello");
string s2("world");
```
* **교환할 문자열 변수를 선언합니다.**

```
cout << "호출전 s1:" << s1 << "s2:" << s2 << endl;
```
* **교환 전 문자열 상태를 출력합니다.**

```
SwapString(&s1, &s2);
```
* **문자열의 주소를 전달하여 값을 교환합니다.**

```
cout << "호출후 s1:" << s1 << "s2:" << s2 << endl;
```
* **교환 후 문자열 상태를 출력합니다.**

```
void SwapString(string *s1, string* s2) {
```
* **포인터를 이용하여 문자열을 교환하는 함수입니다.**

```
string tmp;
```
* **임시 저장용 문자열 변수를 선언합니다.**

```
tmp = *s1;
*s1 = *s2;
*s2 = tmp;
```
* **임시 변수를 이용하여 문자열 값을 서로 교환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />


# 실습과제5 소스코드 설명  
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
string GetLatterString(string arr[]);
```
* **문자열 배열에서 사전 순 문자열을 찾는 함수를 선언합니다.**

```
int main() {
```
* **프로그램의 시작 지점입니다.**

```
string res;
string names[5];
```
* **결과 문자열과 이름 배열을 선언합니다.**

```
for (int i = 0; i < 5; i++) {
	cout << "이름 >> ";
	getline(cin, names[i], '\n');
}
```
* **사용자로부터 이름 5개를 입력받습니다.**

```
GetLatterString(names);
```
* **문자열 배열을 함수에 전달합니다.**

```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다" << endl;
```
* **결과 문자열을 출력합니다.**

```
string GetLatterString(string arr[]) {
```
* **배열에서 문자열을 비교하는 함수입니다.**

```
string tmp;
tmp = arr[0];
```
* **비교 기준 문자열을 초기 설정합니다.**

```
for (int i = 0; i < 5; i++) {
```
* **배열의 모든 문자열을 순차적으로 비교합니다.**

```
if (tmp > arr[i]) tmp = arr[i];
```
* **사전 순으로 더 앞선 문자열로 갱신합니다.**

```
return tmp;
```
* **비교 결과 문자열을 반환합니다.**

```
return 0;
```
* **프로그램이 정상적으로 종료되었음을 의미합니다.**

<img width="745" height="286" alt="결과화면" src="결과화면 주소" />
