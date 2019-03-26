#pragma once
#ifndef CUSTOMERDATA
#define CUSTOMERDATA
//#include <iostream>
class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	//accessor functions
	int getCustomerNumber();
	bool getMailingList();
	//mutator functions
	void setCustomerNumber(int c);
	void setMailingList(bool m);
};

//*********************
//Function declarations
//*********************

//ACCESSOR FUNCTIONS
int CustomerData::getCustomerNumber()
{
	return customerNumber;
}
bool CustomerData::getMailingList()
{
	return mailingList;
}
//MUTATOR FUNCTIONS
void CustomerData::setCustomerNumber(int c)
{
	customerNumber = c;
}
void CustomerData::setMailingList(bool m)
{
	mailingList = m;
}
#endif
