#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include "locale"

using namespace std;
class ukrStr
{
private:
	string *a = new string;
	string str1 = *a;
	string *b = new string;
	string str2 = *b;
	string *c = new string;
	string str3 = *c;

public:
	ukrStr() {
		cout << "Object created" << endl;
	}
	~ukrStr() {
		cout << "Object  destroyed";
		delete a;
		delete b;
		delete c;
	}
	void setUkrStr() // за допомогою цього метода змінимо значення задані в конструкторі
	{
		cout << "Введіть символьний рядок 1: ";
		getline(cin, str1);
		rewind(stdin);
		cout << "Введіть символьний рядок 2: ";
		getline(cin, str2);
		rewind(stdin);
	}

	void getUkrStr() //вивід на екран змінених значень
	{
		cout << "Символьний рядок 1 = " << str1 << endl;
		cout << "К-сть символів: " << str1.size() << endl;
		cout << "Символьний рядок 2 = " << b << endl;
		cout << "К-сть символів: " << str2.size() << endl << endl;
		cout << "Символьний рядок 3 = " << str3 << endl;
	}
	void concatenation()
	{
		str3 = str1 + str2;
		getUkrStr();
	}
	void checkSubString() {
		string choiseWord;
		cout << "На яке слово ви хочете здійснити перевірку?" << endl;
		getline(cin, choiseWord);
		int p = str3.find(choiseWord);
		if (p >= 0) {
			cout << "Провіряємо..." << endl;
			cout << "Знайдено підрядок в рядку" << endl;
		}
		else {
			cout << "Провіряємо..." << endl;
			cout << "Збігів не знайдено" << endl;
		}
	}
};
int main() {
	system("chcp 1251");
	ukrStr obj1;
	obj1.setUkrStr();
	obj1.concatenation();
	obj1.checkSubString();


	system("pause");
}