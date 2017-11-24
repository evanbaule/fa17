#ifndef HEAP_G
#define HEAP_G
//Reference
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Wrapper.h"


class Heap{
public:
	Heap(Wrapper contents[]);
	Wrapper * contents;
	int data[1024];
	int availableIndex;
	

	//Operations
	int  minHeapify(int k);
	int insertLength(int x);
	int insertAlpha(int x);
	int find(std::string s);
	int remove(std::string s);
	void printHeap();

};

#endif
