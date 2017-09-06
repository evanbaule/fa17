/*--References--*/
#include "Donor.h"
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

Donor::Donor(){
	this->donorLastName = "";
	this->donorFirstName = "";
	this->donorAge = -1;
	this->addrStreetNum = 0 ;
	this->addrStreetName = "";
	this->addrTown = ", NY";
	this->addrZipCode = "xxxxx";
	this->donationAmount = 0.00;


}

void Donor::addDonor() {

	cout << "Last Name: ";
	cin >> donorLastName;

	cout << "First Name: ";
	cin >> donorFirstName;

	cout << "Age: ";
	cin >> donorAge;

	cout << "Street Name: ";
	cin >> addrStreetName;

	cout << "House Number: ";
	cin >> addrStreetNum;

	cout << "Town: ";
	cin >> addrTown;

	cout << "Zip Code:  ";
	cin >> addrZipCode;

}

void Donor::overwriteDonor(){

	cout << "Last Name: ";
	cin >> donorLastName;

	cout << "First Name: ";
	cin >> donorFirstName;

	cout << "Age: ";
	cin >> donorAge;

	cout << "Street Name: ";
	cin >> addrStreetName;

	cout << "House Number: ";
	cin >> addrStreetNum;

	cout << "Town: ";
	cin >> addrTown;

	cout << "Zip Code:  ";
	cin >> addrZipCode;

}

void Donor::donate(float donAmt){
	this->donationAmount += donAmt;
}

void Donor:: printFormattedDollars(){
	printf("$%.2f \n", donationAmount);
}

void Donor::printFormattedDonorDetails(){
	cout << "Donor Info: " <<  endl;
	cout << donorLastName << " " << donorFirstName << ": age " << donorAge << endl;
	cout << addrStreetNum << " " << addrStreetName << endl;
	cout << addrTown << " " << addrZipCode << endl;
	cout << "Current Amount Donated: ";
	printFormattedDollars();
}

void Donor::printFormattedTotal(){
	cout << "Total: ";
	printFormattedDollars();
}
