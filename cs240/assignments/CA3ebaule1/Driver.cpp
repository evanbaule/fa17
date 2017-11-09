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

	//MENU LEVEL 1
	while(inputCommandTop != "QUIT")
	{
		cout << "Please enter a command: [CREATE, LOGIN, USERS, or QUIT]" << endl;
		cin >> inputCommandTop;

		//MENU LEVEL 2
		if(inputCommandTop == "LOGIN"){
			string userIdInput;
			cout << "Enter your userID: " << endl;
			cin >> userIdInput;
			if(users->login(userIdInput)){
				string internalInputCommand;
				while(internalInputCommand != "LOGOUT"){
					cout << "Please enter a command: [FRIEND, MYFRIENDS, MYFEED, READ, MYWALL, POST, or LOGOUT]" << endl;
					cin >> internalInputCommand;
					if(internalInputCommand == "POST"){
						string postbuf;
						getline(cin, postbuf);
						users->activeUser->addPost(postbuf);
					}

					//MENU LEVEL 3
					else if(internalInputCommand == "READ"){
						FBLPost * activePost = users->activeUser->getRecentPost();
						string commentCommand = "";
						while(commentCommand != "DONE"){
							users->activeUser->readFeed();
							if(users->activeUser->getFeed()->hasPosts()){
								cout << "Enter a command: [LIKE, COMMENT, READ-AZ, READ-ZA, or DONE]" << endl;
								cin >> commentCommand;
								if(commentCommand == "LIKE"){
									cout << activePost->getContent() << endl;
									activePost->like();
								} else if(commentCommand == "COMMENT"){
									string commentBuffer;
									getline(cin, commentBuffer);
									activePost->addComment(commentBuffer);
									cout << "Added a comment. " << endl;
								} else if(commentCommand == "SORT-AZ"){
									//activePost->readAZ();
								} else if(commentCommand == "ALL"){
									activePost->printComments();
								} else if(commentCommand == "LLA"){
									activePost->printCommentsZA();
								} else if(commentCommand == "SORT-ZA"){
									//activePost->readZA();
								}
							} else {
								break;
							}
						}
						users->activeUser->removeRead();
						
					}
					else if(internalInputCommand == "MYWALL"){
						users->activeUser->printPosts();
					}
					else if(internalInputCommand == "FRIEND"){
						string newFriendID;  
						cin >> newFriendID;
						FBLUser * newFriend = users->returnUserWithID(newFriendID);
						if(users->searchUserID(newFriendID)){
							if(!users->activeUser->alreadyFriends(newFriendID)){
								users->activeUser->addFriend(newFriend);
								newFriend->addFriend(users->activeUser);
								//cout << newFriendID << " added as a friend of " << users->activeUser->getUserID() << endl;
								//cout << users->activeUser->getUserID() << " added as a friend of " << newFriendID << endl;
								cout << newFriendID << " added as a friend." << endl;
							} else {
								cout << "You are already friends with " << newFriendID << endl;
							}
						}else {
							cout << "No user with id (" << newFriendID << ") found in user base. Returning to menu." << endl;
						}
					}
					else if(internalInputCommand == "MYFRIENDS"){
						users->activeUser->printFriendsList();
					}
					else if(internalInputCommand == "MYFEED"){
						users->activeUser->printFeed();
					}
					else if(internalInputCommand == "LOGOUT"){
						break;
					}
					else {
						cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
					}
				} 
			} 
		} else if(inputCommandTop == "CREATE") {
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

		} else if(inputCommandTop == "HELP") {
			cout << "Valid command options: [LOGIN, CREATE, USERS, QUIT]" << endl;
		} else if(inputCommandTop == "USERS"){
			users->printAllUsersFormatted();
		} else if(inputCommandTop == "QUIT") {
			break;
		} else if(inputCommandTop == "SORTUSERS"){
			cout << "Sorry, didn't get to this part." << endl;
		} else {
			cout << "Invalid input. Type \"Help\" for a list of valid commands." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	
	cout << "Exiting..." << endl;
}
