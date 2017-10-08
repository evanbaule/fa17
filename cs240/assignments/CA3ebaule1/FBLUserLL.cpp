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

bool FBLUserLL::findByUserID(string targetUserID){
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
	cout << "------------------------------------" << endl << "entering... remove() ... " << endl;
	if(first){
		FBLUserLLNode * curr = first;
		FBLUserLLNode * last = first->next;
		cout << "entering traversal... " << endl;
		while(curr != nullptr) {
			if(curr->data->getUserID() == userIDTBR){
				cout << "found user .. " << userIDTBR << " in node... " << endl;
				if(curr->next){

					cout << "skipping over.... " << endl;
					last->next = curr->next;

					cout << "deleting node..." << endl;
					delete curr;
				} else {
					last->next = nullptr;
					delete curr;
				}
			}
			cout << "feedback looping .... " << endl;
			curr = curr->next;
		}
	}else {
		cout << "List is empty" << endl;
		//change to bool and return false here
	}
}

void FBLUserLL::printLL(){
	FBLUserLLNode * curr = first;
	while(curr){
		curr->data->read();
		curr = curr->next;
	}	
}






