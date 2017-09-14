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
	if(newPass.size() >= minSize){
		return true;
	}
	return false;
}

// Input Command : 'View'
// Displays member properties of this donor
// Format : 
void Donor::viewDonorDetails(){

};

// Input command : 'Donate'
// Adds arg amount to this donor's total
// RESTRICTION - Cannot be negative, Cannot exceed 5000
void Donor::donate(float donationAmt){
	int temp = this->totalDonated;
	if(donationAmt > -1 && temp += donationAmt < 5000){
		this->totalDonate += donationAmt;
		cout << "Donated: " << floatToDollarFormat(donationAmt) << endl;
	} else {
		cout << invalidInput << endl;
	}
};

// Input command : 'Donate'
// Adds arg amount to this donor's total
// Format : this->lastName $XX.xx / Lewis $45.33
void Donor::printTotal(){};

// Input Command : Logout
// Ends user session
// Resets active session flag to false
void Donor::logout(){
	//may not be necessary
};

void floatToDollarFormat(float tbf) {
	printf("$%.2f \n", tbf);
}

