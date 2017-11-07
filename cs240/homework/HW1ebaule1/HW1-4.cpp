/*
Evan M. Baule 
HW1-4

Stopped after not being able to find a way around "error: implicit instantiation of undefined template" 
when trying to make vector in main function, spent >2 hours trying to find an answer
*/

#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class Team {
	string name;
    unsigned int wins, losses;
public:
	Team();
	Team(string name, unsigned int wins, unsigned int losses);
	friend bool operator> (const Team &t1, const Team &t2);
	double calcwlr() const;
};

Team::Team(string name, unsigned int wins, unsigned int losses){
	this->name = name;
	this->wins = wins;
	this->losses = losses;
}

double Team::calcwlr() const{
	return wins/losses;
}

bool operator> (const Team &t1, const Team &t2){
    return t1.calcwlr() > t2.calcwlr();
}

//MERGE SORT
template <typename T>
void merge(vector<T> vec){
	
}

//MAIN
int main(int argc, char const *argv[])
{
	
	Team *t1 = new Team("dogs", 5, 3);
	Team *t2 = new Team("cats", 10, 3);
	Team *t3 = new Team("horses", 3, 3);
	//vector<Team> teams = {t1, t2, t3};
	vector<int> ints;

	cout << t1->calcwlr() << endl;
	cout << t2->calcwlr() << endl;
	cout << t3->calcwlr() << endl;

	merge(ints;);

}


