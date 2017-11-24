#include "Heap.h"

using namespace std;
Heap::Heap(Wrapper contents[]){
	this->contents = contents;
	availableIndex = 0;
}

int Heap::insertAlpha(int x){
	//Insert a new item to the end of the array
	cout << "x: \t" << x << endl;
	data[availableIndex] = x;
	availableIndex++;
	int i = availableIndex -1;
	cout << " I : \t" << i << endl;
	int p = (i-1)/2;
	
        while ((contents[i].content.length() > 0) && (contents[p].content > contents[i].content)){
      		 //Swap
		 cout << " comparing : \t " << contents[p].content << " vs. \t" << contents[i].content << endl;
		 cout << "ALPHA SWAPPING" << endl;
		 int temp = data[i];
		 data[i] = data[p];
		 data[p] = temp;
      		 i = p;
		 p = (i-1)/2;
		 cout << "p post swap : \t" << p << endl;
   	 }
	return i;
}

int Heap::insertLength(int x){
	//Insert a new item to the end of the array
	data[availableIndex] = x;
	availableIndex++;
	int i = availableIndex -1;
	cout << " I : \t" << i << endl;
	int p = (i-1)/2;
        while ((i != 0) && contents[p].content.length() > contents[i].content.length()){
      		 //Swap 
		 cout << " parent: " << contents[p].content << endl;
		 cout << " child: " << contents[i].content << endl;
		 cout << "LEN SWAPPING" << endl;
		 int temp = data[i];
		 data[i] = data[p];
		 data[p] = temp;
		 cout << "CHANGED I FROM : " << i << " to " << p << endl;
      		 i = p;
		 p = (i-1)/2;
   	}
	cout << " I ON RET: \t " << i << endl;
	return i;
}

int Heap::minHeapify(int k){
return 0;		
}


int Heap::find(string s){
	return -1;
}

int Heap::remove(string s){
	return -1;
}

void Heap::printHeap(){
	for(int i = 0; i < 1024; i++){
		if(data[i]){
			cout <<"Index : " << i << " : " << data[i] << endl;
		}
	}

	cout << "Contents: " << endl;
	for(int i = 0; i < 1024; i++){
		if(contents[i].content.length() > 0){
			cout << contents[i].content << endl;
		}
	}

	cout << "PRINTING HEAP" << endl;
	for(int i = 0; i < 5; i++){
		if(contents[data[i]].content.length() > 0){
			cout << contents[data[i]].content << endl;
		}
	}
}


