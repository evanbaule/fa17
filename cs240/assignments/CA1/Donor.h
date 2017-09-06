/*--Guard--*/
#ifndef DONOR_H
#define DONOR_H

/*--References--*/
#include "string"
#include "stdlib.h"
#include "iostream"

using namespace std;

class Donor {
public:
	Donor();
	void addDonor(); 
	void overwriteDonor();
	void donate(float donAmt);
	void printFormattedDonorDetails();
	void printFormattedTotal();
	void printFormattedDollars();

private:
	string donorLastName;
	string donorFirstName;
	int donorAge;
	int addrStreetNum;
	string addrStreetName;
	string addrTown;
	string addrZipCode;
	float donationAmount;
};

#endif








