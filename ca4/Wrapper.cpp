//References
#include "Dish.h"
#include "Wrapper.h"

using namespace std;

Wrapper::Wrapper(){
	content = "";
	vectorIndex = 64;
	lengthHeapIndex = 64;
	alphaHeapIndex = 64;
}

Wrapper::Wrapper(string content){
	this->content = content;
	vectorIndex = 0;
	lengthHeapIndex = 0;
	alphaHeapIndex = 0;
}

void Wrapper::printWrapperData(){
	cout << "---- Printing Wrapper Contents ----" << endl;
	cout << "|\t Content: " << content << endl;
	cout << "|\t VDX: " << vectorIndex << endl;
	cout << "|\t LHDX: " << lengthHeapIndex << endl;
	cout << "|\t AHDX: " << alphaHeapIndex << endl;
	cout << "---- END ----" << endl;
}