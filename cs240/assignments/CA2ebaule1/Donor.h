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
	void manageDonor();
	void changePassword();
	void viewDonorDetails();
	void donate();
	void printTotal();

	void floatToDollarFormat(const float &input);
	/*--Validation--*/
	bool validateName(const string &input);
	bool validateUserID(const string &input);
	bool validatePassword(const string &newPass);
	bool validateAge(const int &input);	
	bool validateStreetNumber(const int &input);	
	bool validateStreetNameTown(const string &input);
	bool validateZip(const string &input);
	bool validateTotalDonated(const float &input);

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
	enum state{
		NY, PA, RI, NH, VT, MA, CT, ME
	};
	string zip;
	float totalDonated;
};

/* -- End Guard -- */
#endif