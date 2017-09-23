/*--References--*/
#include "iostream"
#include "stdlib.h"
#include "Donor.h"
#include "DonorDatabase.h"
#include "string"
using namespace std;

int main(int argc, char *argv[])
{

	/*--INITIALIZING-
	Check for arguments and build db instance accordingly
	if arguments have maxlen
		use maxlen constructor
		if args have filename
			open file into memory of instance
	else 
		use default constructor
	*/
	string dbFileName;
	int maxLen = 1;
	if(argc > 0){
		maxLen = argv[0];
		DonorDatabase * db = new DonorDatabase(maxLen);
		if(argc > 1){
			dbFileName = argv[1];
			db->readDBFile(dbFileName);
		}
	} else {
		DonorDatabase * db = new DonorDatabase();
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
			if(db->searchUID(userIdInput)){
				if(db->login(userIdInput)){
					Donor activeUser; //need to establish this somehow to call functions on it
					string internalInputCommand;
					while(internalInputCommand != "Logout"){
						cout << "Enter a command: " << endl;
						cin >> internalInputCommand;

						if(internalInputCommand == "Manage")
						{
							cout << "I fucked this up bad";
							activeUser.manageUser();	
						}
						else if(internalInputCommand == "Passwd"){
							activeUser.changePassword();
						}
						else if(internalInputCommand == "View"){
							activeUser.viewDonorDetails();
						}
						else if(internalInputCommand == "Donate"){
							activeUser.donate();
						}
						else if(internalInputCommand == "Total"){
							activeUser.printTotal();
						}
						else if(internalInputCommand == "Help"){
							cout << "Valid command options: Manage, Passwd, View, Donate, Total, Help, Logout" << endl;
						}
						else {
							cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
						}
					}
				}	
			}
		}else if(inputCommand == "Add") {
			//prompt construction of new user
			Donor * newDonor = new Donor();
			db->addDonor(const &newDonor);
		}else if(inputCommand == "Save") {
			db->writeDBFile();
		}else if(inputCommand == "Load") {
			db->readDBFile();
		}else if(inputCommand == "Report") {
			db->printReport();
		}else if(inputCommand == "Help") {
			cout << "Valid command options: Login, Add, Save, Load, Report, Help" << endl;
		}else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
		}
	}

	//deconstruct references
	//free memory
	//exit(0);
}
