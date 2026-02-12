// sum only the odd digits of a number
#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    int odd_digit_sum = 0;

    while (n > 0)
    {
       int last_digit = n % 10;
       if(last_digit % 2 != 0) {
            odd_digit_sum += last_digit;
       }
       n = n / 10;
    }

    
    cout << endl;
    cout << odd_digit_sum << endl;
    
    return 0;
} 