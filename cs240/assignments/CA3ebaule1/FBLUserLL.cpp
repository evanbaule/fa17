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
	/* Fuck prepending
	FBLUserLLNode * insNode = new FBLUserLLNode();
	insNode->data = newUser;
	if(first != nullptr){
		insNode->next = first;
		first = insNode;
		cout << "SUCCESS INSERT .. " << endl;
		return true;
	}

	cout << "FAILED INSERT .. " << endl;
	return false;
	*/

	//APPENDING LIST
	FBLUserLLNode * insertionPoint = first;
	if(first != nullptr){
		while(insertionPoint != nullptr){
			insertionPoint = insertionPoint->next;
		}
		FBLUserLLNode * insertionNode = new FBLUserLLNode();
		insertionNode->data = newUser; //TODO: new constructor that takes newUser as arg
		insertionPoint->next = insertionNode;
		return true;
	} else {
		first->data = newUser;
		return true;
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




