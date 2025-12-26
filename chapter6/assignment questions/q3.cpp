#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // outer loop
    for(int i=1; i<=n; i++) {
        // inner loop a: print spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        // innner loop b: print backward counting
        for(int k=i; k>=1; k--) {
            cout << k;
        }
        // inner loop c: print forward counting 
        for(int k=2; k<=i; k++) {
            cout << k;
        }
        cout << endl;
    }
}