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

bool DonorDatabase::searchUserID(string userIDSearch){
	return true;
}

Donor * DonorDatabase::returnUserByID(string userIDSearch){
	Donor *retDonor = new Donor();
	for(int i = 0; i < max; i++){
		if(db[i].getUserID() == userIDSearch){
			retDonor = &db[i];
		}
	} return retDonor;
}

void DonorDatabase::addDonor(){
	Donor * buff = new Donor();
	buff->addPropertiesSequential();
	int insertIndex = 0;
	for(int i = 0; i < max; i++){
		if(db[i].getExists()){
			insertIndex++;
		}
	}

	if(insertIndex == max){
		cout << "List full... returning..." << endl;
	} else {
		db[insertIndex] = *buff;
	}

}

void DonorDatabase::writeDBFile(){
	string fileName;
	cout << "Enter a filename (ending with .txt): " << endl;
	cin >> fileName;

	ofstream outputFile;
	outputFile.open(fileName, ios::out);
	if(outputFile.is_open()){
		for(int i = 0; i < max; i++){
			outputFile << db[i].getUserID() << endl;
			outputFile << db[i].getPassword() << endl;
			outputFile << db[i].getLastName() << endl;
			outputFile << db[i].getFirstName() << endl;
			outputFile << db[i].getAge() << endl;
			outputFile << db[i].getStreetNumber() << endl;
			outputFile << db[i].getStreetName() << endl;
			outputFile << db[i].getTown() << endl;
			outputFile << db[i].getState() << endl;
			outputFile << db[i].getZip() << endl;
			outputFile << db[i].getTotalDonated() << endl;
		}
		outputFile.close();
	} else {
		cout << "Cannot override existing files." << endl;
	}

	cout << "Writing..." << endl << "Database File Written." << endl;
}


void DonorDatabase::readDBFile(string fileName){
	//I'm so sorry i should have just saved the length at the top of the db file
	int totalLines = 0;
	int totalDonors = totalLines/11;
	ifstream counterStream(fileName);
	if(counterStream.is_open()){
		int totalLines = 0;
		string buffer;
		for(int i = 0; getline(counterStream, buffer); i++){
			totalLines++;
		}
		counterStream.close();
	}

	cout << "Reading.." << endl;
	string inputBuffer;
	ifstream inputFile(fileName);
	if(inputFile.is_open()){
		for(int i = 0; i < max; i++){
			db[i].setExists(true);
			//Obj @i userID
			getline(inputFile, inputBuffer);
			
			db[i].setUserID(inputBuffer);
			//Obj @i userID
			getline(inputFile, inputBuffer);
			db[i].setPassword(inputBuffer);

			//Obj @i lastName
			getline(inputFile, inputBuffer);
			db[i].setLastName(inputBuffer);
			//Obj @i firstName
			getline(inputFile, inputBuffer);
			db[i].setFirstName(inputBuffer);
			//Obj @i age
			getline(inputFile, inputBuffer);
			db[i].setAge(stoi(inputBuffer));

			//Obj @i streetNumber
			getline(inputFile, inputBuffer);
			db[i].setStreetNumber(stoi(inputBuffer));
			//Obj @i streetName
			getline(inputFile, inputBuffer);
			db[i].setStreetName(inputBuffer);
			//Obj @i town
			getline(inputFile, inputBuffer);
			db[i].setTown(inputBuffer);
			//Obj @i state
			getline(inputFile, inputBuffer);
			db[i].setState(inputBuffer);

			//Obj @i zip
			getline(inputFile, inputBuffer);
			db[i].setZip(inputBuffer);

			//Obj @i totalDonated
			getline(inputFile, inputBuffer);
			db[i].setTotalDonated(stof(inputBuffer));
		}
	}
	inputFile.close();
	cout << "Database File Loaded." << endl;
}

//Format : 
// Total Donors: int this.size
// Total Amount Donated: float total
//
void DonorDatabase::printReport(){
	int counter = 0;
	for(int i = 0; i < max; i++){
		if(db[i].getExists()){
			counter++;
		}
	}
	cout << "Total: " << counter << " donors." << endl;
	for (int i = 0; i < counter; i++)
	{
		db[i].viewDonorDetails();
	}
}





