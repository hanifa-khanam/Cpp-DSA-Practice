#include <iostream>
using namespace std;

/* Floating numbers Triangle
    1
    23
    456
    78910
    1112131415
  
*/

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) {
            cout << num++;
        }
        cout << endl;
    }
    return 0;
}

