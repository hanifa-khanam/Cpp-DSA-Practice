#include <iostream>
using namespace std;

int main() {
    int a = 10;
    // declaring pointers
    int *ptr = &a;
    cout << &a << " = " << ptr << "\n";

    float pi = 3.14;
    float *p1 = &pi;
    char letter = 'G';
    char *p2 = &letter;
    double pie = 3.14567889;
    double *p3 = &pie;

    cout << "float = " << sizeof(p1) << endl;
    cout << "char = " << sizeof(p2) << endl;
    cout << "double = " << sizeof(p3) << endl;
    cout << "integer = " << sizeof(ptr) << endl;

    cout << *p3 << endl;



    return 0;
} 