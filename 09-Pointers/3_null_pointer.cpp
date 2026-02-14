#include <iostream>
using namespace std;

int main() {
    int *ptr1 = NULL;
    int *ptr2 = nullptr;

    cout << ptr1 << "\n";
    cout << ptr2 << "\n";
    // cout << *ptr1 << "\n";  // cannot dreference null pointer: segmentation fault

    int a = 10;
    ptr1 = &a;
    cout << ptr1 << "\n";
    cout << *ptr1 << "\n";
    return 0;
}