#include <iostream>
#define ARR_SIZE 5
#define ARR_SIZE_FOR_LOOP 4
using namespace std;

class List {
private:
	int *arr;
public:
	List()
	{
		arr = new int[ARR_SIZE];
		cout << "Object created" << endl;
	}
	~List()
	{
		delete[]arr;
		cout << "Object  destroyed";
	}
	int GetArr(int i)
	{
		return arr[i];
	}
	void SetArr(int i, int x)
	{
		arr[i] = x;
	}
	void sort();
	void add();
	void remove();
};
void List::add()
{
	int addNumber;
	cout << "Please add new number in array = ";
	cin >> addNumber;
	arr[4] = addNumber;
	//SetArr(ARR_SIZE_FOR_LOOP, addNumber);
}
void List::sort()
{
	int j, rab;
	int *pmas;
	pmas = arr;      // pmas - &arr[0]; 
	for (int ³ = 1; ³ < ARR_SIZE; ³++) // Sort by insertion method
	{
		rab = *(pmas + ³);
		j = ³;
		while (j > 0 && rab < *(pmas + j - 1))
		{
			*(pmas + j) = *(pmas + j - 1);
			j--;
		}
		*(pmas + j) = rab;
	}
	cout << "Sorted array in order of magnification:" << endl;
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}
void List::remove()
{
	int indexNumber;
	cout << "Select index of number to delete: ";
	cin >> indexNumber;
	while (indexNumber < 0 || indexNumber>4) // cheking index nubmer
	{
		cout << "Wrong index" << endl;
		cout << "Select index of number to delete: ";
		cin >> indexNumber;
	}
	for (; indexNumber < ARR_SIZE - 1; indexNumber++) // delete number
	{
		arr[indexNumber] = arr[indexNumber + 1];
	}
	for (int i = 0; i < ARR_SIZE_FOR_LOOP; i++)
	{
		cout << GetArr(i) << endl;
	}
}


int main() {
	system("chcp 1251");
	List list;
	cout << "Input array elements: " << endl;
	for (int i = 0, x = 0; i < ARR_SIZE_FOR_LOOP; i++)  // Input array elements
	{
		cin >> x;
		list.SetArr(i, x);
	}
	list.add(); // adding number in arr 
	for (int i = 0; i < ARR_SIZE; i++) // output arr with added number
	{
		cout << list.GetArr(i) << endl;
	}
	list.sort();
	list.remove();
	system("pause");
}