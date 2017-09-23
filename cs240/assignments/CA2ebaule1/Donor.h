/* -- Guard -- */
#ifndef DONOR_H
#define DONOR_H

/* -- References -- */
#include "string"
#include "stdlib.h"
#include "iostream"


class Donor
{
public:
	Donor();
	void manageDonor(string property);
	void changePassword();
	void viewDonorDetails();
	void donate();
	void printTotal();
	~Donor();

private:
	std::string lastName;
	std::string firstName;
	std::string userID;
	std::string password;
	int age;
	int streetNumber;
	std::string streetName;
	std::string town;
	enum state{
		NY, PA, RI, NH, VT, MA, CT, ME
	}
	std::string zip;
	float totalDonated;
};

/* -- End Guard -- */
#endif