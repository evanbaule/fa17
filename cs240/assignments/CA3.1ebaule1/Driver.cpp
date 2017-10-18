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
		cout << "Please enter a command: [CREATE, LOGIN, or QUIT]" << endl;
		cin >> inputCommandTop;

		if(inputCommandTop == "LOGIN"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(users->login(userIdInput)){
				string internalInputCommand;
				while(internalInputCommand != "LOGOUT"){
					cout << "Please enter a command: [POST, READ, or LOGOUT]" << endl;
					cin >> internalInputCommand;
					if(internalInputCommand == "POST"){
						string postbuf;
						getline(cin, postbuf);
						users->activeUser->addPost(postbuf);
						cout << "Added post" << endl;
					}
					else if(internalInputCommand == "READ"){
						users->activeUser->printPosts();
					}
					else if(internalInputCommand == "LOGOUT"){
						break;
					}
					else {
						cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
					}
				} 
			} 
		}else if(inputCommandTop == "CREATE") {
			string _userID;
			string _password;
			string _lastName;
			string _firstName;
			cin >> _userID;
			if(users->searchUserID(_userID)){
				cout << "That username is taken..." << endl;
				continue;
			}
			cin >> _password;
			cin >> _lastName;
			cin >> _firstName;

			FBLUser * newUser = new FBLUser(_userID, _password, _lastName, _firstName);
			users->insert(newUser);
			cout << "Insertion complete..." << endl;

		}else if(inputCommandTop == "HELP") {
			cout << "Valid command options: [LOGIN, CREATE, QUIT]" << endl;
		}else if(inputCommandTop == "QUIT"){
			break;
		}else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	cout << "Exiting..." << endl;
}