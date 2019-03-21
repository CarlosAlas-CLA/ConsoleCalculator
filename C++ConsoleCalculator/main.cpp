#include <iostream>
#include <string>
#include<iomanip>
#include<fstream>
#include"calc.h"

using namespace std;

// consoleApplication1Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Calculator
int main() {

	//Enter your choice(1 - 6) :.* /
	int num = 0;

	do {
		cout << "Calculator " << endl;
		cout << "Enter a choice between (1 - 6) " << endl;
		cout << "1-Multplication " << endl;
		cout << "2-Division " << endl;
		cout << "3-Subtraction" << endl;
		cout << "4-Addition" << endl;
		cout << "5-Print app info " << endl;
		cout << "6-Exit " << endl;

		cin >> num;
		cin.clear();
		cin.ignore();
		digit(num);

		} while (num != 6);


		return 0;

	}