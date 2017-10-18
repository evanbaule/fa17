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
		~FBLPostLLNode();
		FBLPost * data;
		FBLPostLLNode * next;
		
	};

	FBLPostLL();
	~FBLPostLL();
	
	void insert(FBLPost * newPost);
	void printLL();
	
private:
	FBLPostLLNode * first;

};

#endif