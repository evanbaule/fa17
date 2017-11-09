//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header import
#include "FBLPost.h"

using namespace std;

//Construction 
FBLPost::FBLPost(){
	numLikes = 0;
	comments = new FBLCommentLL();
	poster = "";
}

FBLPost::FBLPost(string content){
	numLikes = 0;
	comments = new FBLCommentLL();
	this->content = content;
} 

FBLPost::FBLPost(string content, string poster){
	numLikes = 0;
	comments = new FBLCommentLL();
	this->poster = poster;
	this->content = content;
} 


int FBLPost::getNumLikes(){
	return numLikes;
}

string FBLPost::getContent(){
	return content;
}

string FBLPost::getPoster(){
	return poster;
}

void FBLPost::like(){
	numLikes++;
}

void FBLPost::addComment(string s){
	comments->insertComment(s);
}

void FBLPost::printComments(){
	cout << "COMMENTS:" << endl << "-------------------------------------------------------" << endl;
	comments->printAllUL();
	cout << "-------------------------------------------------------" << endl;
}

void FBLPost::printCommentsZA(){
	cout << "COMMENTS:" << endl << "-------------------------------------------------------" << endl;
	comments->printAllBackwards();
	cout << "-------------------------------------------------------" << endl;
}

void FBLPost::setContent(string content){
	this->content = content;
}

void FBLPost::setPoster(string poster){
	this->poster = poster;
}

void FBLPost::printContent(){
	cout <<"|" << "\t" << "- " << poster << "\t posted : " << "( " << numLikes << " ) " << content << endl;
}





