#include <iostream>
using namespace std;

/* Inverted and Rotated Half-Pyramid
       *
      **
     ***
    ****
*/

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        // spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        // stars
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}