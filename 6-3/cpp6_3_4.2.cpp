#include <iostream>
using namespace std;

class Vector {
	int* mem;
	int size;
public:
	Vector(int m = 5, int value = 0) {
		this->size = m;
		this->mem = new int[m];
		for (int i = 0; i < m; i++) { mem[i] = value; }
	}
	~Vector() { delete[] mem; }
	void show(int n = 0) {
		if (n == 0) n = size;
		for (int i = 0; i < n; i++)
		{
			cout << mem[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	Vector x;
	Vector y(10, 8);
	x.show();
	y.show();
	y.show(3);
}
