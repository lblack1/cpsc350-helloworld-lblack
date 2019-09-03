#include "helloworld.h"
#include <iostream>

using namespace std;

HelloWorld::HelloWorld() {
	cout << "object created" << endl;
}

HelloWorld::~HelloWorld() {
	cout << "object destroyed" << endl;
}

void HelloWorld::Hello() {
	cout << "Heyo" << endl;
}
