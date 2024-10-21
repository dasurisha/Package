#include "TwoDayPackage.h"


double TwoDayPackage::calculateCost() {
	return weight * costPerOunce + flatFee;
}

