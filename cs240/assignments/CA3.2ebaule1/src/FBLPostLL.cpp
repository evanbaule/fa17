//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "../ncl/FBLPostLL.h"

using namespace std;

FBLPostLL::FBLPostLL(){
	first = nullptr;
}

FBLPostLL::FBLPostLLNode::FBLPostLLNode(){
	data = nullptr;
	next = nullptr;
}

FBLPostLL::FBLPostLLNode::~FBLPostLLNode(){
	//????
}

void FBLPostLL::insert(FBLPost * newPost){
	FBLPostLLNode * insertionPoint = first;
	FBLPostLLNode * newNode = new FBLPostLLNode();
	newNode->data = newPost;
	if(first == nullptr){
		first = newNode;
	} else {
		while(insertionPoint->next){
			insertionPoint = insertionPoint->next;
		}
		insertionPoint->next = newNode;
	}
}

void FBLPostLL::printLL(){
	FBLPostLLNode * curr = first;
	while(curr){
		curr->data->printContent();
		curr = curr->next;
	}	

	if(first){
		if(first->next){
			FBLPostLLNode * temp = first;
			delete first;
			first = temp->next;
		} else {
			delete first;
			first = nullptr;
		}
	} else {
		cout << "No posts to read from... " << endl;
	}
	
}



