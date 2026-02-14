#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    int *ptr1 = &x;
    int *ptr2 = &y;
    ptr2 = ptr1;
    cout << ptr1 << " ptr1" << endl;
    cout << ptr2 << " ptr2" << endl;
    cout << &x << " ptr1=ptr2" << endl;

    float* a, b;
    cout << "a " << a << endl;
    cout << "b " <<  b << endl;



}