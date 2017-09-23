/*--References--*/
#include "Donor.h"
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

// Construction
Donor::Donor() {

}

// Input command : 'Manage'
// Choose a member property 
void Donor::manageDonor(string property){
	bool validationFlag = true; // set false if a validation fails, add as condition to loop
	while(validationFlag){
		//this is all wrong i wrote 150 lines of actual monkey code
		if(property == "Last Name"){
			string buffer;
			cout << "Enter a new Last Name: " << endl;
			cin >> buffer;
			if(validateLastName(buffer)){
				this->lastName = buffer; //maybe deref? possible issue
				cout << "Last Name changed to: " << this->lastName << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "First Name"){
			string buffer;
			cout << "Enter a new First Name: " << endl;
			cin >> buffer;
			if(validateFirstName(buffer)){
				this->firstName = buffer; //maybe deref? possible issue
				cout << "First Name changed to: " << this->firstName << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "Age"){
			int buffer;
			cout << "Enter a new Age: " << endl;
			cin >> buffer;
			if(validateAge(buffer)){
				this->age = buffer; //maybe deref? possible issue
				cout << "Age changed to: " << this->age << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "Street Number"){
			int buffer;
			cout << "Enter a new Street Number: " << endl;
			cin >> buffer;
			if(validateStreetNumber(buffer)){
				this->streetNumber = buffer; //maybe deref? possible issue
				cout << "Street Number changed to: " << this->streetNumber << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "Street Name"){
			string buffer;
			cout << "Enter a new Street Name: " << endl;
			cin >> buffer;
			if(validateStreetName(buffer)){
				this->streetName = buffer; //maybe deref? possible issue
				cout << "Street Name changed to: " << this->streetName << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "Town"){
			string buffer;
			cout << "Enter a new Town: " << endl;
			cin >> buffer;
			if(validateTown(buffer)){
				this->town = buffer; //maybe deref? possible issue
				cout << "Town changed to: " << this->town << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "State"){
			//TODO: Need to figure out how to take enum inputs
		}

		else if(property == "Zip Code"){
			string buffer;
			cout << "Enter a Zip Code: " << endl;
			cin >> buffer;
			if(validateZip(buffer)){
				this->zip = buffer; //maybe deref? possible issue
				cout << "Zip Code changed to: " << this->zip << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "Amount Donated"){
			float buffer;
			cout << "Enter an Amount Donated: " << endl;
			cin >> buffer;
			if(validateTotalDonated(buffer)){
				this->totalDonated = buffer; //maybe deref? possible issue
				cout << "Amount Donated changed to: " << this->totalDonated << endl;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} else {
			cout << "You've entered an invalid property name. Please re-select 'Manage' and choose from: Last Name, First Name, Age, Street Number, Street Name, Town, State, Zip Code, Amount Donated." << endl;
			validationFlag = false;
			continue;
		}
	}
	return;
};

// Input command : 'Passwd'
// Changes password of this donor
// Require entry of old password, entry & re-entry of new password, and check formatting
// RESTRICTION - len 6, 1 digit 1 misc char (!@#$%^ etc.)
void Donor::changePassword(){
	string pw;
	string buffer;

	cout << "Please enter your current password : " << endl;
	cin >> pw;
	if(pw == this->password){
		cout << "Please enter your new password : (remember it must be greater than 6 characters and contain 1 digit & 1 misc char" << endl;
		cin >> buffer;
		if(validatePassword(buffer)){
			cout << "Please confirm your new password: " << endl;
			string buffer2;
			cin >> buffer2;
			if(buffer2 == buffer){
				this->password = buffer;
			}
		}
	}
};

bool validatePassword(string newPass){
	int minSize = 6;
	if(newPass.size() >= minSize){ //this only returns bytes
		return true;
	}
	return false;
}

// Input Command : 'View'
// Displays member properties of this donor
// Format : 
void Donor::viewDonorDetails(){
	// Don't want to implement without knowing overload requirements
	// either print all member properties to cout or overload << to do it and call cout << this
};

// Input command : 'Donate'
// Adds arg amount to this donor's total
// RESTRICTION - Cannot be negative, Cannot exceed 5000
void Donor::donate(){
	float donationAmt;
	cout << "How much would you like to donate? :" << endl;
	cin >> donationAmt;

	int temp = this->totalDonated;
	if(donationAmt > -1 && temp += donationAmt < 5000){
		this->totalDonate += donationAmt;
		cout << "Donated: " << floatToDollarFormat(donationAmt) << endl;
	} else {
		cout << "Invalid donation amount, please re-select 'Donate' and choose a -positive- donation amount that does not supercede $5000." << endl;
	}
};

// Input command : 'Donate'
// Adds arg amount to this donor's total
// Format : this->lastName $XX.xx / Lewis $45.33
void Donor::printTotal(){};

void floatToDollarFormat(float tbf) {
	printf("$%.2f \n", tbf);
}

