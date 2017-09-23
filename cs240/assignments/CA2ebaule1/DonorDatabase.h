/* -- Guard -- */
#ifndef DONORDB_H
#define DONORDB_H

/* -- References -- */
#include "string"
#include "stdlib.h"
#include "iostream"


class DonorDatabase
{
public:
	DonorDatabase();
	DonorDatabase(int maxLen);
	void searchUserID(string userID);
	void addDonor(const Donor &donorBuffer);
	void writeDBFile();
	void readDBFile();
	void printReport();
	~DonorDatabase();

private:
	
};


/* -- End Guard -- */
#endif