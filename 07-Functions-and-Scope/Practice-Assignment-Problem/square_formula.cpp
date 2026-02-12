#include <iostream> 
using namespace std;

// Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

int squareofNum(int a, int b) {
    return  a*a + b*b + 2*a*b;
    
}

int main() {

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int result = squareofNum(a, b);
    cout << "Square formula for a = " << a << " and b = " << b << " is = " << result << endl;

    return 0;
}



