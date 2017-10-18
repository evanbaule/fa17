//Header
#ifndef USER_H
#define USER_H 
//References
#include <stdlib.h>
#include <iostream>
#include <string>

#include "FBLPostLL.h"

using namespace std;

class FBLUser
{
public:
	//Construction
	FBLUser();
	FBLUser(string userID, string password, string firstName, string lastName);

	//Functionality
	bool post(string content);
	void read();

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

	//Destruction
	~FBLUser();

private:
	string userID;
	string password;
	string lastName;
	string firstName;

	FBLPostLL * postList;

	//Friends
	//FBLUserLL * friendsList;
};

#endif