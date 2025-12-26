#include <iostream>
using namespace std;

int main() {
    int a = 10;
    // declaring pointers
    int *ptr = &a;
    cout << &a << " = " << ptr << "\n";

    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 20;
    cout << a << endl;
    cout << *ptr << endl;
    return 0;
}