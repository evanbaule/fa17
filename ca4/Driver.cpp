#include "Dish.h"

using namespace std;
int main(int argc, char const *argv[]){
	Dish * d = new Dish();
	d->insert("eeeeeeeee"); 
	d->insert("ddddddd");	
	d->insert("cccc"); 
	d->insert("bbb");
	d->insert("aaaaa");
	d->printContents();
	
	string buffer = "";
	while(buffer != "q"){
		cout << "Enter a command: ";
		cin >> buffer;
		if(buffer == "printLength"){
			d->lengthHeap->printHeap();
		}
		else if(buffer == "printAlpha"){
			d->alphaHeap->printHeap();
		}
		else if(buffer == "pc"){
			d->printContents();
		}
		else if(buffer == "caps"){
			int intbuff = 0;
			cout << "Enter index to caps : " << endl;
			cin >> intbuff;
			d->capitalize(intbuff);
		}
		else if(buffer == "allcaps"){
			int intbuff = 0;
			cout << "Enter index to allcaps : " << endl;
			cin >> intbuff;
			d->allcaps(intbuff);
		}
		else if(buffer == "truncate"){
			int index, end;
			cout << "Enter an index to truncate : " << endl;
			cin >> index;
			cout << "Enter a value to truncate to : " << endl;
			cin >> end;
			d->truncate(index, end);
		}
		else if(buffer =="printDish"){
			d->printContents();
		}
		else if(buffer =="q"){
			break;
		}
		else if(buffer == "first"){
			cout << "First alphabetical:\t" << d->getfirst() << endl;
		}
		else if(buffer == "shortest"){
			cout << "First length:\t" << d->getshortest() << endl;
		}
		else {
			cout << "Invalid.." << endl;
		}
	}		
}
