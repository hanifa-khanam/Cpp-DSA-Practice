#include <iostream>
using namespace std;

int main() {
    bool x = true;
    bool y = false;

    cout << "x = " << x << ", y = " << y << endl;

    // Logical AND
    cout << "x && y : " << (x && y) << "  // true only if both x and y are true" << endl;

    // Logical OR
    cout << "x || y : " << (x || y) << "  // true if either x or y is true" << endl;

    // Logical NOT
    cout << "!x     : " << (!x) << "  // true if x is false" << endl;
    cout << "!y     : " << (!y) << "  // true if y is false" << endl;

    return 0;
}