// print reversed of a number 
#include <iostream>
using namespace std;

int main() {
    int n = 10829;

    while (n > 0)
    {
       int last_digit = n % 10;
       cout << last_digit;
       n = n / 10;
    }
    cout << endl;
    
    return 0;
}  