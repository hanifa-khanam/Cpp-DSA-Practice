#include <iostream>
using namespace std;

/*
    *
    22
    333
    4444
*/

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    // for first row
    cout << "*\n";
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
