#ifndef WRAPPER_H
#define WRAPPER_H
//Reference
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

class Wrapper{
public:
	Wrapper();
	Wrapper(std::string content);
	std::string content;
	int vectorIndex;
	int lengthHeapIndex;
	int alphaHeapIndex;
	void printWrapperData();
};
	
#endif
