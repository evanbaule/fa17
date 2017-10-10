//Header
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
		~FBLUserLLNode();
		FBLUser * data;
		FBLUserLLNode * next;
	};
	
	FBLUserLL();
	~FBLUserLL();
	void insert(FBLUser * newUser);
	bool searchUserID(string targetUserID);
	void remove(string userIDTBR);
	void printLL();

private:
	FBLUserLLNode * first;
		
};