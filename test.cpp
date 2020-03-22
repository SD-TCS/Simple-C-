/*
* Multiple line
* comment
*/
#include <iostream>

// Single line comment
// using namespace std;
int addition (int x, int y) {
  return x + y;
}

//This is where the execution of program begins
int main()
{
   // displays Hello World! on screens
   std::cout << "Hello World!" << std::endl;

   int x = addition(6, 5);
   std::cout << x << std::endl;

   return 0;
}
