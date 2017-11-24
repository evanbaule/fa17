#ifndef DISH_H
#define DISH_H
//Reference
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <cctype>
#include "Heap.h"
#include "Wrapper.h"

class Dish{
public:
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
	int availableIndex;

	Heap * alphaHeap;
	Heap * lengthHeap;
	Wrapper contents[1024];
};

#endif
