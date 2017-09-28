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

	int maxLen = 1000; //to get around comp error of it not existing
	DonorDatabase * donors;
	if(argc > 1){
		string dbFileName = "default.txt";
		maxLen = atoi(argv[1]);
		donors = new DonorDatabase(maxLen);

		if(argc == 3){
			donors->readDBFile(argv[2]);
		}

		if(argc > 3){
			cout << "Ignoring all arguments beyond argv[1]." << endl;
		}
	} else {
		cout << "Invalid Arguments: Need to provide max length of db array. Exiting..." << endl;
		exit(0);
	}

	

	/* Prompt */
	string inputCommand;
	while(inputCommand != "Quit"){
		cout << "Enter a command: Login, Add, Save, Load, Report, or Quit." << endl;
		cin >> inputCommand;

		if(inputCommand == "Login"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(donors->searchUserID(userIdInput)){
				Donor * activeUser = donors->returnUserByID(userIdInput);//need to establish this somehow to call functions on it
				if(activeUser->login()){
					cout << "Welcome " << activeUser->getFirstName() << " " << activeUser->getLastName() << endl;
					string internalInputCommand;
					while(internalInputCommand != "Logout"){
						cout << "Please enter a command: Manage, Passwd, View, Donate, Total, or Logout." << endl;
						cin >> internalInputCommand;

						if(internalInputCommand == "Manage")
						{
							activeUser->manageDonor();	
						}
						else if(internalInputCommand == "Passwd"){
							activeUser->changePassword();
						}
						else if(internalInputCommand == "View"){
							activeUser->viewDonorDetails();
						}
						else if(internalInputCommand == "Donate"){
							activeUser->donate();
						}
						else if(internalInputCommand == "Total"){
							activeUser->printTotal();
						}
						else if(internalInputCommand == "Help"){
							cout << "Valid command options: Manage, Passwd, View, Donate, Total, Help, Logout" << endl;
						}
						else if(internalInputCommand == "Logout"){
							break;
						}
						else {
							cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
						}
					}
				} else {
					cout << "Login attempt failed... Returning to menu." << endl;
				}
			}
		}else if(inputCommand == "Add") {
			donors->addDonor();
		}else if(inputCommand == "Save") {
			donors->writeDBFile();
		}else if(inputCommand == "Load") {
			string fileName;
			cout << "Enter a filename (ending with .txt): " << endl;
			cin >> fileName;
			donors->readDBFile(fileName);
		}else if(inputCommand == "Report") {
			donors->printReport();
		}else if(inputCommand == "Help") {
			cout << "Valid command options: Login, Add, Save, Load, Report, Help" << endl;
		}else if(inputCommand == "Quit"){
			break;
		}else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
		}
	}
	cout << "Exiting" << endl;

	//deconstruct references
	//free memory
	//exit(0);
}
