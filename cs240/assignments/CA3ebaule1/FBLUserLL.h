//Guard????? Caused errors by circular ref
//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Import
#include "FBLUser.h"

using namespace std;

class FBLUserLL
{
public:
	class FBLUserLLNode
	{
	public:
		FBLUserLLNode();
		~FBLUserLLNode();
		FBLUser * data;
		FBLUserLLNode * next;
	};

	//Construction
	FBLUserLL();

	//Functionality
	void insert(FBLUser * newUser);
	bool findByUserID(string targetUserID);
	//bool manageByUserID(string userID);
	void remove(string userIDTBR);
	void printLL();

	//Destruction
	~FBLUserLL();

private:
	FBLUserLLNode * first;
		
};
