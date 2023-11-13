#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int arr[10] = { 7, -3, -1, 2, 4, 6, 8, 9, 10, 11 };
	int newSize = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			arr[newSize] = arr[i];
			newSize++;
			cout << arr[i] << " ";
		}
	}
	cout << endl << "Новый размер массива: " << newSize << endl;
}
