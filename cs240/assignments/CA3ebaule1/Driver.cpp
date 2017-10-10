//References
#include <stdlib.h>
#include <iostream>
#include <string>
#include <istream>

//Header Imports
#include "FBLUser.h"
#include "FBLUserLL.h"
#include "FBLPost.h"
#include "FBLPostLL.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Welcome to FaceBook Lite. ";
	string inputCommandTop;
	FBLUserLL * users = new FBLUserLL();

	while(inputCommandTop != "QUIT")
	{
		cout << "Please enter a command: CREATE, LOGIN, or QUIT" << endl;

		if(inputCommandTop == "LOGIN"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(users->searchUserID(userIdInput)){
				if(true){
					string internalInputCommand;
					while(internalInputCommand != "LOGOUT"){
						cout << "Please enter a command: POST, READ, or LOGOUT." << endl;
						cin >> internalInputCommand;
						if(internalInputCommand == "POST"){

						}
						else if(internalInputCommand == "READ"){

						}
						else if(internalInputCommand == "LOGOUT"){
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
		}else if(inputCommandTop == "CREATE") {

		}else if(inputCommandTop == "Help") {
			cout << "Valid command options: Login, Add, Save, Load, Report, Help" << endl;
		}else if(inputCommandTop == "QUIT"){
			break;
		}else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
		}
	}
	cout << "Exiting..." << endl;
}
