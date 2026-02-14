#include <iostream>
using namespace std;

int main() {
    int a = 10;
    // declaring pointers
    int *ptr = &a;
    cout << &a << " = " << ptr << "\n";

    cout << ptr << endl;   // print address of a 
    cout << *ptr << endl;  // dereference operator : print value of a
    *ptr = 20;            // dereference operator : assigning 20 to a
    cout << a << endl;    // print value of a 
    cout << *ptr << endl;  // dereference operator : print value of a 
    return 0;
}