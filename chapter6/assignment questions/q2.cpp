#include <iostream>
using namespace std;

int main() {
    // int n = 5;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=n-i; j++) {
    //         cout << " ";
    //     }
    //     for(int k=1; k<=n; k++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int n = 5;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=n-i-1; j++) {
            cout << " ";
        }
        for(int k=0; k<n; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}