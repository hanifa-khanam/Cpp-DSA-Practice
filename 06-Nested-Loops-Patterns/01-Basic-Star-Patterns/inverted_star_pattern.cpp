#include <iostream>
using namespace std;

/* Inverted Star Pattern
    * * * *
    * * *
    * *
    *
*/

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++) {
           cout << "*"; 
        }
        cout << endl;
    }

    return 0;
}