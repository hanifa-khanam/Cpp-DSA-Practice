#include <iostream>
using namespace std;

int numReverse(int n) {
    int reverse = 0;
    while (n > 0) {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }
    return reverse;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int result = numReverse(n);
    cout << "Reverse  of " << n << " is = " << result << endl;

    return 0;
}

