/*--References--*/
#include "iostream"
#include "stdlib.h"
#include "Donor.h"
using namespace std;

int main(int argc, char *argv[])
{
	/* -- Evan M. Baule -- */
	/* -- Coding Assignment 1 */
	Donor *donorPtr = new Donor();
	string commandStr = "";
	while(commandStr != "Quit"){
		
		cout << "Enter a command." << endl;
		cout << "Choose from [\"Add\" \"Manage\" \"View\" \"Donate\" \"Total\" \"Quit\"] " << endl << ": ";
		cin >> commandStr;
			if(commandStr == "Add"){ 
				donorPtr->addDonor();
			}
			else if(commandStr == "Manage"){
				donorPtr->overwriteDonor();
			}
			else if(commandStr == "View"){
				donorPtr->printFormattedDonorDetails();
			}
			else if(commandStr == "Donate"){
				cout << "Enter Amount to Donate: ";
				float donAmt;
				cin >> donAmt;
				donorPtr->donate(donAmt);
			}
			else if(commandStr == "Total"){
				donorPtr->printFormattedTotal();
			}
			else if(commandStr == "Quit"){
				delete(donorPtr);
				exit(0);
			}
			else {
				cout << "Command not recognized. Please try again." << endl;
			}
		cout << endl;
	}	
}

