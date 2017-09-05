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
	while(true){
		
		cout << "Choose from [\"Add\" \"Manage\" \"View\" \"Donate\" \"Total\" \"Quit\"]: ";
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
				cout << "How much would you like to donate?" << endl;
				int donAmt;
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
				cout << "Command Not Recognized" << endl;
			}
	}	
}

