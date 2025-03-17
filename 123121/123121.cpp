//Завдання 2
//Використовуючи покажчики та оператор розіменування, визначити знак числа, введеного з клавіатури.

#include <iostream>
using namespace std;


int main()
{
	int number;

	cout << "Your number: ";
	cin >> number;

	int* ptrN = &number;

	if (*ptrN > 0) {
		cout << "This number is passiv!" << endl;
	}
	else {
		cout << "This number is negative!" << endl;
	}
}