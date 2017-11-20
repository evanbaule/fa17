#include "Dish.h"

using namespace std;
int main(int argc, char const *argv[]){
	Dish * d = new Dish();
	cout << d->find("Hello?") << endl;
}
