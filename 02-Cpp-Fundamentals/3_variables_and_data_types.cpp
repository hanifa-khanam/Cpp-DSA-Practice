#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age = 20;            // 4 bytes = 4 x 8 bits = 32 bits
    float marks = 85.5;      // 4 byte
    char grade = 'A';       // 1 byte
    bool passed = true;     // 1 byte

    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;

    cout << "Size of float: " << sizeof(marks) << endl;


    float PI = 3.14159265359;    // precision = 7 numbers
    double PI2 = 3.14159265359;   // precision = 15 numbers
    cout << setprecision(12) << "Float PI: " << PI << endl;
    cout << setprecision(12) << "Double PI: " << PI2 << endl;
    
    return 0;
}