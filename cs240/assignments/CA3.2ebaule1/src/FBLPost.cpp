//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header import
#include "../ncl/FBLPost.h"

using namespace std;

//Construction 
FBLPost::FBLPost(){
	numLikes = 0;
	content = "defContent";
	poster = nullptr;
}

FBLPost::FBLPost(string content){
	numLikes = 0;
	this->content = content;
} 

FBLPost::FBLPost(string content, FBLUser poster){
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
	cout << poster->getData()->getFirstName() << " " << poster->getData()->getLastName() <<" posted : " << content << " ( " << numLikes << " ) " << endl;
}





