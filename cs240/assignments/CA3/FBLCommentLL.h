//Header
#ifndef FBLCOMM_LL_H
#define FBLCOMM_LL_H

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
class FBLCommentLL
{
public:
	//Node class
	class FBLCommentLLNode
	{
	public:
		FBLCommentLLNode();
		void printNodeData();
		string data;
		FBLCommentLLNode * prev;
		FBLCommentLLNode * next;
	};

	FBLCommentLL();
	void printAllUL();
	void printAllBackwards();
	void insertComment(string body);
	void readaz();
	void readza();

private:
	FBLCommentLLNode * first;
	FBLCommentLLNode * last;
};

#endif