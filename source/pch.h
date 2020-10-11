
//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
//toget the details of the Patient or the Medicine Customer
#include <iostream>
#include <string.h>
using namespace std;
class Pharmacy {
private:
	std::string Patient_Name;
	int Patient_age;
	std::string Patient_blood_group;
	std::string Patient_address;
	int Patient_phone_number;
public:
	//Default Constructor Implemented
	Pharmacy();
	//Paramaterized Constructor Implemented
	Pharmacy(std::string, int, std::string, std::string, int);
	//Copy Constructor implemented
	Pharmacy(const Pharmacy& ref);
	std::string getPatient_name(std::string);
	int getPatient_age(int);
	std::string getPatient_blood_group(std::string);
	std::string getPatient_address(std::string);
	int getPatient_phone_number(int);
	void billing();
};
//billing
