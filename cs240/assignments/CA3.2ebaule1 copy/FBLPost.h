//Header
#ifndef POST_H
#define POST_H 
//References
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class FBLPost
{
public:
	//Construction
	FBLPost();
	FBLPost(string content);
	FBLPost(string content, string poster);
	
	//Likes
	int getNumLikes();
	void like(); //like++

	//Content
	string getContent();
	void setContent(string content);

	string getPoster();
	void setPoster(string poster);	

	void printContent();

private:
	string poster;
	string content;
	int numLikes;
};

#endif
