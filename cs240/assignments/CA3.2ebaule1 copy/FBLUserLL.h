//Header
#ifndef FBLUSER_LL_H
#define FBLUSER_LL_H

#include <stdlib.h>
#include <iostream>
#include <string>
#include "FBLUser.h"

using namespace std;
class FBLUserLL
{
public:
	//Node class
	class FBLUserLLNode
	{
	public:
		FBLUserLLNode();
		FBLUser * data;
		FBLUserLLNode * next;
	};
	
	FBLUser * activeUser;

	FBLUserLL();
	FBLUser * returnUserWithID(string userID);
	bool login(string userID);
	void insert(FBLUser * newUser);
	bool searchUserID(string targetUserID);
	void remove(string userIDTBR);
	void printLL();

private:
	FBLUserLLNode * first;
};

#endif