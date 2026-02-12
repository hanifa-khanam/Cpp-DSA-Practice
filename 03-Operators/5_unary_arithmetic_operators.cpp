#include <iostream>
using namespace std;

int main() {
    // Arithmetic Unary operators
    int a = 2;
    a++;   // post increment -> use and then update
    cout << "a= " << a << endl;  // a = 3
    a--;   // post decrement
    cout << "a= " << a << endl; // a = 2

    int b = 3;
    b++;  // b = 4
    int c = ++b;  // pre increment -> update and then use
    cout << "b = " << b << endl;  // 5
    cout << "c = " << c << endl; // 5

    return 0;
}