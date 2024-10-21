#pragma once
#include <iostream>
#include <string>
using namespace std;
class Package
{
protected:
	string senderName;
	string senderAddress;
	string senderCity;
	int senderZip;

	string receiverName;
	string receiverAddress;
	string receiverCity;
	int receiverZip;

	double weight;
	double const costPerOunce = 0.50;

public:
	Package(string& senderName, string& senderAddress,
		string& senderCity, int senderZip,
		string& receiverName, string& receiverAddress,
		string& receiverCity, int receiverZip,
		double weight) :

		senderName(senderName), senderAddress(senderAddress), senderCity(senderCity), senderZip(senderZip),
		receiverName(receiverName), receiverAddress(receiverAddress),
		receiverCity(receiverCity), receiverZip(receiverZip),
		weight(weight)
	{}

	virtual double calculateCost() = 0;
};


