//Header
#ifndef POST_LL_H
#define POST_LL_H 

#include <stdlib.h>
#include <iostream>
#include <string>

#include "FBLPost.h"

using namespace std;
class FBLPostLL
{
public:
	//Node class
	class FBLPostLLNode
	{
	public:
		FBLPostLLNode();
		FBLPost * data;
		FBLPostLLNode * next;
		
	};

	FBLPostLL();
	void insert(FBLPost * newPost);
	void printLLWithDelete();
	void printLLFirstWithDelete();
	void printLLNoDelete();
	void removeReadPost();
	FBLPost * returnRecentPost();
	
private:
	FBLPostLLNode * first;
};

#endif