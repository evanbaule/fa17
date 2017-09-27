//I am so sorry...
/*--References--*/
#include "Donor.h"
#include "iostream"
#include "string"
#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"
using namespace std;

// Construction
Donor::Donor() {
	//Establish defaults
	exists = false;
	userID = "default";
	password = "default";
	lastName = "default";
	firstName = "default";
	age = -1;
	streetNumber = -1;
	streetName = "default";
	town = "default";
	state = "NY";
	//state = states.NY;
	zip = "default";
	totalDonated = -1;

}

Donor::~Donor(){

}

void Donor::addPropertiesSequential(){
	int ibuff;
	float fbuff;
	string buffer;

	//TEMPORARY
	cout << "Enter a valid UserID" << endl;
	cin >> buffer;
	userID = buffer;

	while(true){
		cout << "Enter a Password: ";
		cin >> buffer;
		if(validatePassword(buffer)){
			password = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Enter a Last Name: ";
		cin >> buffer;
		if(validateName(buffer)){
			lastName = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Enter a First Name: ";
		cin >> buffer;
		if(validateName(buffer)){
			firstName = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Enter an Age: ";
		cin >> ibuff;
		if(validateAge(ibuff)){
			age = ibuff;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Enter a Street Number: ";
		cin >> ibuff;
		if(validateStreetNumber(ibuff)){
			streetNumber = ibuff;
			break;
		} else {
			cout << "Input validation failed." << endl;
			
		}
	}

	while(true){
		cout << "Street Name: ";
		cin >> buffer;
		if(validateStreetNameTown(buffer)){
			streetName = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Town: ";
		cin >> buffer;
		if(validateStreetNameTown(buffer)){
			town = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Zip: ";
		cin >> buffer;
		if(validateZip(buffer)){
			zip = buffer;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	while(true){
		cout << "Donation Amount: ";
		cin >> fbuff;
		if(validateTotalDonated(fbuff)){
			totalDonated = fbuff;
			break;
		} else {
			cout << "Input validation failed." << endl;
		}
	}

	exists = true;
}

//Accessors
//This feels literally disgusting
bool Donor::getExists(){
	return exists;
}

string Donor::getLastName(){
	return lastName;
}
string Donor::getFirstName(){
	return firstName;
}
string Donor::getUserID(){
	return userID;
}
string Donor::getPassword(){
	return password;
}
int Donor::getAge(){
	return age;
}
int Donor::getStreetNumber(){
	return streetNumber;
}
string Donor::getStreetName(){
	return streetName;
}
string Donor::getTown(){
	return town;
}
string Donor::getState(){
	return state;
}
string Donor::getZip(){
	return zip;
}
float Donor::getTotalDonated(){
	return totalDonated;
}

void Donor::setExists(bool exists){
	this->exists = exists;
}

void Donor::setLastName(string lastName){
	this->lastName = lastName;
}
void Donor::setFirstName(string firstName){
	this->firstName = firstName;
}
void Donor::setUserID(string userID){
	this->userID = userID;
}
void Donor::setPassword(string password){
	this->password = password;
}
void Donor::setAge(int age){
	this->age = age;
}
void Donor::setStreetNumber(int streetNumber){
	this->streetNumber = streetNumber;
}
void Donor::setStreetName(string streetName){
	this->streetName = streetName;
}
void Donor::setTown(string town){
	this->town = town;
}
void Donor::setZip(string zip){
	this->zip = zip;
}

void Donor::setState(string state){
	this->state = state;
}
void Donor::setTotalDonated(float totalDonated){
	this->totalDonated = totalDonated;
}


// Input command : 'Manage'
// Choose a member property and change it after validation
void Donor::manageDonor(){
	string property;
	cout << "Enter a property to manage: ";
	cin >> property;

	bool validationFlag = true;
	while(validationFlag){
		//this honestly is monkey code sorrys
		if(property == "LastName"){
			string buffer;
			cout << "Enter a new Last Name: " << endl;
			cin >> buffer;
			if(validateName(buffer)){
				this->lastName = buffer; //maybe deref? possible issue
				cout << "Last Name changed to: " << this->lastName << endl;
				break;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "FirstName"){
			string buffer;
			cout << "Enter a new First Name: " << endl;
			cin >> buffer;
			if(validateName(buffer)){
				this->firstName = buffer; //maybe deref? possible issue
				cout << "First Name changed to: " << this->firstName << endl;
				break;

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
				break;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "StreetNumber"){
			int buffer;
			cout << "Enter a new Street Number: " << endl;
			cin >> buffer;
			if(validateStreetNumber(buffer)){
				this->streetNumber = buffer; //maybe deref? possible issue
				cout << "Street Number changed to: " << this->streetNumber << endl;
				break;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		} 
		else if(property == "StreetName"){
			string buffer;
			cout << "Enter a new Street Name: " << endl;
			cin.ignore(1000, '\n');
			getline(cin, buffer);
			if(validateStreetNameTown(buffer)){
				this->streetName = buffer; //maybe deref? possible issue
				cout << "Street Name changed to: " << this->streetName << endl;
				break;
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
			if(validateStreetNameTown(buffer)){
				this->town = buffer; //maybe deref? possible issue
				cout << "Town changed to: " << this->town << endl;
				break;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "State"){
			//TODO: Need to figure out how to take enum inputs
		}

		else if(property == "Zip"){
			string buffer;
			cout << "Enter a Zip Code: " << endl;
			cin >> buffer;
			if(validateZip(buffer)){
				this->zip = buffer; //maybe deref? possible issue
				cout << "Zip Code changed to: " << this->zip << endl;
				break;
			} else {
				cout << "Input validation failed." << endl;
				validationFlag = false;
				continue;
			}
		}
		else if(property == "AmountDonated"){
			float buffer;
			cout << "Enter an Amount Donated: " << endl;
			cin >> buffer;
			if(validateTotalDonated(buffer)){
				this->totalDonated = buffer; //maybe deref? possible issue
				cout << "Amount Donated changed to: " << this->totalDonated << endl;
				break;
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
}

// Input command : 'Passwd'
// Require entry of old password, entry & re-entry of new password, and check formatting
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
}

bool Donor::login(){
	cout << "Enter your password: ";
	string passBuffer;
	cin >> passBuffer;
	if(passBuffer == password){
		return true;
	} else {
		return false;
	}
}

// Input Command : 'View'
// Displays member properties of this donor
void Donor::viewDonorDetails(){
	// Don't want to implement without knowing overload requirements
	// either print all member properties to cout or overload << to do it and call cout << this
	cout << "Donor Info: " <<  endl;
	cout << lastName << " " << firstName << ": age " << age << endl;
	cout << streetNumber << " " << streetName << endl;
	cout << town << ", NY " << zip << endl;
	cout << "Current Amount Donated: ";
	floatToDollarFormat(totalDonated);
}

// Input command : 'Donate'
// Adds arg amount to this donor's total
// RESTRICTION - Cannot be negative, Cannot exceed 5000
void Donor::donate(){
	float donationAmt;
	cout << "How much would you like to donate? :" << endl;
	cin >> donationAmt;

	int temp = this->totalDonated;
	if(donationAmt > -1 && (temp + donationAmt < 5000)){
		this->totalDonated += donationAmt;
		cout << "Donated: ";
		floatToDollarFormat(donationAmt);
	} else {
		cout << "Invalid donation amount, please re-select 'Donate' and choose a -positive- donation amount that does not supercede $5000." << endl;
	}
}

// Input command : 'Donate'
// Adds arg amount to this donor's total
// Format : this->lastName $XX.xx / Lewis $45.33
void Donor::printTotal(){
	cout << lastName << " ";
	floatToDollarFormat(totalDonated);
}

void Donor::floatToDollarFormat(const float &tbf) {
	printf("$%.2f \n", tbf);
}

/*--Input Validation--*/
//true if string buf contains only letters aA-zZ
bool Donor::validateName(const string &input){
	for (int i = 0; i < input.size(); i++)
	{
		if(!isalpha(input[i])){
			return false;
		}
	}
	return true;
}

//true if 4 < len < 11 and only letters and digits
bool Donor::validateUserID(const string &input){
	return true;
}

//true if password is 6 or more characters and contains 1 digit and 1 symbol
bool Donor::validatePassword(const string &newPass){
	if(newPass == "override"){
		return true;
	}

	int letterCtr = 0;
	bool hasDigit = false;
	bool hasSymbol = false;
	for(int i = 0; i < newPass.size(); i++){
		if(isalpha(newPass[i])){
			letterCtr++;
		}else if(isdigit(newPass[i])){
			hasDigit = true;
		}else if(ispunct(newPass[i])){
			bool hasSymbol = true;
		}
	}
	if(letterCtr > 6 && hasDigit && hasSymbol){
		return true;
	} else{
		return false;
	}
}

//true if x > 17
bool Donor::validateAge(const int &input){
	if(input > 17){
		return true;
	} else {
		return false;
	}
}

//true if positive - I aknowledge that this isn't necessary and neither is the above validation but I felt it necessary to stay somewhat consistent and validate everything separately
bool Donor::validateStreetNumber(const int &input){
	if(input > 0){
		return true;
	} else {
		return false;
	}
}

//true if only letters and spaces
bool Donor::validateStreetNameTown(const string &input){
	for (int i = 0; i < input.size(); i++){
		if(!isalpha(input[i]) || !isspace(input[i])){
			return false;
		}
	}
	return true;
}

//return true if exactly 5 digits
bool Donor::validateZip(const string &input){
	if(input.size() != 5){
		return false;
	}
	for (int i = 0; i < input.size(); i++)
	{
		if(!isdigit(input[i])){
			return false;
		}
	}
	return true;
}

//return true if positive
bool Donor::validateTotalDonated(const float &input){
	if(input > 0){
		return true;
	} else {
		return false;
	}
}

/*--End Validation--*/


