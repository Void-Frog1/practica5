#include <iostream>

using namespace std;


int main()
{
	setlocale(0, "");

	int numOfVizit = 0;
	int totalAge = 0;

	int youngAge = 9999;
	int oldAge = 0;

	cout << "Сколько посетило людей?: ";
	cin >> numOfVizit;

	for (int i = 0; i < numOfVizit; i++)
	{
		cout << "Введите возраст человека: ";
		int age;
		cin >> age;
		totalAge += age;

		if (youngAge > age)
		{
			youngAge = age;
		}
		if (oldAge < age)
		{
			oldAge = age;
		}
	}

	cout << "Самый младший: " << oldAge << endl;
	cout << "Самый старший: " << youngAge << endl;
	cout << "Средний возраст: " << totalAge / numOfVizit << endl;

}
