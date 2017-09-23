/*--References--*/
#include "DonorDatabase.h"
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
#include "Donor.h"
#include <fstream>

using namespace std;


// Construction
DonorDatabase::DonorDatabase() {

}

DonorDatabase::DonorDatabase(int maxLen){

}

void DonorDatabase::searchUserID(string userID){

}

void DonorDatabase::addDonor(const Donor &donorBuffer){

}

//Format : 
// Total length : int len
// -!!END_BOILER!!-
// Properties as listed in header foreach in this
// -!!BREAK!!-
// continue
void DonorDatabase::writeDBFile(){
	string fileName;
	cout << "Enter a file name to write to: " << endl;
	cin >> fileName;
	if(fileName.size() > 0){
		ofstream newFile;
		newFile.open(fileName);
		for (int i = 0; i < this.size(); ++i)
		{
			//write each member property to file
			//end with -!!BREAK!!- to separate
		}
		newFile.close();
	} else {
		cout << "Error: empty file name" << endl;
	}
	
}

void DonorDatabase::readDBFile(){
	//TODO: constructor for Donor containing all fields
	string fileName;
	cout << "Enter a file name to read from: " << endl;
	cin >> fileName;
	if(fileName.size() > 0){
		ifstream inFile;
		inFile.open(fileName);
		string buffer;
		//this is gonna get gross
	} else {
		cout << "Error: empty file name" << endl;
	}
}

//Format : 
// Total Donors: int this.size
// Total Amount Donated: float total
//
void DonorDatabase::printReport(){

}