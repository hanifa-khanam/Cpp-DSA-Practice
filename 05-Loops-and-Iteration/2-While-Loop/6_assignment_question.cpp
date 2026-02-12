// counting prime, odd, even, zero in a student id
#include <iostream>
using namespace std;
int main() {
    int id_number = 250220499;
    int temp = id_number;
    int reversed = 0;
    int res = 0;
    int zero = 0, even = 0, odd = 0, prime = 0;

    while(temp > 0) {
        int last_digit = temp % 10;
        reversed = reversed * 10 + last_digit;   
        temp = temp / 10;
        
    }
    cout << reversed << endl;
    while(reversed > 0) {
        int ld = reversed % 10;
        // classify digits as prime number
        if(ld == 2 || ld == 3 || ld == 5 || ld == 7) {
            cout << ld << " is a prime number" << endl;
            prime++;
        }
        // classify digit as zero
        else if(ld == 0) {
            cout << ld << " zero found in id" << endl;
            zero++;
        }
        // classify digit as even number
        else if(ld % 2 == 0) {
            cout << ld << " is an even number" << endl;
            even++;
        }
        // classify digit as odd number
        else {
            cout << ld << " is an odd number" << endl;
            odd++;
        }
        reversed = reversed / 10;    
    }
    cout << endl;
    cout << "Total Counts: " << endl;
    cout << "Zeros: " << zero << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    cout << "Prime numbers: " << prime << endl;
     return 0;
}