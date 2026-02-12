#include <iostream>
using namespace std;

/* Character Pyramid
    A
    BC
    DEF
    GHIJ
*/

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    char ch = 'A';

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << ch++;
        }
        cout << endl;
    }

    return 0;
}