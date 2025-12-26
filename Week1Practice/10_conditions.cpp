#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n > 0 && n % 2 == 0) {
        cout << "Positive Even\n ";
    } else if(n > 0 && n % 2 != 0) {
        cout << "Positive Odd\n";
    } else if(n < 0) {
        cout << "Negative\n"; 
    } else {
        cout << "Zero\n";
    }

    return 0;
}

