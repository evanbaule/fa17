#ifndef TEST_H
#define TEST_H

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class TestClass
{
public:
	TestClass();
	~TestClass();
	void printTestString();

private:
	string testString;

};

#endif