#include "OvernightPackage.h"

double OvernightPackage::calculateCost() {
	return (costPerOunce + extraCostPerOunce) * weight;
}
