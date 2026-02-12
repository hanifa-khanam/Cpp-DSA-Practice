#include <iostream>
using namespace std;

int main() {
    // 1. Use meaningful variable names
    int age = 20;  // good: tells what the variable represents
    int a = 20;    // not recommended: unclear purpose

    // 2. Use camelCase for variable names (common in C++)
    int studentAge = 18;  
    double monthlySalary = 5000.50;

    // 3. Use underscores for readability if needed
    int total_marks_obtained = 95;

    // 4. Constants in uppercase letters with underscores
    const double PI = 3.14159;

    // 5. Avoid starting variable names with numbers
    // int 2ndNumber = 5; // invalid

    // 6. Avoid using reserved keywords
    // int class = 10; // invalid

    // Display the values
    cout << "Age: " << age << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Total Marks Obtained: " << total_marks_obtained << endl;
    cout << "Value of PI: " << PI << endl;

    return 0;
}
