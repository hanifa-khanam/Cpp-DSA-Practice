// Print N natural numbers using for loop
#include <iostream>
using namespace std;
int main() {
    int i;  
    int n;

    cout << "Enter n: ";
    cin >> n;

    for( i= 1; i<= n; i++){
        cout << i << " " ;
    }

    cout << endl;

    cout << "last value of n is: " << n << endl;
    cout << "last value of i is: " << i << endl;    
    
    return 0;   
}