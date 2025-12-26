#include <iostream>
using namespace std;

int main() {
    // Input
    cout << "Enter N: ";
    int N;
    cin >> N;

    // Initialize variables
    int i = 1;
    int sum = 0;

    // Loop: while i <= N
    while (i <= N) {
        // Update sum and i
        sum = sum + i;
        i++;
        
    }
    // Output current sum
    cout << sum << endl;
    // End
    return 0;
}
