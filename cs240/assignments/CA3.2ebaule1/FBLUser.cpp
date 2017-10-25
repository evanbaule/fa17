//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header import
#include "FBLUser.h"
#include "FBLPost.h"

using namespace std;

//Construction
FBLUser::FBLUser(){
	userID = "";
	password = "";
	lastName = "";
	firstName = "";
	myPosts = new FBLPostLL();
	myFeed = new FBLPostLL();
	myWall = new FBLPostLL();
}

FBLUser::FBLUser( string userID, string password, string firstName, string lastName ){
	this->userID = userID;
	this->password = password;
	this->firstName = firstName;
	this->lastName = lastName;
	myPosts = new FBLPostLL(); //MYWALL
	myFeed = new FBLPostLL();
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
	string postNameBuffer = firstName + " " + lastName;
	FBLPost * newPost = new FBLPost(content, postNameBuffer);
	myPosts->insert(newPost);
	myFeed->insert(newPost);
	for (unsigned int i = 0; i < friendsList.size(); i++)
	{
		friendsList.at(i)->getFeed()->insert(newPost);
		//cout << "Added post " << newPost->getContent() << " to list of " << friendsList.at(i)->getUserID() << endl;
	}
}

FBLPostLL * FBLUser::getFeed(){
	return myFeed;
}

void FBLUser::printFeed(){
	cout << "YOUR FEED:" << endl << "-------------------------------------------------------" << endl;
	myFeed->printLLNoDelete();
	cout << "-------------------------------------------------------" << endl;
}

void FBLUser::readFeed(){
	cout << "NEWEST POST:" << endl << "-------------------------------------------------------" << endl;
	myFeed->printLLFirstWithDelete();
	cout << "-------------------------------------------------------" << endl;
}

void FBLUser::printPosts(){
	cout << firstName << " " << lastName << "'s WALL':" << endl << "-------------------------------------------------------" << endl;
	myPosts->printLLNoDelete();
	cout << "-------------------------------------------------------" << endl;
}

bool FBLUser::alreadyFriends(string userID){
	for (unsigned int i = 0; i < friendsList.size(); ++i)
	{
		if(friendsList.at(i)->getUserID() == userID){
			return true;
		}
	}
	return false;
}

void FBLUser::addFriend(FBLUser * newFriend){
	friendsList.push_back(newFriend);
}

void FBLUser::printFriendsList(){
	cout << "YOUR FRIENDS LIST:" << endl << "-------------------------------------------------------" << endl;
	for (unsigned int i = 0; i < friendsList.size(); ++i)
	{
		cout << "|" << "\t" << "- " << friendsList.at(i)->getFirstName() << " " << friendsList.at(i)->getLastName() << endl;
	}
	cout << "-------------------------------------------------------" << endl;
}



