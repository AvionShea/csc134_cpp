/*
	Avion Cobb
	CSC 134 - Chapter 3 Lab 1
	Wake Tech Average Calculator

	A program that asks users for 5 numeric test grades, calculates the average, and displays the test scores along with the average.


*/

// include statements
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {

	// initalize variables
	double test1Score = 0.0;
	double test2Score = 0.0;
	double test3Score = 0.0;
	double test4Score = 0.0;
	double test5Score = 0.0;
	double average = 0.0;

	//asking users for test scores and storing them in variables
	cout << "Enter score for test 1: ";
	cin >> test1Score;
	cout << "Enter score for test 2: ";
	cin >> test2Score;
	cout << "Enter score fror test 3: ";
	cin >> test3Score;
	cout << "Enter score fror test 4: ";
	cin >> test4Score;
	cout << "Enter score fror test 5: ";
	cin >> test5Score;


	//calculating average of test scores
	average = (test1Score + test2Score + test3Score + test4Score + test5Score) / 5;

	//displaying values entered for test scores
	cout << "" << endl; // provides a space
	cout << fixed << showpoint << setprecision(1);
	cout << "Test 1 Score: " << test1Score << endl;
	cout << "Test 2 Score: " << test2Score << endl;
	cout << "Test 3 Score: " << test3Score << endl;
	cout << "Test 4 Score: " << test4Score << endl;
	cout << "Test 5 Score: " << test5Score << endl;

	//displaying average of test scores
	cout << fixed << showpoint << setprecision(1);
	cout << "Average: " << average << endl;

	// writes to a .txt file called testaverage
	ofstream outFile("testaverage.txt", ios::app); //opens txt file and apprends new test scores and averages rather than overwriting
	outFile << fixed << showpoint << setprecision(1);
	outFile << "Test 1 Score: " << test1Score << endl;
	outFile << "Test 2 Score: " << test2Score << endl;
	outFile << "Test 3 Score: " << test3Score << endl;
	outFile << "Test 4 Score: " << test4Score << endl;
	outFile << "Test 5 Score: " << test5Score << endl;
	outFile << "Average: " << average << endl;
	outFile << "" << endl; // provides a space
	outFile.close();


	return 0;

}// end main