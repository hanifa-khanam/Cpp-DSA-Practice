#include <iostream>
using namespace std;

/*goto is generally discouraged because it makes code harder to read and maintain.

Modern C++ prefers structured control statements like if, for, while, break, continue, and functions.

Main advantage: Can simplify certain error handling or nested loop exits.*/

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
        goto negative;

    cout << "You entered a positive number or zero.\n";
    goto end;

negative:
    cout << "You entered a negative number.\n";

end:
    cout << "Program ends here.\n";
    return 0;
}
