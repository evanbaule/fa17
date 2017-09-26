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
	db = new Donor[max];
}

/*
bool DonorDatabase::searchUserID(string userIDSearch){
	int i;
	for (i = 0; i < max; i++)
	{
		if(this->db[i].getUserID() == userIDSearch){
			return true;
		}
	}
	cout << "A user with that UserID does not exist." << endl;
	return false;
}

Donor * DonorDatabase::returnUserByID(string userIDSearch){
	int i;
	for(i = 0; i < max; i++){
		if(this->db[i].getUserID() == userIDSearch) {
			return *this->db[i];
		}
	}
}

void DonorDatabase::addDonor(const Donor &donorBuffer){
	if(this->db.size() < max){
		Donor * dbuffer = new Donor();
		this->db[this->db.size()] = *dbuffer;

		//check for overlapping IDs
	}
}
*/

//Format : 
// Total length : int len
// -!!END_BOILER!!-
// Properties as listed in header foreach in this
// -!!BREAK!!-
// continue
void DonorDatabase::writeDBFile(){
	string fileName;
	cout << "Enter a filename: ";
	cin >> fileName;

	ofsteam outputFile (fileName, ios::out);
	outputFile.open();
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
	
}

//Format : 
// Total Donors: int this.size
// Total Amount Donated: float total
//
void DonorDatabase::printReport(){

}