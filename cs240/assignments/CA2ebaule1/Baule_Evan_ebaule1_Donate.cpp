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

	string dbFileName = "default.txt";
	int maxLen = 2;
	//int maxLen = atoi(argv[0]);
	DonorDatabase * donors = new DonorDatabase(maxLen);


	/*
	cout << "Testing purposes" << endl;
	Donor * testDonor = new Donor();

	cout<<"printing deets"<<endl;
	testDonor->viewDonorDetails();

	cout <<"Donating"<<endl;
	testDonor->donate();

	*/


	/* Prompt */
	string inputCommand;
	while(inputCommand != "Quit"){
		cout << "Enter a command. " << endl << "Choose from: Login, Add, Save, Load, Report, Quit." << endl;
		cin >> inputCommand;

		if(inputCommand == "Login"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(donors->searchUserID(userIdInput)){
				/*if(donors->login(userIdInput)){
					Donor activeUser; //need to establish this somehow to call functions on it
					string internalInputCommand;
					while(internalInputCommand != "Logout"){
						cout << "Enter a command: " << endl;
						cin >> internalInputCommand;

						if(internalInputCommand == "Manage")
						{
							activeUser.manageDonor();	
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
				}	*/
			}
		}else if(inputCommand == "Add") {
			donors->addDonor();
		}else if(inputCommand == "Save") {
			donors->writeDBFile();
		}else if(inputCommand == "Load") {
			donors->readDBFile();
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
