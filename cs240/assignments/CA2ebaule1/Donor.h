/* -- Guard -- */
#ifndef DONOR_H
#define DONOR_H

/* -- References -- */
#include "string"
#include "stdlib.h"
#include "iostream"

using namespace std;

class Donor
{
public:
	Donor();
	void manageDonor(string property);
	void changePassword();
	void viewDonorDetails();
	void donate(float donationAmt);
	void printTotal();
	void logout();
	~Donor();

private:
	string lastName;
	string firstName;
	string userID;
	string password;
	int age;
	int streetNumber;
	string streetName;
	string town;
	string state;
	string zip;
	float totalDonated;
};

/* -- End Guard -- */
#endif