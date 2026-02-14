#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;
    int *ptr2 = nullptr;

    cout << ptr << "\n";
    cout << ptr2 << "\n";

    int a = 10;
    ptr = &a;
    cout << ptr << "\n";
    cout << *ptr << "\n";
    return 0;
}