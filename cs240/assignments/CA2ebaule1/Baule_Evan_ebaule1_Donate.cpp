/*--References--*/
#include "iostream"
#include "stdlib.h"
#include "Donor.h"
using namespace std;

int main(int argc, char *argv[])
{
	bool sessionFlag = false;
	enum commands {
		Login,
		Add,
		Save,
		Load,
		Report,
		Quit
	};

	/* Prompt */
	string inputCommand;

	while(inputCommand != "Quit"){
		cout << "Enter a command. " << endl << "Choose from: " << endl;
		cin >> inputCommand;

		//if command == blah do blah stuff

	}
}