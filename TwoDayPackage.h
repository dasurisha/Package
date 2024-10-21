#pragma once
#include "Package.h"

class TwoDayPackage : public Package
{
private:
	double flatFee = 200;
public:
	TwoDayPackage(string& senderName, string& senderAddress,
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


