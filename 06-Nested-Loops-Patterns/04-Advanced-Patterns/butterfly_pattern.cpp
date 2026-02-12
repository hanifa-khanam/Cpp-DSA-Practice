#include <iostream>
using namespace std;

/*  Butterfly pattern
        *      *
        **    **
        ***  ***
        ********
        ********
        ***  ***
        **    **
        *      *

*/

int main() {
    int n;
    cout << "N: ";
    cin >> n;

    // upper half
    for(int i=1; i<=n; i++) {
        // star
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        // space
        for(int j=1; j<=(2*(n-i)); j++) {
            cout << " ";
        }
        // star
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for(int i=n; i>=1; i--) {
        // star
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        // space 
        for(int j=1; j<=(2*(n-i)); j++) {
            cout << " ";
        }
        // star 
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}