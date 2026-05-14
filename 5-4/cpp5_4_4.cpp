#include <iostream>

using namespace std;

class Collector
{
	int* p;
	int size = 0;
public:
	Collector(int size, int values[]);
	Collector(const Collector& src);
	~Collector();
	void show();
	int getSize() { return size; }
	int get(int index) { return p[index]; }

};

Collector::Collector(int size, int values[])
{
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = values[i];
	}
}
Collector::Collector(const Collector& src)
{
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->p[i] = src.p[i];
	}
}
Collector::~Collector() { delete[] p; }

void Collector::show() {
	cout << "데이터 수 " << this->size << ": ";
	for (int i = 0; i < this->size; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
double calcAvg(Collector w) {
	int total = 0;
	for (int i = 0; i < w.getSize(); i++)
	{
		total += w.get(i);
	}
	return (double)total / w.getSize();
}
int main() {
	int temp[] = { 69, 70, 71, 72, 74 };
	Collector weight(4, temp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
}