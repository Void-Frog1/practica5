#include <iostream>

using namespace std;


int main()
{
	setlocale(0, "");

	char station;

	cout << "Введите станцию: ";
	cin >> station;

	switch (station)
	{
	case 'a':
	case 'A':
		cout << "До пункта А 100 метров";
		break;
	case 'b':
	case 'B':
		cout << "До пункта B 1000 метров";
		break;
	case 'c':
	case 'C':
		cout << "До пункта C 5600 метров";
		break;
	case 'd':
	case 'D':
		cout << "До пункта D 10 метров";
		break;
	case 'e':
	case 'E':
		cout << "До пункта E 6230 метров";
		break;

	default:
		cout << "Неверная команда";
		break;
	}
}
