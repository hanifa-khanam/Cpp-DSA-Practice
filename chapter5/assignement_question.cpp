#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    // WAP to find the Factorial of a number entered by the user.
    int n;
    cout << "Enter number: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;

    //: WAP to print the multiplication table of a number, entered by the user.
    int num;
    cout << "Enter number for the multiplication tabel: ";
    cin >> num;
    for(int i=1; i<=10; i++) {
        cout << num << " x " << i << " = " << num*i << endl;
    }

    // WAP to input a number and check whether the number is an Armstrong number or not.
    int number;
    cout << "Enter a number to check whether its armstrong number: " ;
    cin >> number;
    int armstrong = 0;
    int temp = number;
    while (temp > 0) {
        int last_digit = temp % 10;
        armstrong = armstrong + pow(last_digit, 3);
        temp = temp / 10;
    }
    if(armstrong == number) {
        cout << number << " is an armstrong number.\n";
    }else {
        cout << number << " is not an armstrong number.\n";
    }

    // For a positive N , WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)
    int N;
    cout << "Enter N to print prime numbers: ";
    cin >> N;
    for(int i=2; i<=N; i++) {
        int curr = i;
        bool isPrime = true;
        for(int j=2; j*j<=i; j++) {
            if(curr % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << curr << " ";
        }
    }
    cout << endl;
    // : For a positive N , WAP that prints the first N Fibonacci numbers. (Assume N >= 2)
    int nn;
    cout << "Enter Number: " ;
    cin >> nn;
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    for(int i=2; i<=nn; i++) {
        int third = first  + second;
        cout << third << " ";
        first = second;
        second = third;
    }
    cout << endl;               
    return 0;
    
}