//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "FBLCommentLL.h"
#include "FBLUser.h"

using namespace std;

FBLCommentLL::FBLCommentLL()
{
	first = nullptr;
	last = nullptr;
}

FBLCommentLL::FBLCommentLLNode::FBLCommentLLNode()
{
	data = "";
	next = nullptr;
	prev = nullptr;
}

void FBLCommentLL::insertComment(string body)
{
	FBLCommentLLNode * insertionPoint = first;
	FBLCommentLLNode * newNode = new FBLCommentLLNode();
	newNode->data = body;
	if(first == nullptr){
		first = newNode;
	} else {
		while(insertionPoint->next){
			insertionPoint = insertionPoint->next;
		}
		
		insertionPoint->next = newNode;
		newNode->prev = insertionPoint;
		
	}
}

void FBLCommentLL::printAllUL(){
	if(first){
		FBLCommentLLNode * curr = first;
		while(curr){
			cout << "|\t-" << curr->data << endl;
			//curr->printNodeData();
			curr = curr->next;
		}	
	}
	else {
		cout << "No comments to read from... " << endl;
	}
}

void FBLCommentLL::printAllBackwards(){
	if(first){
		FBLCommentLLNode * end = first;
		while(end->next){
			end = end->next;
		}
		cout << "reached end" << endl;
		while(end){
			cout << "|\t-" << end->data << endl;
			end = end->prev;
		}		
	}
	else {
		cout << "No comments to read from... " << endl;
	}
}

void FBLCommentLL::FBLCommentLLNode::printNodeData()
{
	cout << " -- NODE -- " << endl;
	cout << "Data: " << data << endl;
	cout << "Next: " << next->data << endl;
	cout << "Prev: " << prev->data << endl;
}