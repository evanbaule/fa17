//References
#include "Dish.h"
#include <iterator>
using namespace std;

//Wrapper
Dish::Wrapper::Wrapper(){
	content = "";
	vectorIndex = 64;
	lengthHeapIndex = 64;
	alphaHeapIndex = 64;
}

Dish::Wrapper::Wrapper(string content){
	this->content = content;
	vectorIndex = 0;
	lengthHeapIndex = 0;
	alphaHeapIndex = 0;
}

void Dish::Wrapper::printWrapperData(){
	cout << "---- Printing Wrapper Contents ----" << endl;
	cout << "|\t Content: " << content << endl;
	cout << "|\t VDX: " << vectorIndex << endl;
	cout << "|\t LHDX: " << lengthHeapIndex << endl;
	cout << "|\t AHDX: " << alphaHeapIndex << endl;
	cout << "---- END ----" << endl;
}

//Management
Dish::Dish(){

	cout << "g++ is dumb" << endl;
}

Dish::~Dish(){
	//delete all integers in the tree
	//delete 
}

//Specification-required functions
int Dish::Dish::insert(string s){
	contents.push_back(s);
}

int Dish::find(string s){
//	iterator idx = contents.begin();
//	int ret = -1;
//	if(idx == contents.end()) return ret; //Didn't find s in contents
//	else {
//		ret = distance(contents.begin(), idx);
//	}
//	return ret;
	return 128;
}

bool Dish::capitalize(int k){
	return false;
}

bool Dish::allcaps(int k){
	return false;
}

bool Dish::truncate(int k, int i){
	return false;
}

string Dish::getshortest(){
	return "";
}

string Dish::getfirst(){
	return "";
}

//Helper functionality
