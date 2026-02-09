//Include statements and preprocessors
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	//intializing age, ticket price, and last name variables
	int customerAge1 = 0;
	int customerAge2 = 0;
	int customerAge3 = 0;
	double ticketPrice1 = 0;
	double ticketPrice2 = 0;
	double ticketPrice3 = 0;
	string customerLastName1;
	string customerLastName2;
	string customerLastName3;

	// Comparing ages
	/*
	* Age 0 - 5: Free
	Age 6 - 12 : Child ticket($5)
	Age 13 - 17 : Teen ticket($8)
	Age 18 - 59 : Adult ticket($12)
	Age 60 and above : Senior ticket($6)
	*/
	
	// Customer 1
	cout << "Enter the last name of customer 1: ";
	cin >> customerLastName1;
	cout << "Enter the age of customer 1: ";
	cin >> customerAge1;

	if (customerAge1 <= 5) {
		ticketPrice1 = 0;
	}
	else if (customerAge1 >= 6 && customerAge1 <= 12) {
		ticketPrice1 = 5;
	}
	else if (customerAge1 >= 13 && customerAge1 <= 17) {
		ticketPrice1 = 8;
	}
	else if (customerAge1 >= 18 && customerAge1 <=59) {
		ticketPrice1 = 12;
	}
	else {
		ticketPrice1 = 6;
	}

	cout << "" << endl;

	// Customer 2
	cout << "Enter the last name of customer 2: ";
	cin >> customerLastName2;
	cout << "Enter the age of customer 2: ";
	cin >> customerAge2;
	if (customerAge2 <= 5) {
		ticketPrice2 = 0;
	}
	else if (customerAge2 >= 6 && customerAge2 <= 12) {
		ticketPrice2 = 5;
	}
	else if (customerAge2 >= 13 && customerAge2 <= 17) {
		ticketPrice2 = 8;
	}
	else if (customerAge2 >= 18 && customerAge2 <= 59) {
		ticketPrice2 = 12;
	}
	else {
		ticketPrice2 = 6;
	}

	cout << "" << endl;

	// Customer 3
	cout << "Enter the last name of customer 3: ";
	cin >> customerLastName3;
	cout << "Enter the age of customer 3: ";
	cin >> customerAge3;

	if (customerAge3 <= 5) {
		ticketPrice3 = 0;
	}
	else if (customerAge3 >= 6 && customerAge3 <= 12) {
		ticketPrice3 = 5;
	}
	else if (customerAge3 >= 13 && customerAge3 <= 17) {
		ticketPrice3 = 8;
	}
	else if (customerAge3 >= 18 && customerAge3 <= 59) {
		ticketPrice3 = 12;
	}
	else {
		ticketPrice3 = 6;
	}

	cout << "" << endl;
	
	//Displaying Customer Info
	// Customer 1
	cout << "Customer 1 Last Name: " << customerLastName1 << endl;
	cout << "Customer 1 Age: " << customerAge1 << endl;
	cout << "Customer 1 Ticket Price: $" << ticketPrice1 << endl;

	cout << "" << endl;

	//Customer 2
	cout << "Customer 2 Last Name: " << customerLastName2 << endl;
	cout << "Customer 2 Age: " << customerAge2 << endl;
	cout << "Customer 2 Ticket Price: $" << ticketPrice2 << endl;

	cout << "" << endl;

	//Customer 3
	cout << "Customer 3 Last Name: " << customerLastName3 << endl;
	cout << "Customer 3 Age: " << customerAge3 << endl;
	cout << "Customer 3 Ticket Price: $" << ticketPrice3 << endl;

	cout << "" << endl;

	//Calculations
	//Intializing Total Variables
	double subtotal = ticketPrice1 + ticketPrice2 + ticketPrice3;
	double processingFee = subtotal * 0.05;
	double totalCharge = subtotal + processingFee;

	cout << "------------ CALCULATIONS ------------" << endl;
	cout << fixed << setprecision(2);
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Processing Fee: $" << processingFee << endl;
	cout << "Total Charges: $" << totalCharge << endl;

	return 0;

}// end of main