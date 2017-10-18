//Header
#ifndef POST_H
#define POST_H 
//References
#include <stdlib.h>
#include <iostream>
#include <string>

#include "FBLUser.h"

using namespace std;

class FBLPost
{
public:
	//Construction
	FBLPost();
	FBLPost(string content);
	FBLPost(string content, FBLUser * poster);
	
	//Likes
	int getNumLikes();
	void like(); //like++

	//Content
	string getContent();
	void setContent(string content);

	FBLUser getPoster();
	void setPoster(FBLUser * poster);	

	void printContent();

	//Destruction
	~FBLPost();

private:
	FBLUser * poster;
	string content;
	int numLikes;
};

#endif