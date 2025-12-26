#include <iostream>
using namespace std;

int main() {
    int n = 7;
    // first pyramid
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        // stars
        for(int j=1; j<=2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // second pyramid
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}