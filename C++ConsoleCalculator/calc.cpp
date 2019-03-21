//calSource

#include "calc.h"
void digit(int x) {

	double num, num1, num2 = 0;

	ifstream inFile;//input stream variable
	ofstream outFile;//output stream variable
	//calculatorChoices
	switch (x) {
		//Multilication
		case 1: cout << "Enter a number to multiply " << endl;
			cin >> num1;
			cout << "Enter a number to multiply by " << endl;
			cin >> num2;
			cout << "Answer " << num1 * num2<<endl;
			break;
			//Division
		case 2: cout << "Please enter a number to divide " << endl;
			cin >> num1;
			cout << "Please enter a number to divide  by " << endl;
			cin >> num2;
			cout <<"Answer " << num1 / num2<<endl;
			break;

			//Subtraction
		case 3: cout << "Please enter a number to subtract " << endl;
			cin >> num1;

			cout << "Please enter a number to divide by " << endl;
			cin >> num2;
			cout << "Answer " <<num1 - num2<<endl;
			break;
			//Addition
		case 4: cout << "Please enter a number to add " << endl;
			cin >> num1;
			cout << "Please enter a number to add to" << endl;
			cin >> num2;
			cout << "Answer " <<num1 + num2<<endl;
			break;

		
			//Print to file
		case 5:
			outFile.open("Documents\calInform.txt");//open the outputfile
			outFile << "Program details " << endl
				<< "1.Multiply " << endl

				<< "2.Division " << endl

				<< "3.Minus " << endl

				<< "4.Adding " << endl

				<< "5.Print to File " << endl

				<< "6. Quit" << endl

				<< "Enter your choice(1 - 6) " << endl;

			outFile << fixed << showpoint;
			outFile << setprecision(2);
			outFile.close();
			cout << "Print to file was succesfull " << endl;
			break;
			//Exit
		case 6:cout << "Good Bye " << endl;

			break;

		default: cout << "Please enter # between 1-6  " << endl;
			break;

		
	}
}
