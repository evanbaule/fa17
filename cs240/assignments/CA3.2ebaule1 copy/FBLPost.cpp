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
	poster = "";
}

FBLPost::FBLPost(string content){
	numLikes = 0;
	this->content = content;
} 

FBLPost::FBLPost(string content, string poster){
	numLikes = 0;
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

void FBLPost::setContent(string content){
	this->content = content;
}

void FBLPost::setPoster(string poster){
	this->poster = poster;
}

void FBLPost::printContent(){
	cout <<"|" << "\t" << "- " << poster << "\t posted : " << "( " << numLikes << " ) " << content << endl;
}





