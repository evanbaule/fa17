/*--References--*/
#include "DonorClass.h"
#include "iostream"
#include "string"
#include "stdlib.h"
using namespace std;

DonorClass::DonorClass(float initAmt){
	this->donorLastName = "Baule";
	this->donorFirstName = "Evan";
	this->donorAge = 20;
	this->addrStreetNum = 124;
	this->addrStreetName = "Canterbury Drive";
	this->addrTown = "Camillus";
	this->addrZipCode = "13031";
	this->donationAmount = initAmt;


}

void DonorClass::overwriteDonor(){
	cout << "lastName" << endl;
	cin >> donorLastName;

	cout << "firstName" << endl;
	cin >> donorFirstName;

	cout << "age" << endl;
	cin >> donorAge;
}

void DonorClass::donate(float donAmt){
	this->donationAmount += donAmt;
}


void DonorClass::printFormattedDonorDetails(){
	cout << "deets" << endl;
}

void DonorClass::printFormattedTotal(){
	cout << "$" << this->donationAmount << endl;
}