//toget the details of the Patient or the Medicine Customer
#include <iostream>
#include "pch.h"
#include <string.h>
#include <thread>
#include <semaphore.h>
#include <errno.h>
using namespace std;
sem_t *sem;
int sem_wait(sem_t** sem);//lock the function
Pharmacy::Pharmacy():
	Patient_Name(""), Patient_age(0), Patient_blood_group(""), Patient_address(""), Patient_phone_number(0) {
}
int sem_post(sem_t** sem);//unlock the function

Pharmacy::Pharmacy(string Patient_Name, int patient_age, string Patient_blood_group, string Patient_address, int patient_phone_number) :
	Patient_Name(Patient_Name), Patient_age(Patient_age), Patient_blood_group(Patient_blood_group), Patient_address(Patient_address), Patient_phone_number(Patient_phone_number) {
}
int sem_wait(sem_t** sem);//lock the function
Pharmacy::Pharmacy(const Pharmacy& ref) :
	Patient_Name(ref.Patient_Name), Patient_age(ref.Patient_age), Patient_blood_group(ref.Patient_blood_group), Patient_address(ref.Patient_address), Patient_phone_number(ref.Patient_phone_number) {
}
int sem_post(sem_t** sem);//unlock the function
int sem_wait(sem_t** sem);//lock the function
std::string Pharmacy::getPatient_name(std::string Patient_name)
{
	
	//std::cout<<"The Patient_name Name is:"<<Patient_Name<<endl;
	return Patient_Name;
	int sem_post(sem_t** sem);//unlock the function
	
}
int sem_wait(sem_t** sem);//lock the function
int Pharmacy::getPatient_age(int Patient_age)
{
	
	//std::cout<<"The Patient_age is:"<<Patient_age<<endl;
	return Patient_age;
	int sem_post(sem_t** sem);//unlock the function
}
std::string Pharmacy::getPatient_blood_group(std::string Patient_blood_group)
{
	
	//std::cout<<"The Patient_blood group is:"<<Patient_blood_group<<endl;
	return Patient_blood_group;
	int sem_post(sem_t** sem);//unlock the function
}
int sem_wait(sem_t** sem);//lock the function
std::string Pharmacy::getPatient_address(std::string Patient_address)
{
	
	//std::cout<<"The Patient_address is:"<<Patient_address<<endl;
	return Patient_address;
	int sem_post(sem_t** sem);//unlock the function
}
int sem_wait(sem_t** sem);//lock the function
int Pharmacy::getPatient_phone_number(int Patient_phone_number)
{
	
	//std::cout<<"The Patient_Phone_number is:"<<Patient_Phone_number<<endl;
	return Patient_phone_number;
	int sem_post(sem_t** sem);//unlock the function
}
