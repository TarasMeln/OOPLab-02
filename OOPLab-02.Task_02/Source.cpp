#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ARRAY_SIZE 5
using namespace std;
class Vector {
private:
	int *a = new int[ARRAY_SIZE];
	int *b = new int;
	int amountArrayElements = *b;
public:
	Vector() {
		cout << "Object created" << endl;
	}
	~Vector() {
		cout << "Object  destroyed";
		delete[] a;
		delete b;
	}
	void setVector()
	{
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << "Введіть елементи масиву: ";
			cin >> a[i];
			rewind(stdin);
		}
	}
	void getVector()
	{
		for (int i = 0; i < ARRAY_SIZE; i++)
			cout << "Елементи масиву = " << a[i] << endl;
	}

	void maxArrayNumber() {
		int maxNumber = a[0];
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (maxNumber < a[i])
			{
				maxNumber = a[i];
			}
		}
		cout << "Найбільший елемент масиву: " << maxNumber << endl;
	}
	void minArrayNumber() {
		int minNumber = a[0];
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (minNumber > a[i])
			{
				minNumber = a[i];
			}
		}
		cout << "Найменший елемент масиву: " << minNumber << endl;
	}
	void sortFirstMax() {
		int j, rab;
		int *pmas;
		pmas = a;      // pmas - &a[0]; — вказівник на початок масива
		for (int і = 1; і < ARRAY_SIZE; і++) // сортування методом вставки
		{
			rab = *(pmas + і);
			j = і;
			while (j > 0 && rab > *(pmas + j - 1))
			{
				*(pmas + j) = *(pmas + j - 1);
				j--;
			}
			*(pmas + j) = rab;
		}
		cout << "Відсортований масив у порядку зменшення:" << endl;
		for (int b = 0; b < ARRAY_SIZE; b++) {
			cout << *(pmas + b) << endl;
		}
	}
	void sortFirstMin() {
		int minN;
		for (int i = 0; i < ARRAY_SIZE; i++) {
			minN = i;
			for (int j = i + 1; j < ARRAY_SIZE; j++) {
				if (a[j] < a[minN]) {
					minN = j;
				}
				int p = a[i];
				a[i] = a[minN];
				a[minN] = p;
			}
		}
		cout << "Відсортований масив у порядку збільшення:" << endl;
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << a[i] << endl;
		}
	}
};

int main() {
	system("chcp 1251");
	Vector obj1;
	obj1.setVector();
	obj1.getVector();
	obj1.maxArrayNumber();
	obj1.minArrayNumber();
	obj1.sortFirstMax();
	obj1.sortFirstMin();
	system("pause");
}