#include <iostream>
using namespace std;

void bintoDec(int binNum) {
    int n = binNum;
    int decimal_number = 0;
    int power = 1;

    while(n > 0) {
        int last_digit = n % 10;
        decimal_number += last_digit * power;
        power = power * 2;
        n = n / 10;
    }
    cout << decimal_number << endl; 
}

int main() {
    bintoDec(101);
    return 0;
}