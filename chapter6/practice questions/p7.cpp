#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i=1; i<=n; i++) {
        // leading spaces
        for(int s=1; s<=i-1; s++) {
            cout << " ";
        }
        // stars logic
        if(i==1 || i==n) {
            for(int j=1; j<=n; j++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for(int j=1; j<=n-2; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
