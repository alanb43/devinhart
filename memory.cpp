// What libraries we would like to import
#include <iostream>
#include <string>

// What specific features of those libraries above I am going to use (without std::)
using std::cout, std::cerr, std::endl;
using std::string;
using std::runtime_error;

int BART = 10; //global namespace variables are all caps

int main() {
  // primitive types
  int x; // created on stack: static size
  long z;
  double y;
  char c;
  bool b;

  x = 5;
  int* xPtr = &x;

  x = 42;     // initialize value of x to 42
  int a = 99; // initialize value of y to 99
  x = a;      // assign value of y to value of x

  int m;
  int &n = m;

  std::cout << "X value: " << x << ", X memory address: " << xPtr << std::endl;

  char str1[] = "Hello"; // Size is automatically 6 (including '\0')
  char str2[10] = "World"; // Size is explicitly specified, ensure it's large enough (programmer's job to do so)

  string devin = "Devin"; // created on stack: static size
  std::cout << "Hello World!" << std::endl;
  
  // new keyword: created on the heap (dynamic memory)
  char* charArray = new char[6]; // WHAT IS THE NEW KEYWORD
  
}

