#include <iostream>
using namespace std;

int main() {
    int a = 10;   // Simple assignment (=)
    int b = 5;

    cout << "Initial values: a = " << a << ", b = " << b << endl;

    a += b;  // Add and assign
    cout << "After a += b: a = " << a << endl;

    a -= b;  // Subtract and assign
    cout << "After a -= b: a = " << a << endl;

    a *= b;  // Multiply and assign
    cout << "After a *= b: a = " << a << endl;

    a /= b;  // Divide and assign
    cout << "After a /= b: a = " << a << endl;

    a %= b;  // Modulus and assign
    cout << "After a %= b: a = " << a << endl;

    a <<= 1; // Left shift and assign
    cout << "After a <<= 1: a = " << a << endl;

    a >>= 1; // Right shift and assign
    cout << "After a >>= 1: a = " << a << endl;

    a &= b;  // Bitwise AND and assign
    cout << "After a &= b: a = " << a << endl;

    a |= b;  // Bitwise OR and assign
    cout << "After a |= b: a = " << a << endl;

    a ^= b;  // Bitwise XOR and assign
    cout << "After a ^= b: a = " << a << endl;

    return 0;
}
