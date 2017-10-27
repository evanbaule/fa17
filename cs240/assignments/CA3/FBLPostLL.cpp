//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "FBLPostLL.h"

using namespace std;

FBLPostLL::FBLPostLL(){
	first = nullptr;
}

FBLPostLL::FBLPostLLNode::FBLPostLLNode(){
	data = nullptr;
	next = nullptr;
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

void FBLPostLL::printLLWithDelete(){
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

void FBLPostLL::printLLFirstWithDelete(){
	if(first){
		if(first->next){
			first->data->printContent();
			FBLPostLLNode * temp = first;
			delete first;
			first = temp->next;
		} else {
			first->data->printContent();
			delete first;
			first = nullptr;
		}
	} else {
		cout << "No posts to read from... " << endl;
	}
}


void FBLPostLL::printLLNoDelete(){
	if(first){
		FBLPostLLNode * curr = first;
		while(curr){
			curr->data->printContent();
			curr = curr->next;
		}	
	}
	else {
		cout << "No posts to read from... " << endl;
	}
}

void FBLPostLL::removeReadPost(){
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

FBLPost* FBLPostLL::returnRecentPost(){
	if(first){
		return first->data;
	} else {
		cout << "No posts to read from... " << endl;
	}
}




