#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
    int number;
    cout << "Enter number: ";
    cin >> number;
    if(number > 0) {
        cout << "Positive\n";
    } else if(number < 0) {
        cout << "Negative\n";
    } else {
        cout << "Zero\n";
    }

    //  Write a C++ program that takes a year from the user and print whether that year is a leap year or not
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 400 == 0) {
        cout << year << " is a Century Leap year.\n";
    } else if(year % 100 == 0) {
        cout << year << " is not a leap year.\n";
    } else if(year % 4 == 0) {
        cout << year << " is a Leap Year\n";
    }else {
        cout << year << " is not a leap year.\n";
    }

    /* For any 3 digit number check whether it’s an Armstrong number or not. 
    Armstrong number is a number that is equal to the sum of cubes of its digits. 
    Eg : 371 is an armstrong number. 
    3*3*3 + 7*7*7 + 1*1*1 = 371*/

    int num;
    cout << "Enter number: ";
    cin >> num;

    int total = 0;
    int temp = num;

    while(temp > 0) {
        int last_digit = temp % 10;
        total += pow(last_digit, 3);
        temp = temp / 10;
    }

    if(total == num) {
        cout << num << " is an armstrong number.\n";
    } else{
        cout << num << " is not an armstrong number.\n";
    }
    return 0;
}