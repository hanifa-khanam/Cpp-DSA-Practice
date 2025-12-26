// Function overloading
#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "sum of integer a & b: " << a + b << endl;
    return a+b;
}

double add(double a, double b) {
    cout << "sum of double a & b: " << a + b << endl;
    return a + b;
}

int add(int a, int b, int c) {
    cout << "sum of integer a, b, & c: " << a + b + c << endl;
    return a + b + c;
}

int main() {
    add(2, 4);
    add(2.5, 4.3);
    add(2, 4, 3);

    return 0;
}
