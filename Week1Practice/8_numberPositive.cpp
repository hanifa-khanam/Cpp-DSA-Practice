#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a > 0 && b > 0) {
        cout << "Both numbers are positive.\n";
    }
    else if (a == 0 || b == 0) {
        cout << "At least one number is zero.\n";
    }
    else {
        cout << "Condition not satisfied.\n";
    }


    // if( a > 0 && b > 0 ) {
    //     cout << "Both a & b are positve numbers.\n";
    // } else if (a > 0 && b < 0) {
    //     cout << "a is a positive number and b is negative.\n";
    // } else if (b > 0 && a < 0) {
    //     cout << "b is positive number and a is negative.\n";
    // } else if (a > 0 && b == 0){
    //     cout << "a is a positive number and b is zero.\n";
    // } else if (a < 0 && b == 0) {
    //     cout << "a is negative number and b is zero.\n";
    // } else if (a == 0 && b > 0) {
    //     cout << " a is zero and b is a positive number.\n";
    // }  else if (a == 0 && b < 0) { 
    //     cout << " a is zero and b is a negative number.\n";
    // }

    return 0;
} 


