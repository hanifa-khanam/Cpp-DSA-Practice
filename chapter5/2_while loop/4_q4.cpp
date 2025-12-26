// Printing reversed of a number by assigning it to a result or temp variable 
#include <iostream>
using namespace std;
int main() {
    int n = 10829;
    int result = 0;
    while (n > 0)
    {
        /* code */
       int last_digit = n % 10;
       result = result * 10 + last_digit;
       n = n / 10;

    }
    cout << endl;
    cout << result ;
    return 0;
} 