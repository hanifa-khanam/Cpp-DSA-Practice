#include <iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function: a = " << a << " and b = " << b << "\n";
}


int main() {
    int x = 3;
    int y = 4;

    cout << "Before swap: x = " << x << " and y = " << y << "\n";
    swap(x, y);
    cout << "After swap: x = " << x << " and y = " << y << "\n";
    
    
    return 0;
}
