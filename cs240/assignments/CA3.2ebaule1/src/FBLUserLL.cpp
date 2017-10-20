//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "../ncl/FBLUserLL.h"
#include "../ncl/FBLUser.h"

using namespace std;

FBLUserLL::FBLUserLL(){
	first = nullptr;
	activeUser = nullptr;
}

FBLUserLL::FBLUserLLNode::FBLUserLLNode(){
	data = nullptr;
	next = nullptr;
}

FBLUserLL::FBLUserLLNode::~FBLUserLLNode(){
	//Why??
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

bool FBLUserLL::login(string userID){
	if(searchUserID(userID)){
		cout << "Please enter your password: " << endl;
		string pwbuffer;
		cin >> pwbuffer;
		FBLUserLLNode * curr = first;
		while(curr){
			if(curr->data->getUserID() == userID){
				if( curr->data->getPassword() == pwbuffer ){
					cout << "Logging in..." << endl;
					cout << "Welcome : " << curr->data->getFirstName() << " " << curr->data->getLastName() << endl;
					activeUser = curr->data;
					return true;
				} else {
				cout << "Invalid credentials... Please re-select LOGIN to try again." << endl;
				}
			}
			curr = curr->next;
		}
		return false;
	} else {
		cout << "User not found in database..." << endl;
		return false;
	}
}

FBLUser FBLUserLL::returnUserWithID(string userID){
	FBLUserLLNode * curr = first;
	while(curr){
		if(curr->data->getUserID() == userID){
			FBLUser ret = * curr->data;
			return ret;
		}
		curr = curr->next;
	}
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






