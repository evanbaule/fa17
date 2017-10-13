#include "../ncl/TestClass.h"

using namespace std;

TestClass::TestClass(){
	testString = "testing testing";
}

void TestClass::printTestString(){
	cout << "Content: " << testString << endl;
}