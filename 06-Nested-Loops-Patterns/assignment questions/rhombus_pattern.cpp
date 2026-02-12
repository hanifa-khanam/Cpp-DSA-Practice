#include <iostream>
using namespace std;

/* Print the RhombusPattern. 
    For n =5
             *****
           *****
         *****
        *****
       *****

*/
int main() {
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