#include "Cobb_Lab5_Header.h"
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;
using namespace icecream;

//namespace definitions
namespace icecream {
	int vanilla = 0;
	int chocolate = 0;
	int strawberry = 0;
	int banana = 0;
	int oreo = 0;

	//rating function definitions
	rating getRating(double vScore, double cScore, double
		sScore, double bScore, double oScore) {

		double averageRating = (vScore + cScore + sScore + bScore + oScore) / 5;
		// determining the approrpriate rating based upon score
		if (averageRating >= 9.0) {
			return EXCELLENT;
		}
		else if (averageRating>= 7.0) {
			return GOOD;
		}
		else if (averageRating >= 5.0) {
			return OK;
		}
		else if (averageRating >= 3.0) {
			return NOT_GOOD;
		}
		else {
			return BAD;
		}
	}

	//getting the favorite flavor based upong highest score value
	flavors getFavoriteFlavor(double vscore, double cscore, double sscore, double bscore, double oscore) {
		double highestScore = vscore;
		flavors favorite = VANILLA;

		//determining the flavor
		if (cscore > highestScore) {
			highestScore = cscore;
			favorite = CHOCOLATE;
		}
		if (sscore > highestScore) {
			highestScore = sscore;
			favorite = STRAWBERRY;
		}
		if(bscore > highestScore) {
			highestScore = bscore;
			favorite = BANANA;
		}
		if (oscore > highestScore) {
			highestScore = oscore;
			favorite = OREO;
		}

		return favorite;


	}

	// increasing the score on the amount of times it appears
	void incrementFavoriteCounter(flavors favorite) {
		
		//switch/case for favorite flavors
		switch (favorite) {
		case VANILLA:
			vanilla++;
			break;
		case CHOCOLATE:
			chocolate++;
			break;
		case STRAWBERRY:
			strawberry++;
			break;
		case BANANA:
			banana++;
			break;
		case OREO:
			oreo++;
			break;
		default:
			break;
		}
	}

	// converting the rate to a message function
	string convertRateToMessage(rating rate, flavors favFlavor) {
		string ratingMessage;
		string flavor;

		switch (rate) {
		case EXCELLENT:
			ratingMessage = "Customer rating is EXCELLENT.";
			break;
		case GOOD:
			ratingMessage = "Customer rating is GOOD.";
			break;
		case OK:
			ratingMessage = "Customer rating is OK.";
			break;
		case NOT_GOOD:
			ratingMessage = "Customer rating is NOT_GOOD.";
			break;
		case BAD:
			ratingMessage = "Customer rating is BAD.";
			break;
		default:
			break;
		}

		switch (favFlavor) {
		case VANILLA:
			flavor = "VANILLA";
			break;
		case CHOCOLATE:
			flavor = "CHOCOLATE";
			break;
		case STRAWBERRY:
			flavor = "STRAWBERRY";
			break;
		case BANANA:
			flavor = "BANANA";
			break;
		case OREO:
			flavor = "OREO";
			break;
		default:
			break;
		}

		return ratingMessage + " Favorite: " + flavor + ".";
	}
}


int main() {
	//reading input file
	ifstream inputFile;
	inputFile.open("flavors.txt");
	if (!inputFile) {
		cout << "Error: could not open flavors.txt" << endl;
		return 1;
	}

	//declaring file variables
	string customerFirstName;
	string customerLastName;
	double vScore, cScore, sScore, bScore, oScore;

	//writing the file
	ofstream outputFile;
	outputFile.open("flavors_report.txt");
	if (!outputFile) {
		cout << "Error: could not write to flavors_report.txt";
		return 1;
	}

	//header for output file
	outputFile << left << setw(20) << "Customer Last Name | " << setw(20) << "Customer First Name | " << setw(15) << "Customer Rating" << endl;
	outputFile << "\n";
	
	//while there's still info in the input file to read, continue
	while (inputFile >> customerLastName >> customerFirstName >> vScore >> cScore >> sScore >> bScore >> oScore) {
		rating customerRating = getRating(vScore, cScore, sScore, bScore, oScore);
		flavors customerFavoriteFlavor = getFavoriteFlavor(vScore, cScore, sScore, bScore, oScore);
		incrementFavoriteCounter(customerFavoriteFlavor);
		string message = convertRateToMessage(customerRating, customerFavoriteFlavor);

		outputFile << left << setw(20) << customerLastName << setw(20) << customerFirstName << setw(50) << message << endl;

	}

	//write ice cream flavor counts to output file
	outputFile << "\n";
	outputFile << "Vanilla count: " << vanilla << endl;
	outputFile << "Chocolate count: " << chocolate << endl;
	outputFile << "Strawberry count: " << strawberry << endl;
	outputFile << "Banana count: " << banana << endl;
	outputFile << "Oreo count: " << oreo << endl;

	inputFile.close();
	outputFile.close();
	return 0;
}