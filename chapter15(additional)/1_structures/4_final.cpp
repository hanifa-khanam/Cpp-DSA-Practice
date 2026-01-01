#include <iostream>
using namespace std;

struct Student {
    int id;
    float cgpa;
    string name;
};

int main() {

    Student students[2];

    // Pointer to first element of array
    Student* ptr = students;

    for(int i = 0; i < 2; i++) {
        cout << "Enter ID: ";
        cin >> ptr[i].id;

        cout << "Enter Name: ";
        cin >> ptr[i].name;

        cout << "Enter CGPA: ";
        cin >> ptr[i].cgpa;
    }

    cout << "\nStudent Records (using pointer):\n";
    for(int i = 0; i < 2; i++) {
        cout << ptr[i].id << " "
             << ptr[i].name << " "
             << ptr[i].cgpa << endl;
    }

    return 0;
}
  