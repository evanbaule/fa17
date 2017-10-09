//References
#include <stdlib.h>
#include <iostream>
#include <string>

//Header Imports
#include "FBLUser.h"
#include "FBLUserLL.h"
#include "FBLPost.h"
#include "FBLPostLL.h"

using namespace std;

int main(int argc, char const *argv[])
{

	FBLUser * def = new FBLUser();

	FBLUser * evan = new FBLUser();
	evan->setUserID("ebaule1");
	evan->setPassword("override");
	evan->setLastName("Baule");
	evan->setFirstName("Evan");

	FBLUser * cris = new FBLUser();
	cris->setUserID("cforno12");
	cris->setPassword("password");
	cris->setLastName("Forno");
	cris->setFirstName("Cris");

	FBLUserLL * users = new FBLUserLL();
	
	users->insert(def);
	users->insert(evan);
	users->insert(cris);

	users->printLL();

	users->remove("cforno12");

	users->printLL();


	string testingReader = cris->getUserID();
	if(users->findByUserID(testingReader)){
		cout << "found : " << testingReader << " in list. " << endl;
	}

	FBLPost * p1 = new FBLPost();
	p1->setContent("p1 content");
	p1->like();
	p1->like();
	cout << "expected:: 2 likes p1 content : " << endl;
	p1->printContent();

	FBLPost * p2 = new FBLPost();
	p2->setContent("p2 content");
	p2->like();
	p2->like();
	p2->like();
	p2->like();
	cout << "expected:: 4 likes p2 content : " << endl;
	p2->printContent();

	cout << "LINKED LISTED NIGGA" << endl;
	FBLPostLL * posts = new FBLPostLL();
	posts->insert(p1);
	posts->insert(p2);

	posts->printLL();
	
}