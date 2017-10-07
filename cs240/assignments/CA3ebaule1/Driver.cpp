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

	string testingReader = evan->getUserID();
	if(users->findByUserID(testingReader)){
		cout << "found : " << testingReader << " in list. " << endl;
	}
	
}