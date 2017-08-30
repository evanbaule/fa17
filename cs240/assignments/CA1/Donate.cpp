/*--References--*/
#include "iostream"
#include "stdlib.h"
#include "DonorClass.h"
using namespace std;

int main(int argc, char *argv[])
{
	//inst new donor obj
	//take input cin >> strIn
	//while(strIn != "Quit")
	//switch on str to call changes/funcs of donor obj
	//close -> since strIn was 'Quit'

	int initAmt;
	cout << "Enter an init amount  : " << endl;
	cin >> initAmt;

	DonorClass *donorPtr = new DonorClass(initAmt);
	cout << "Welcome, please enter a command to manipulate a donor, your commands are: 'Add', 'Manage', 'View', 'Donate', 'Total', and 'Quit'. The Program will not exit until you choose 'Quit'." << endl;
	string commandStr = "";
	while(true){
		cout << "Please enter a command: " << endl;
		cin >> commandStr;
			if(commandStr == "Add"){ 

			}
			else if(commandStr == "Manage"){

			}
			else if(commandStr == "View"){
				donorPtr->printFormattedTotal();
			}
			else if(commandStr == "Donate"){
				cout << "How much would you like to donate?" << endl;
				int donAmt;
				cin >> donAmt;
				donorPtr->donate(donAmt);
			}
			else if(commandStr == "Total"){

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

