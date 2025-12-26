#include <iostream> 
using namespace std;

    //  Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)

int reversed_of_number(int num) {
    int reversed = 0;
    while (num > 0) {
        int last_digit = num % 10;
        reversed = reversed * 10 + last_digit;
        num = num / 10;
    }
    return reversed;
}

void isPalindrome(int n) {
    if (reversed_of_number(n) == n) {
        cout << n << " is a Palindrome.\n";
    } else {
        cout << n << " is not a Palindrome.\n";
    }
}

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    isPalindrome(num);

    return 0;
}

