#include <iostream>
#include "Object.h"
using namespace std;

int main() {
	cout << "Main: create object a" << endl;
	Object a; 
	cout << "Main: create object b" << endl;
	Object* b = new Object;
	cout << "Main: delete object b" << endl;
	delete b; 
	cout << "Main create object c" << endl;
	Object c; 
	return 0;
}


