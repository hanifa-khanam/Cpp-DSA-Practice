#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    if(n == 0) {
        return 1;
    }

    for(int i=1; i<=n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    cout << "Enter number: " ;
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) << "\n";
    return 0;
}




