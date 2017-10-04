//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "FBLUserLL.h"
#include "FBLUser.h"


using namespace std;

FBLUserLL::FBLUserLL(){
	first = nullptr;
}

FBLUserLL::FBLUserLLNode::FBLUserLLNode(){
	data = nullptr;
	next = nullptr;
}

bool FBLUserLL::insert(FBLUser * newUser){
	//PREPENDING LIST WITH newUser
	FBLUserLLNode * insNode = new FBLUserLLNode();
	insNode->data = newUser;
	if(first){
		insNode->next = first;
		first = insNode;
	}
	return false;
}

bool FBLUserLL::findByUserID(string targetUserID){
	return true;
}

bool FBLUserLL::remove(string userIDTBR){
	return true;
}

void FBLUserLL::printLL(){
	FBLUserLLNode * curr = first;
	while(curr->next){
		curr->data->read();
		curr = curr->next;
	}
}




