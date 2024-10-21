#pragma once
#include "Package.h"
class OvernightPackage : public Package
{
private:
	double extraCostPerOunce = 5;
public:
	OvernightPackage(string& senderName, string& senderAddress,
		string& senderCity, int senderZip,
		string& receiverName, string& receiverAddress,
		string& receiverCity, int receiverZip,
		double weight) :
		Package(senderName, senderAddress, senderCity, senderZip,
			receiverName, receiverAddress, receiverCity, receiverZip,
			weight)
	{}

	double calculateCost() override;
};

