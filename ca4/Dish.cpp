//References
#include "Dish.h"
#include "Wrapper.h"
using namespace std;

//Management
Dish::Dish(){
	lengthHeap = new Heap(contents);
	alphaHeap = new Heap(contents);
	availableIndex = 0;
}

Dish::~Dish(){
	//Deletes both heaps
}

//Specification-required functions
int Dish::Dish::insert(string s){
	int retVal;
	if(availableIndex > 1023) return -1;
	else {
		retVal = availableIndex;
		Wrapper tbi = Wrapper(s);
		contents[availableIndex] = tbi;
		contents[availableIndex].vectorIndex = availableIndex;
		contents[availableIndex].lengthHeapIndex = lengthHeap->insertLength(contents[availableIndex].vectorIndex);
		contents[availableIndex].alphaHeapIndex = alphaHeap->insertAlpha(contents[availableIndex].vectorIndex);
		availableIndex++;
	}
	return retVal;
}

//Finds string s in contents, returns the index where it was found or -1 if not found
//O(n)
int Dish::find(string s){
	for(int i = 0; i < 1024; i++){
		if(contents[i].content == s){
			return i;
		}
	} 
	return -1;
}

//O(log(n))
bool Dish::capitalize(int k){
	if(k > availableIndex) return false;
	contents[k].content[0] = toupper(contents[k].content[0]);
	//Rearrange heaps to reflect update
	contents[k].lengthHeapIndex = lengthHeap->minHeapify(contents[k].lengthHeapIndex);
	contents[k].alphaHeapIndex = alphaHeap->minHeapify(contents[k].alphaHeapIndex);	
	return true;
}

//O(log(n))
bool Dish::allcaps(int k){
	if(k > availableIndex) return false;
	for(int i = 0; i < contents[k].content.length(); i++){
		contents[k].content[i] = toupper(contents[k].content[i]);
	}
	//Rearrange heaps to reflect update
	contents[k].lengthHeapIndex = lengthHeap->minHeapify(contents[k].lengthHeapIndex);
	contents[k].alphaHeapIndex = alphaHeap->minHeapify(contents[k].alphaHeapIndex);
	return false;
}

//O(log(n))
bool Dish::truncate(int k, int i){
	if(k > availableIndex) return false;
	contents[k].content = contents[k].content.substr(0, i);
	//Rearrange heaps to reflect update
	contents[k].lengthHeapIndex = lengthHeap->minHeapify(contents[k].lengthHeapIndex);
	contents[k].alphaHeapIndex = alphaHeap->minHeapify(contents[k].alphaHeapIndex);
	return true;
}

//O(1)
string Dish::getshortest(){
	return contents[lengthHeap->data[0]].content;
}

//O(1)
string Dish::getfirst(){
	return contents[alphaHeap->data[0]].content;
}

//Helper functionality
void Dish::printContents(){
	for(int i = 0; i < 1024; i++){
		if(contents[i].content.length() > 0){
			contents[i].printWrapperData();
		}
	}
}
