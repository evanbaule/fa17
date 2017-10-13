#include <stdlib.h>
#include <iostream>
#include <string>

#include "../ncl/TestClass.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Entering main" << endl;
	TestClass * tc = new TestClass();
	tc->printTestString();

	return 0;
}