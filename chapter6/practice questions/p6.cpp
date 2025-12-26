#include <iostream>
using namespace std;

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

