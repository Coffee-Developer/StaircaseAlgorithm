#include <iostream>

using namespace std;

void Staircase(int length, int height, string symbol);

int main()
{
	int length, height;
	string symbol;

	cout << "Enter a symbol: ";
	cin >> symbol;
	system("cls");
	cout << "Enter a number of characters per line: ";
	cin >> length;
	system("cls");
	cout << "Enter a number of steps: ";
	cin >> height;

	while (true) Staircase(length, height, symbol);
}

void Staircase(int length, int height, string symbol)
{
	int lengthInScreen = 0;

	while (lengthInScreen != length * height)
	{
		for (int i = 0; i < length; i++)
		{
			cout << symbol;
			lengthInScreen++;
		}
		cout << endl;
		if (lengthInScreen != length * height) for (int i = 0; i < lengthInScreen; i++) cout << " ";
		else for (int i = 0; i < lengthInScreen - length; i++) cout << " ";
	}
	while (lengthInScreen != 0)
	{
		if (lengthInScreen != length * height) for (int i = 0; i < lengthInScreen - length; i++) cout << " ";
		for (int i = 0; i < length; i++)
		{
			cout << symbol;
			lengthInScreen--;
		}
		cout << endl;
	}
}