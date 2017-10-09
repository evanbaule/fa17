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

	void printContent();

	//Likes
	int getNumLikes();
	void like(); //like++

	//Content
	string getContent();
	void setContent(string content);	

	//Destruction
	~FBLPost();

private:
	string content;
	//FBLPostLL * comments;
	int numLikes;
	
};

#endif