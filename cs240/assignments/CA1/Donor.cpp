/*--References--*/
#include "Donor.h"
#include "iostream"
#include "string"
#include "stdlib.h"
using namespace std;

Donor::Donor(float initAmt){
	this->donorLastName = "Baule";
	this->donorFirstName = "Evan";
	this->donorAge = 20;
	this->addrStreetNum = 124;
	this->addrStreetName = "Canterbury Drive";
	this->addrTown = "Camillus";
	this->addrZipCode = "13031";
	this->donationAmount = initAmt;


}

void Donor::overwriteDonor(){
	cout << "lastName" << endl;
	cin >> donorLastName;

	cout << "firstName" << endl;
	cin >> donorFirstName;

	cout << "age" << endl;
	cin >> donorAge;
}

void Donor::donate(float donAmt){
	this->donationAmount += donAmt;
}


void Donor::printFormattedDonorDetails(){
	cout << "deets" << endl;
}

void Donor::printFormattedTotal(){
	cout << "$" << this->donationAmount << endl;
}
