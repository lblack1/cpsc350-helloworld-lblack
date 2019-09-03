/*
Lloyd Black
CPSC350
main.cpp
The main function for the hello world app
*/

#include "helloworld.h"
#include <iostream>

using namespace std;

// Creates a Hello World Object on the heap and invokes the Hello function.
int main(int argc, char** argv) {

  HelloWorld *h = new HelloWorld();
  h->Hello();
  h->~HelloWorld();

}
