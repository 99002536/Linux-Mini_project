#include <iostream>
#include"pch.h"
#include <fstream>
#include<list>
using namespace std;
int sem_wait(sem_t** sem);//lock the function
void Pharmacy::billing()
{
	int choice, count = 0;
	int pin;
	std::string medicine_you_ordered;
	ifstream ip("medicine.txt");
	if (!ip.is_open()) std::cout << "ERROR: File Open" << '\n';
	string medicine;
	int i = 1560;
	string cost;
	//implementation of iterators
	std::list<std::string> listofmedicine;
	std::list<std::string> Cost;
	std::list<std::string>::iterator it;
	cout << "-----------List of medicines Availabe------------" << endl;
	while (ip.good())
	{

		std::getline(ip, medicine, ',');
		std::getline(ip, cost, ',');
		i++;

		std::cout << "Medicine_id: " << i << endl;
		std::cout << "Medicine_Name: " << medicine << endl;
		std::cout << "Medical_Cost: " << cost << "rupees" << endl;
		listofmedicine.push_front(medicine);
		listofmedicine.push_front(cost);
	}
	ip.close();
	std::cout << "search whether medicines are present in the stock" << std::endl;
	std::cin >> medicine_you_ordered;
	it = std::find(listofmedicine.begin(), listofmedicine.end(), medicine_you_ordered);
	if (it != listofmedicine.end())
	{
		std::cout << "yes it is present in the stock" << std::endl;
	}
	else
	{
		std::cout << "Sorry,medicine Does not exist" << std::endl;
		std::cout << "-----Thank You-----" << endl;
		exit(0);
	}
	int take;
	cout << "press 1 to buy the medicine 0 to exit" << endl;
	cin >> take;
	if (take == 1)
	{
		std::cout << "----------payment------------------" << std::endl << std::endl;
		std::cout << "-----------enter choice of payment-------------" << endl;
		std::cout << "press 1 for online payment" << endl;
		std::cout << "press 2 for cash on delivery" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "please swipe the credit card" << endl;
			cout << "enter pin" << endl;
			cin >> pin;
			while (pin != 0)
			{
				pin = pin / 10;
				count = count + 1;
			}
			if (count != 4)
			{
				cout << "re-enter your pin" << endl;
				break;
			}
			else
			{
				cout << "the amount to be paid is" << cost << endl;
			}
		case 2:
			cout << "Paid " << cost << " rupess by cash on delivery" << endl;
			cout << "Thank you" << endl;
			break;
		}
	}
	else
	{
		cout << "medicine not ordered" << endl;
		exit(0);
	}
	int sem_wait(sem_t** sem); //lock the semaphore
}
