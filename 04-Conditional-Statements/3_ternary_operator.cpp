#include <iostream>
using namespace std;

int main() {

    // Largest of 2 numbers
    int a = 10;
    int b = 59;

    // syntax: variable = condition? statement1 : statement2;
    int largest = a >= b? a : b;
    cout << "largest is : " << largest << endl;
    
    return 0;
    
}