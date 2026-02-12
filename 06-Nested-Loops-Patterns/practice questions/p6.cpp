#include <iostream>
using namespace std;

/*
    1
    10
    101
    1010
    10101
*/
int main() {
    
    int n = 5;

    for(int i=1; i<=n; i++) {
        bool val = true;
        for(int j=1; j<=i; j++) {
            cout << val;
            val = !val;
        }
        cout << endl;
    }
    return 0;
}

