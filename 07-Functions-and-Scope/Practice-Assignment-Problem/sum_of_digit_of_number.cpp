#include <iostream> 
using namespace std;

// Write a function to calculate the sum of digits of a number. 
int digitSumofNum(int n) {
    int sum_of_digit = 0;
    while(n > 0) {
        int last_digit = n % 10;
        sum_of_digit += last_digit;
        n = n / 10;
    }
    return sum_of_digit;
}
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    
    int result = digitSumofNum(num);
    cout << "Sum of digits of number '"<< num << "' = " << result << endl;

    return 0;
}




