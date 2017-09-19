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
	int maxLen = 1;
	if(argc > 0){
		fileName = argv[0];
		maxLen = argv[1];
	}

	DonorDatabase * db = new DonorDatabase(maxLen);

	/* Prompt */
	string inputCommand;

	while(inputCommand != "Quit"){
		cout << "Enter a command. " << endl << "Choose from: " << endl;
		cin >> inputCommand;

		if(inputCommand == "Login"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(db->searchUID(userIdInput)){
				if(db->login(userIdInput)){
					string internalInputCommand;
					while(internalInputCommand != "Logout"){
						cout << "Enter a command: " << endl;
						cin >> internalInputCommand;

						if(internalInputCommand == "Manage")
						{
										
						}
						if(internalInputCommand == ""){

						}
						if(internalInputCommand == ""){

						}
						if(internalInputCommand == ""){

						}
						if(internalInputCommand == ""){

						}
						if(internalInputCommand == ""){

						}
					}
				}	
			}
		}	
	}

	//deconstruct references
	//free memory
	//exit(0);
}
