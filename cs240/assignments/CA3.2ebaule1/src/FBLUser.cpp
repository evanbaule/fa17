//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header import
#include "../ncl/FBLUser.h"
#include "../ncl/FBLPost.h"

using namespace std;

//Construction
FBLUser::FBLUser(){
	userID = "";
	password = "";
	lastName = "";
	firstName = "";
	postList = new FBLPostLL();
	friendsList = new vector<FBLUser>(1);
}

FBLUser::FBLUser( string userID, string password, string firstName, string lastName ){
	this->userID = userID;
	this->password = password;
	this->firstName = firstName;
	this->lastName = lastName;
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

void FBLUser::addPost(string content){
	FBLPost * newPost = new FBLPost(content, userID);
	postList->insert(newPost);

}

void FBLUser::printPosts(){
	postList->printLL();
}

void FBLUser::addFriend(FBLUser newFriend){
	if(friendsList->size() == 1){
		friendsList->at(1) = newFriend;
	}else {
		friendsList->push_back(newFriend);
	}
}

void FBLUser::printFriendsList(){
	for (int i = 0; i < friendsList->size(); ++i)
	{
		cout << friendsList->at(i).getUserID() << endl;
	}
}

//Destruction
FBLUser::~FBLUser(){

}

