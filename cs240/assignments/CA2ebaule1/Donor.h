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
	bool login();
	void addPropertiesSequential();
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

	/*--Access--*/
	//Get 
	bool getExists();
	string getLastName();
	string getFirstName();
	string getUserID();
	string getPassword();
	int getAge();
	int getStreetNumber();
	string getStreetName();
	string getTown();
	string getState();
	string getZip();
	float getTotalDonated();

	//Set
	void setExists(bool exists);
	void setLastName(string lastName);
	void setFirstName(string firstName);
	void setUserID(string userID);
	void setPassword(string password);
	void setAge(int age);
	void setStreetNumber(int streetNumber);
	void setStreetName(string streetName);
	void setTown(string town);
	void setState(string state);
	void setZip(string zip);
	void setTotalDonated(float totalDonated);

	/*--Destruction--*/
	~Donor();



private:
	bool exists;
	string lastName;
	string firstName;
	string userID;
	string password;
	int age;
	int streetNumber;
	string streetName;
	string town;
	string state;
	//enum states{
	//	NY, PA, RI, NH, VT, MA, CT, ME
	//};
	string zip;
	float totalDonated;
};

/* -- End Guard -- */
#endif