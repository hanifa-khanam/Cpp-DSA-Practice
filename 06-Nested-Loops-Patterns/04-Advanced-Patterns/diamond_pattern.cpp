#include <iostream>
using namespace std;

/*  Diamond Pattern
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
*/

int main() {
    int n;
    cout << "N: ";
    cin >> n;

    // 1st Pyramid
    for(int i=1; i<=n; i++){
        // spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        // stars
        for(int k=1; k<=(2*i-1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // 2nd Pyramid
    for(int i=n; i>=1; i--) {
        // spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        // stars
        for(int k=1; k<=(2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}