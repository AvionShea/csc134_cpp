#pragma once
#include <string>

//Created namespace
namespace icecream {
	extern int vanilla;
	extern int chocolate;
	extern int strawberry;
	extern int banana;
	extern int oreo;

	//rating enum declaration
	enum rating {
		EXCELLENT,
		GOOD,
		OK,
		NOT_GOOD,
		BAD
	};

	//flavor enum declaration
	enum flavors {
		VANILLA,
		CHOCOLATE,
		STRAWBERRY,
		BANANA,
		OREO
	};

	//function declarations
	rating getRating(double vScore, double cScore, double
		sScore, double bScore, double oScore);

	flavors getFavoriteFlavor(double vscore, double cscore, double sscore, double bscore, double oscore);

	void incrementFavoriteCounter(flavors favorite);

	std::string convertRateToMessage(rating rate, flavors favFlavor);
}