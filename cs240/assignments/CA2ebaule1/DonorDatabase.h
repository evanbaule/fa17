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
	void addDonor();
	void writeDBFile();
	void readDBFile(string fileName);
	void printReport();

	int getMax();

	~DonorDatabase();

private:
	int max;
	Donor* db;
};


/* -- End Guard -- */
#endif