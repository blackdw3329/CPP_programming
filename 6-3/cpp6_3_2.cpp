#include <iostream>
using namespace std;

class MyMath {
public:
	static int GetMax(int* arr, int size);
	static int GetMin(int* arr, int size);
};
int MyMath::GetMax(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];
	return max;
}
int MyMath::GetMin(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}

int main() {
	int x[5] = { 20, 30, -5, 2, -30 };
	cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
	cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
	return 0;
}
