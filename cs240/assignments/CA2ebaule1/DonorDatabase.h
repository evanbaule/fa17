/* -- Guard -- */
#ifndef DONORDB_H
#define DONORDB_H

/* -- References -- */
#include "string"
#include "stdlib.h"
#include "iostream"

using namespace std;

class DonorDatabase
{
public:
	DonorDatabase();
	void readExisting(FILE * fname);
	void readNew(FILE * fname);
	void writeNew(FILE * fname);
	bool searchFor(string userid);
	~DonorDatabase();

private:
	
};


/* -- End Guard -- */
#endif