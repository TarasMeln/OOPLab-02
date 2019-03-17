#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
class cone {
private:
	char *input = new char[40];
	int *a = new int;
	int height = *a;
	int *b = new int;
	int radiusBase = *b;
public:
	cone() {
		cout << "Object created" << endl;
	}
	~cone() {
		cout << "Object  destroyed";
	}
	void setCone() {
		cout << "������ �������� ������ ������:";
		cin >> input;
		radiusBase = atoi(input);
		if (radiusBase <= 0) {
			while (radiusBase <= 0) {
				cout << "�� ��������� �������� �����" << endl;
				cout << "�������� ������ ��������" << endl;;
				cin >> input;
				radiusBase = atoi(input);
			}
		}
		cout << "������ �������� ������:";
		cin >> input;
		height = atoi(input);
		if (height <= 0) {
			while (height <= 0) {
				cout << "�� ��������� ������� ������" << endl;
				cout << "�������� ������ ��������" << endl;;
				cin >> input;
				height = atoi(input);
			}
		}
	}
	void getCone() {
		cout << "������ ������:" << radiusBase << endl;
		cout << "������:" << height << endl;

	}
	void calculationVolume() {
		double resultVolme = 1.0 / 3.0 *radiusBase*height;
		cout << "��'�� ������: " << resultVolme << endl;
	}
	void calculationSurfaceArea() {
		float pi = 3.141592;
		double resultBase�rea = pi * pow(radiusBase, 2);
		double coneGenerator = pow(height, 2) + pow(radiusBase, 2);
		double resultLateralSurface = pi * radiusBase * sqrt(coneGenerator);
		double resultSurfaceArea = resultBase�rea + resultLateralSurface;
		cout << "����� ������� ������: " << resultSurfaceArea << endl;
	}

};
int main() {
	system("chcp 1251");
	cone obj1;
	obj1.setCone();
	obj1.getCone();
	obj1.calculationVolume();
	obj1.calculationSurfaceArea();
	system("pause");
}