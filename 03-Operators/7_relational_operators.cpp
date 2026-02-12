#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "a == b : " << (a == b) << endl;  // Equal to
    cout << "a != b : " << (a != b) << endl;  // Not equal to
    cout << "a > b  : " << (a > b) << endl;   // Greater than
    cout << "a < b  : " << (a < b) << endl;   // Less than
    cout << "a >= b : " << (a >= b) << endl;  // Greater than or equal to
    cout << "a <= b : " << (a <= b) << endl;  // Less than or equal to

    return 0;
}
