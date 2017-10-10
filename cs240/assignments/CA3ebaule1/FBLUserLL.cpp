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

FBLUserLL::FBLUserLLNode::~FBLUserLLNode(){
	
}

void FBLUserLL::insert(FBLUser * newUser){
	//APPENDING not PREPENDING rip O(1) time
	FBLUserLLNode * insertionPoint = first;
	FBLUserLLNode * newNode = new FBLUserLLNode();
	newNode->data = newUser;
	if(first == nullptr){
		first = newNode;
	} else {
		while(insertionPoint->next){
			insertionPoint = insertionPoint->next;
		}
		insertionPoint->next = newNode;
	}
}

bool FBLUserLL::searchUserID(string targetUserID){
	FBLUserLLNode * curr = first;
	while(curr){
		if(curr->data->getUserID() == targetUserID){
			return true;
		}
		curr = curr->next;
	}
	return false;
}

void FBLUserLL::remove(string userIDTBR){
	if(first){
		FBLUserLLNode * curr = first;
		FBLUserLLNode * last = first->next;
		while(curr != nullptr) {
			if(curr->data->getUserID() == userIDTBR){
				if(curr->next){
					last->next = curr->next;
					delete curr;
				} else {
					last->next = nullptr;
					delete curr;
				}
			}
			curr = curr->next;
		}
	}else {
		cout << "List is empty" << endl;
	}
}

void FBLUserLL::printLL(){
	FBLUserLLNode * curr = first;
	while(curr){
		curr->data->read();
		curr = curr->next;
	}	
}






