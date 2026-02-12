#include <iostream>
#include <cmath>
using namespace std;

// return product of 2 numbers
int product(int a, int b) {   // a, b are parameters
    int prod = a * b;
    return prod;
}

// return is number is even or odd
bool isEven(int n) {
    if (n % 2 == 0) {
        cout << "Even \n";
        return true;
    } else {
        cout << "Odd \n";
        return false;
        
    }
}

// return factorial of a number, n
int Factorial(int n) {
    int factorial = 1;
    for(int i = 1; i<=n; i++) {
        factorial = factorial * i;
    }
    return factorial; 
}

// return if a number is prime or not.
bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    // for(int i=1; i*i<=n; i++)
    //for(int i=2; i<=n-1; i++)
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }  
    }
    return true;
}

// return binomial coefficient for given n & r.
int binomialCofficient(int n, int r) {
    int n_factor = Factorial(n);
    int r_facotr = Factorial(r);
    int p_factor = Factorial(n-r);

    int coefficient = n_factor / (r_facotr * p_factor);
    return coefficient;
}
int main() {

    cout << "Binomial Coefficient: " << binomialCofficient(3, 2) << endl;  // 3, 3 => arguments

    cout << "Is prime: " << isPrime(24) << endl;
    
    return 0;
}  