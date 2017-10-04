#ifndef POST_H
#define POST_H 
//References
#include <stdlib.h>
#include <iostream>
#include <string>

class FBLPost
{
public:
	//Construction
	FBLPost();

	void printContent();

	//Likes
	int getNumLikes();
	void setNumLikes();
	void like();

	//Content
	string getContent();
	void setContent();	

	//Destruction
	~FBLPost();

private:
	string content;
	//FBLPostLL * comments;
	int numLikes;
	
};

#endif