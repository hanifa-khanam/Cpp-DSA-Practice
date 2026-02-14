#include <iostream>
using namespace std;

//pass by reference (pointers)
void changeA(int *ptr) {
    *ptr = 20; // dereference operator to make changes
    cout << *ptr << "\n";
}

//pass by reference (reference variables)
void changeB(int &change) {
    change = 30;
    cout << change << "\n";
}


int main() {
    int a = 10;
    changeA(&a);

    int b = 5;
    changeB(b);

    cout << b << "\n";
    
    return 0;
}