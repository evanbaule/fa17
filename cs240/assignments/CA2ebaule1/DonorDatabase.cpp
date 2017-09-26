/*--References--*/
#include "DonorDatabase.h"
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
#include "Donor.h"
#include "fstream"

using namespace std;

// Construction

DonorDatabase::DonorDatabase(int maxLen){
	max = maxLen;
	Donor * evan = new Donor();
	Donor * cris = new Donor();
	db = new Donor[max];
	db[0] = *evan;
	db[1] = *cris;
}


bool DonorDatabase::searchUserID(string userIDSearch){
	return true;
}

Donor * DonorDatabase::returnUserByID(string userIDSearch){
	return new Donor();
}

void DonorDatabase::addDonor(){
	Donor * buff = new Donor();
	buff->addPropertiesSequential();
}


//Format : 
// Total length : int len
// -!!END_BOILER!!-
// Properties as listed in header foreach in this
// -!!BREAK!!-
// continue
void DonorDatabase::writeDBFile(){
	string fileName;
	cout << "Enter a filename: " << endl;
	cin >> fileName;

	ofstream outputFile;
	outputFile.open("test.txt");
	if(outputFile.is_open()){
		for(int i = 0; i < max; i++){
			if(this->db[i].getAge() == -1){
				break; //reached end
			}
			outputFile << this->db[i].getLastName() << endl;
			outputFile << this->db[i].getFirstName() << endl;
			outputFile << this->db[i].getAge() << endl;
			outputFile << this->db[i].getStreetNumber() << endl;
			outputFile << this->db[i].getStreetName() << endl;
			outputFile << this->db[i].getTown() << endl;
			outputFile << this->db[i].getState() << endl;
			outputFile << this->db[i].getZip() << endl;
			outputFile << this->db[i].getTotalDonated() << endl;
		}
		outputFile.close();
	} else {
		cout << "Cannot override existing files." << endl;
	}
}

void DonorDatabase::readDBFile(){
	cout << "Reading.." << endl;
}

//Format : 
// Total Donors: int this.size
// Total Amount Donated: float total
//
void DonorDatabase::printReport(){
	int counter = 0;
	
}