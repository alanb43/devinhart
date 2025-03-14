#include <vector>
#include <iostream>
#include <utility> 

//don't be a donkey, as "using namespace std" can cause conflicts w/ other libraries
using std::vector;
using std::endl;
using std::cout;
using std::pair;

int main() {
    
    //various ways of defining a vector
    vector<int> a; //empty vector
    vector<int> b(100); // vector of 100 zeroes
    vector<int> c(10, 77); // vector of 10 77s

    a.push_back(50); //included in the vector class within std library, .push_back adds an element to the end
    b.pop_back(); //removes the last element from b
    c.clear(); //clears c 
    a.size(); //returns size as the size_t type (unsigned integer)
    a.front();
    a.back();
    a.empty();
    
    //example of comparing an unsigned integer with a signed integer (bad idea)
    int x = -7;
    size_t y = 10;

    cout << (y > x) << endl; // BAD
    cout << (static_cast<int>(y) > x) << endl; //convert y to an int, but not as easy as Python

    // PAIRS
    pair<int, bool> pair1;
    pair<int, bool> pair2;
    
    pair1.first = 100;
    pair2.second = false; //pretty self-explanatory

    //Left off on control structures
}