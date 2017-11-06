/*
Evan M. Baule 
HW1 - Question 1
*/

#include <stdlib.h>
#include <string.h>
#include <iostream>

void multiplesOf3(int n);
using namespace std;

int main(int argc, char const *argv[])
{
	int nMultiples;
	cout << "Enter desired # of multiples: (PRINTS REVERSE ORDER) ";
	cin >> nMultiples;

	cout << "------ PRINTING --------" << endl;
	multiplesOf3(nMultiples);


}

void multiplesOf3(int n){
	if(n == 1){
		cout << 3 << endl;
		return;
	}
	cout << 3*n << endl;
	multiplesOf3(n-1);
	
}
