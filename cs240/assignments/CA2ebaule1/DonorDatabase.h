/* -- Guard -- */
#ifndef DONORDB_H
#define DONORDB_H

/* -- References -- */
#include "string"
#include "stdlib.h"
#include "iostream"
#include "Donor.h"


class DonorDatabase
{
public:
	DonorDatabase(int maxLen);
	bool searchUserID(string userID);
	Donor * returnUserByID(string userIDSearch);
	void addDonor(const Donor &donorBuffer);
	void writeDBFile();
	void readDBFile();
	void printReport();
	~DonorDatabase();

private:
	int max;
	Donor * db;
};


/* -- End Guard -- */
#endif