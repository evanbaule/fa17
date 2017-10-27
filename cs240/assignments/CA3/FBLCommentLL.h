//Header
#ifndef FBLCOMM_LL_H
#define FBLCOMM_LL_H

#include <stdlib.h>
#include <iostream>
#include <string>
#include "FBLUser.h"

using namespace std;
class FBLCommenLL
{
public:
	//Node class
	class FBLCommentLLNode
	{
	public:
		FBLCommentLLNode();
		string data;
		FBLCommentLLNode * next;
	};

	void sortaz();
	void sortza();


private:
	FBLCommentLLNode * first;
};

#endif