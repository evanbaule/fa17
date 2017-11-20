#ifndef DISH_G
#define DISH_G
//Reference
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

class Dish{
//Private members
	std::vector<std::string> contents;	
public:
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
	Dish();
	~Dish();
	//Specification-required functions
	int insert(std::string s);
	int find(std::string s);
	bool capitalize(int k);
	bool allcaps(int k);
	bool truncate(int k, int i);
	std::string getshortest();
	std::string getfirst();

	//Helpers [Not in specification]
	void printContents();
};

#endif
