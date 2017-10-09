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
	content = "defContent";
}

/*
FBLPost::FBLPost(string content){

} 
*/

int FBLPost::getNumLikes(){
	return numLikes;
}

string FBLPost::getContent(){
	return content;
}

void FBLPost::like(){
	numLikes++;
}

void FBLPost::setContent(string content){
	this->content = content;
}

void FBLPost::printContent(){
	cout << "Printing post: " << content << ", likes: " << numLikes << endl;
}





