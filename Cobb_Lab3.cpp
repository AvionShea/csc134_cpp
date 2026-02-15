// preprocessors
#include <iostream>

using namespace std;

int main() {
	// initializing
	int add = 1;
	int subtract = 2;
	int multiply = 3;
	int divide = 4;
	int exit = -1;
	int userChoice = 0;
	double firstNumber = 0;
	double secondNumber = 0;

	//start of while loop
	while (userChoice != -1) {
		//showing options and asking user for choice
		cout << "(1) Add Two Numbers" << endl;
		cout << "(2) Subtact Two Numbers" << endl;
		cout << "(3) Multiply Two Numbers" << endl;
		cout << "(4) Divide Two Numbers" << endl;
		cout << "(-1) Exit Program" << endl;
		cout << "Please make a selection (1, 2, 3, 4) or -1 to exit: ";
		cin >> userChoice;

		//branch options
		//addition branch
		if (userChoice == 1) {
			cout << "Enter your first number: ";
			cin >> firstNumber;

			cout << "Enter your second number: ";
			cin >> secondNumber;

			cout << "Answers is: " << firstNumber + secondNumber << endl;

			cout << "" << endl;

		} //subtraction branch
		else if (userChoice == 2) {
			cout << "Enter your first number: ";
			cin >> firstNumber;


			cout << "Enter your second number: ";
			cin >> secondNumber;


			cout << "Answers is: " << firstNumber - secondNumber << endl;

			cout << "" << endl;

		} // multiplication branch
		else if (userChoice == 3) {
			cout << "Enter your first number: ";
			cin >> firstNumber;


			cout << "Enter your second number: ";
			cin >> secondNumber;


			cout << "Answers is: " << firstNumber * secondNumber << endl;

			cout << "" << endl;

		} //division branch
		else if (userChoice == 4) {
			cout << "Enter your first number: ";
			cin >> firstNumber;


			cout << "Enter your second number: ";
			cin >> secondNumber;
			
			//checking if second # is 0
			if (secondNumber == 0) {
				cout << "Unable to divide by 0." << endl;
			}
			else {
				cout << "Answers is: " << firstNumber / secondNumber << endl;
			}

			cout << "" << endl;
		}//validation branch
		else {
			cout << "Please enter a valid selection." << endl;
			cout << "" << endl;
		}
	}// exit branch
	if (userChoice == -1) {
		cout << "You've exited the program.";
		cout << "" << endl;
	}
	return 0;
} // end of main