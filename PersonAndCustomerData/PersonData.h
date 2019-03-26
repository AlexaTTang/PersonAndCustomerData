#pragma once
#ifndef PERSONDATA
#define PERSONDATA
#include <iostream>
#include <cstdio>
#include <string>

class PersonData
{
private:
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string city;
	int zip;
	int phone;
	//derived class CustomerData 
	//has access to these public 
	//functions
public:
	//Accessor functions
	std::string getLastName();
	std::string getFirstName();
	std::string getAddress();
	std::string getCity();
	int getZip();
	int getPhone();
	//Mutator functions
	void setLastName(std::string n);
	void setFirstName(std::string l);
	void setAddress(std::string a);
	void setCity(std::string c);
	void setZip(int z);
	void setPhone(int p);
	void printCustomerInfo();
};

//*********************
//Function declarations
//*********************


//ACCESSOR FUNCTIONS
std::string PersonData::getLastName()
{
	return lastName;
}
std::string PersonData::getFirstName()
{
	return firstName;
}
std::string PersonData::getAddress()
{
	return address;
}
std::string PersonData::getCity()
{
	return city;
}
int PersonData::getZip()
{
	return zip;
}
int PersonData::getPhone()
{
	return phone;
}
//MUTATOR FUNCTIONS
void PersonData::setLastName(std::string n)
{
	lastName = n;
}
void PersonData::setFirstName(std::string l)
{
	firstName = l;
}
void PersonData::setAddress(std::string a)
{
	address = a;
}
void PersonData::setCity(std::string c )
{
	city = c;
}
void PersonData::setZip(int z)
{
	zip = z;
}
void PersonData::setPhone(int p)
{
	phone = p;
}
void PersonData::printCustomerInfo()
{
	std::cout << lastName << ", " << firstName << "\n"
			  << "Phone: " << phone << "\n"
			  << "Address: " << address << std::endl;
}

#endif 

