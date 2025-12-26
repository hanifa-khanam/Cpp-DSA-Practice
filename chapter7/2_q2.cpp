#include <iostream>
using namespace std;

// write a program to find the product of 2 numbers a & b
int product(int a, int b) {
    int prod = a * b;
    return prod;
}

// writeh a program to print if a number is even or odd
bool isEven(int n) {
    if (n % 2 == 0) {
        cout << "Even \n";
        return true;
        

    } else {
        cout << "Odd \n";
        return false;
        
    }
}

// write a program to print the factorial of a number, n
int Factorial(int n) {
    int factorial = 1;
    for(int i = 1; i<=n; i++) {
        factorial = factorial * i;
    }
    return factorial; 
}

// write a program to print if a number is prime or not.
bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    // for(int i=1; i*i<=n; i++)
    // for(int i=2; i<=sqrt(n); i++)
    for(int i=2; i<=n-1; i++) {
        if(n%i == 0) {
            return false;
        }  
    }
    return true;
}

// write a program to find the binomial coefficient for given n & r.
int binomialCofficient(int n, int r) {
    int n_factor = Factorial(n);
    int r_facotr = Factorial(r);
    int p_factor = Factorial(n-r);

    int coefficient = n_factor / (r_facotr * p_factor);
    return coefficient;
}
int main() {

    cout << "Binomial Coefficient: " << binomialCofficient(3, 2) << endl;

    return 0;
}  