#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int* pX = &x;

    cout << "Value of x : " << x << endl;
    cout << "Address of x : " << &x << endl;
    cout << "Value stored in pX: " << pX << endl;
    cout << "Value pointed to by pX: " << * pX << endl;

    *pX = 10;
    cout << "New value of x: " << x << endl;

    return 0;
}
