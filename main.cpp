#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

int main() {
	setlocale(0, "ru");
	string senderName;
	cout << "������� ��� �����������: "; cin >> senderName;
	string senderAddress;
	cout << "������� ����� �����������: "; cin >> senderAddress;
	string senderCity;
	cout << "������� ����� �����������: "; cin >> senderCity;

	int senderZip;
	cout << "������� �������� ������ �����������: "; cin >> senderZip;
	while (senderZip <= 0) {
		cout << "�������� ������ ����������� ������ ���� �������������." << endl;
		cout << "������� ���������� �������� ������ �����������: "; cin >> senderZip;
	}

	cout << "-------------------------------" << endl;
	string receiverName;
	cout << "������� ��� ����������: "; cin >> receiverName;
	string receiverAddress;
	cout << "������� ����� ����������: "; cin >> receiverAddress;
	string receiverCity;
	cout << "������� ����� ����������: "; cin >> receiverCity;

	int receiverZip;
	cout << "������� �������� ������ ����������: "; cin >> receiverZip;
	while (receiverZip <= 0) {
		cout << "�������� ������ ���������� ������ ���� �������������." << endl;
		cout << "������� ���������� �������� ������ ����������: "; cin >> receiverZip;
	}

	double weight{};
	cout << "������� ��� �������: "; cin >> weight;
	while (weight <= 0) {
		cout << "��� ������ ���� �������������." << endl;
		cout << "������� ���������� ��� �������: "; cin >> weight;
	}


	/*Package package1(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "��������� �������� ������� ��� ����� ������: $" << package1.calculateCost() << std::endl;*/

	/*TwoDayPackage package2(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "��������� �������� ������� �� 2 ���: $" << package2.calculateCost() << std::endl;*/

	OvernightPackage package3(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "��������� ������ �������� ������� � ������ ��� ����� : $" << package3.calculateCost() << std::endl;

}
