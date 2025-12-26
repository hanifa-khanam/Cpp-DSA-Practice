#include <iostream>
using namespace std;

int main() {
    bool val = true;
    int n = 5;
    for(int i=0; i<n; i++) {
        bool val = (i % 2 == 1);
        for(int j=0; j<=i; j++) {
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }

    return 0;
}


