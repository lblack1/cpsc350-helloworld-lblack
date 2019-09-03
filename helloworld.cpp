/*
Lloyd Black
CPSC350
helloworld.cpp
Implementaion of a basic hello world program.
*/

#include "helloworld.h"
#include <iostream>

using namespace std;

//Constructor
HelloWorld::HelloWorld() {
	cout << "object created" << endl;
}

//Destructor
HelloWorld::~HelloWorld() {
	cout << "object destroyed" << endl;
}

//basic output function
void HelloWorld::Hello() {
	cout << "Heyo" << endl;
}
