//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header import
#include "FBLUser.h"

using namespace std;

//Construction
FBLUser::FBLUser(){
	userID = "defUID";
	password = "defPass";
	lastName = "defLast";
	firstName = "defFirst";
	postList = new FBLPostLL();
}

bool FBLUser::post(string content){
	return true;
}

void FBLUser::read(){
	cout << "-- PRINTING USER DETAILS --" << endl;
	cout << "User ID: " << userID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Passwod: " << password << endl << endl;
}

string FBLUser::getUserID(){
	return userID;
}
void FBLUser::setUserID(string newUserID){
	userID = newUserID;
}

string FBLUser::getPassword(){
	return password;
}
void FBLUser::setPassword(string newPassword){
	password = newPassword;
}

string FBLUser::getLastName(){
	return lastName;
}
void FBLUser::setLastName(string newLastName){
	lastName = newLastName;
}

string FBLUser::getFirstName(){
	return firstName;
}
void FBLUser::setFirstName(string newFirstName){
	firstName = newFirstName;
}


//Destruction
FBLUser::~FBLUser(){

}

