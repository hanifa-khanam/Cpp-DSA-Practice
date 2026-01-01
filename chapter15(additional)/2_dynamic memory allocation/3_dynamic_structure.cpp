#include <iostream>
using namespace std;

struct Student {
    int id;
    float cgpa;
};

int main() {

    // Allocate structure dynamically
    Student* s = new Student;

    // Assign Values
    s->id = 101;
    s->cgpa = 3.63;

    // Access values
    cout << "ID: " << s->id << endl;
    cout << "CGPA: " << s->cgpa << endl;

    // free memory 
    delete s;
    s = NULL;

    return 0;
}