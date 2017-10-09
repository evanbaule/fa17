//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "FBLPostLL.h"
#include "FBLPost.h"

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

void FBLPostLL::printLL(){
	FBLPostLLNode * curr = first;
	while(curr){
		curr->data->printContent();
		curr = curr->next;
	}	
}




