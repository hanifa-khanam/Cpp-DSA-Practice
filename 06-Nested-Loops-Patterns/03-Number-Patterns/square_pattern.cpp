#include <iostream>
using namespace std;

/* Square Pattern
    1 1 1 1 
    2 2 2 2 
    3 3 3 3 
    4 4 4 4 
*/
int main() {
    int n;
    cout << "N: ";
    cin >> n;

    // outer loop
    for(int i=1; i<=n; i++) {
        // inner loop 
        for(int j=1; j<=n; j++) {
            // work
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}