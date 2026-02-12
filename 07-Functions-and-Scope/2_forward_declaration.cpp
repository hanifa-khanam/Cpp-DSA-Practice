#include <iostream>
using namespace std;

/* Forward Declaration: A function must be declared before it is used. 
Used when function is defined below main(). */

int sum(int, int);  // declaration

int main() {
    cout << sum(2, 3) << endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}