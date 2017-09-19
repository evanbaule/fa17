/*--References--*/
#include "iostream"
#include "stdlib.h"
#include "Donor.h"
#include "string"
using namespace std;

int main(int argc, char *argv[])
{

	//Establish max length of load file from command line
	string filename;
	int maxLen = 0;
	if(argc > 0){
		fileName = argv[0];
		maxLen = argv[1];
	}

	/* Prompt */
	string inputCommand;

	while(inputCommand != "Quit"){
		cout << "Enter a command. " << endl << "Choose from: " << endl;
		cin >> inputCommand;

		if(inputCommand == "Login"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(donorDB->searchUID(userIdInput)){
				if(
			}


				string internalInputCommand;
				while(internalInputCommand != "Logout")
				cout << "Enter a command: " << endl;
				cin >> internalInputCommand;
		}

		

	}

	//deconstruct references
	//free memory
	//exit(0);
}
