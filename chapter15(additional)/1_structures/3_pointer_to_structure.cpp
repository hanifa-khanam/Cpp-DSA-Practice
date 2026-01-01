#include <iostream>
using namespace std;

// define structure
struct Student
{
    int id;
    float gpa;
    char grade;
    int age;
};

int main() {
    // structure variable
    Student s1;

    // creating one pointer to the structure
    Student* ptr = &s1;

    // assign values using pointer
    ptr->id = 101;
    ptr->gpa = 3.9;
    ptr->grade = 'A';
    ptr->age = 20;

    // print values
    // Step 5: Print values
    cout << "ID: " << ptr->id << endl;
    cout << "GPA: " << ptr->gpa << endl;
    cout << "Grade: " << ptr->grade << endl;
    cout << "Age: " << ptr->age << endl;

    return 0;
}
