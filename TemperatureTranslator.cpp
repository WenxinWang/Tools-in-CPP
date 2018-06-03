/*
* Date: June 2, 2018
* From book page: P8
*/

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
// header file Windows.h provides Sleep(1000) function to wait for 1 second.

using namespace std;

int main()
{
	int choice = 0;
	double Fahrenheit = 0.0;
	double Celsius = 0.0;

	cout << "Please reply 1 if you want to transfer Fahrenheit to Celsius, otherwise reply 2 \n";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Please enter the Fahrenheit degree: ";
		cin >> Fahrenheit;
		Celsius = 5 * (Fahrenheit - 32) / 9;
		cout << "\n Fahrenheit " << Fahrenheit << " = Celsius " << Celsius << "\n";
		Sleep(20000);
	}

	else if (choice == 2)
	{
		cout << "Please enter the Celsius degree: ";
		cin >> Celsius;
		Fahrenheit = Celsius * 9 / 5 + 32;
		cout << "\n Celsius " << Celsius << " = Fahrenheit " << Fahrenheit << "\n";
		Sleep(20000);
	}

	else
	{
		cout << "The number you entered is invalid. \n";
		Sleep(20000);
		return 0;
	}
}
