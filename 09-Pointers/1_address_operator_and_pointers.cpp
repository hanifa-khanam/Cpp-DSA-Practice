#include <iostream>
using namespace std;

int main() {
    int a = 10;
    // declaring pointers
    int *ptr = &a;
    cout << &a << " = " << ptr << "\n";

    float pi = 3.14;
    float *ptr1 = &pi;

    char letter = 'G';
    char *ptr2 = &letter;

    double pie = 3.14567889;
    double *ptr3 = &pie;

    cout << "float = " << sizeof(ptr1) << endl;
    cout << "char = " << sizeof(ptr2) << endl;
    cout << "double = " << sizeof(ptr3) << endl;
    cout << "integer = " << sizeof(ptr) << endl;

    cout << *ptr3 << endl;



    return 0;
} 