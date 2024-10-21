#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

int main() {
	setlocale(0, "ru");
	string senderName;
	cout << "Введите имя отправителя: "; cin >> senderName;
	string senderAddress;
	cout << "Введите адрес отправителя: "; cin >> senderAddress;
	string senderCity;
	cout << "Введите город отправителя: "; cin >> senderCity;

	int senderZip;
	cout << "Введите почтовый индекс отправителя: "; cin >> senderZip;
	while (senderZip <= 0) {
		cout << "Почтовый индекс отправителя должен быть положительным." << endl;
		cout << "Введите корректный почтовый индекс отправителя: "; cin >> senderZip;
	}

	cout << "-------------------------------" << endl;
	string receiverName;
	cout << "Введите имя получателя: "; cin >> receiverName;
	string receiverAddress;
	cout << "Введите адрес получателя: "; cin >> receiverAddress;
	string receiverCity;
	cout << "Введите город получателя: "; cin >> receiverCity;

	int receiverZip;
	cout << "Введите почтовый индекс получателя: "; cin >> receiverZip;
	while (receiverZip <= 0) {
		cout << "Почтовый индекс получателя должен быть положительным." << endl;
		cout << "Введите корректный почтовый индекс получателя: "; cin >> receiverZip;
	}

	double weight{};
	cout << "Введите вес посылки: "; cin >> weight;
	while (weight <= 0) {
		cout << "Вес должен быть положительным." << endl;
		cout << "Введите корректный вес посылки: "; cin >> weight;
	}


	/*Package package1(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "Стоимость доставки посылки без учёта дороги: $" << package1.calculateCost() << std::endl;*/

	/*TwoDayPackage package2(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "Стоимость доставки посылки за 2 дня: $" << package2.calculateCost() << std::endl;*/

	OvernightPackage package3(senderName, senderAddress, senderCity, senderZip, receiverName, receiverAddress, receiverCity, receiverZip, weight);
	cout << "Стоимость ночной доставки посылки с учётом доп платы : $" << package3.calculateCost() << std::endl;

}
