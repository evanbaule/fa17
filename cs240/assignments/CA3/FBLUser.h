//Header
#ifndef USER_H
#define USER_H 
//References
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

#include "FBLPostLL.h"

using namespace std;

class FBLUser
{
public:
	//Construction
	FBLUser();
	FBLUser(string userID, string password, string firstName, string lastName);

	//Functionality
	void read();

	void addFriend(FBLUser * newFriend);
	void printFriendsList();
	bool alreadyFriends(string userID);

	string getUserID();
	void setUserID(string newUserID);

	string getPassword();
	void setPassword(string newPassword);

	string getLastName();
	void setLastName(string newLastName);

	string getFirstName();
	void setFirstName(string newFirstName);

	void addPost(string content);
	void printPosts();
	FBLPostLL * getFeed();
	void printFeed();
	void readFeed();
	void removeRead();
	FBLPost * getRecentPost();

private:
	string userID;
	string password;
	string lastName;
	string firstName;

	FBLPostLL * myPosts;
	FBLPostLL * myFeed;
	FBLPostLL * myWall;
	vector<FBLUser*> friendsList;
};

#endif