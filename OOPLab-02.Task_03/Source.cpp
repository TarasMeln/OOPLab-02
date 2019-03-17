#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class calendar {
private:
	int *a = new int;
	int day = *a;
	int *b = new int;
	int month = *b;
	int *c = new int;
	int year = *c;
	char *input = new char[40];
public:
	calendar() {
		cout << "Object created" << endl;
	}
	~calendar() {
		cout << "Object  destroyed";
	}
	void setCalendar() {
		cout << "Введіть день: ";
		cin >> input;
		day = atoi(input);
		if (day > 31 || day <= 0) {
			while (day > 31 || day <= 0) {
				cout << "День був введений не вірно (1-31)" << endl;
				cout << "Повторіть спробу коректно" << endl;;
				cin >> input;
				day = atoi(input);
			}
		}

		cout << "Введіть місяць: ";
		cin >> input;
		month = atoi(input);
		if (month > 12 || month <= 0) {
			while (month > 12 || month <= 0) {
				cout << "Місяць був введений не вірно (1-12)" << endl;
				cout << "Повторіть спробу коректно" << endl;;
				cin >> input;
				month = atoi(input);
			}
		}

		cout << "Введіть рік: ";
		cin >> year;
	}
	void getCalendar() {
		cout << "Дата:";
		cout << day << "/" << month << "/" << year << endl;
		cout << "Дата:";
		cout << year << "-" << month << "-" << day << endl;
	}
	void incrementDay() {
		++day;
		if (day > 31) {
			cout << "Збільше дня на 1 пунк неможливо." << endl;
		}
		else {
			cout << "Змінена дата:";
			cout << day << "/" << month << "/" << year << endl;
			cout << "Змінена дата:";
			cout << year << "-" << month << "-" << day << endl;
		}
	}
};
int main() {
	system("chcp 1251");
	calendar obj1;
	obj1.setCalendar();
	obj1.getCalendar();
	obj1.incrementDay();
	system("pause");
}