//References
#include <stdlib.h>
#include <iostream>
#include <string>
#include <istream>

//Header Imports
#include "../ncl/FBLUser.h"
#include "../ncl/FBLUserLL.h"
#include "../ncl/FBLPost.h"
#include "../ncl/FBLPostLL.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Welcome to FaceBook Lite. ";
	string inputCommandTop;

	FBLPostLL * globalFeed = new FBLPostLL();
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
					cout << "Please enter a command: [POST, FRIEND, READ, or LOGOUT]" << endl;
					cin >> internalInputCommand;
					if(internalInputCommand == "POST"){
						string postbuf;
						getline(cin, postbuf);
						string userBuffer = users->activeUser->getUserID();
						FBLPost * globalPost = new FBLPost(postbuf, userBuffer);
						globalFeed->insert(globalPost);
						users->activeUser->addPost(postbuf);
						cout << "Added post" << endl;
					}
					else if(internalInputCommand == "READ"){
						users->activeUser->printPosts();
					}
					else if(internalInputCommand == "FRIEND"){
						string newFriendID;  
						cin >> newFriendID;
						FBLUser newFriend = users->returnUserWithID(newFriendID);
						if(users->searchUserID(newFriendID)){
							users->activeUser->addFriend(newFriend);
							cout << newFriendID << " added to friends list." << endl;
						}else {
							cout << "No user with id: " << newFriendID << " found in user base. Returning to menu." << endl;
						}
						
					}
					else if(internalInputCommand == "FRIENDSLIST"){
						users->activeUser->printFriendsList();
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
		}
		else if(inputCommandTop == "FEED"){
			globalFeed->printLL();
		} else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	cout << "Exiting..." << endl;
}
