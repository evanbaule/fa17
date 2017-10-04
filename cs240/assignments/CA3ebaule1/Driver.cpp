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

	//TEST DATA Evan & Cris
	FBLUser * def = new FBLUser();
	def->read();

	FBLUser * evan = new FBLUser();
	evan->setUserID("ebaule1");
	evan->setPassword("override");
	evan->setLastName("Baule");
	evan->setFirstName("Evan");
	evan->read();

	FBLUser * cris = new FBLUser();
	cris->setUserID("cforno12");
	cris->setPassword("password");
	cris->setLastName("Forno");
	cris->setFirstName("Cris");
	cris->read();

	FBLUserLL * users = new FBLUserLL();
	cout << "Adding def..." << endl;
	users->insert(def);
	users->printLL();

	cout << "Adding evan..." << endl;
	users->insert(evan);
	users->printLL();

	cout << "Adding cris..." << endl;
	users->insert(cris);
	users->printLL();

}