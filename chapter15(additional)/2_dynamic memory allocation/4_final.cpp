#include <iostream>
#include <cstring>
using namespace std;


struct Student {
    int id;
    float cgpa;
    string name;
};

int main() {

    int n;
    cout << "Enter number of Students: ";
    cin >> n;

    // dynamic array of structure
    Student* students = new Student[n];

    // input data
    for(int i=0; i<n; i++) {
        cout << "\nStudent " << i+1 << endl;
        
        cout << "Enter ID: ";
        cin >> students[i].id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, students[i].name);

        cout << "Enter CGPA: ";
        cin >> students[i].cgpa;
    }

    // display output data
    cout << "\nStudents Records: \n";
    for(int i=0; i<n; i++) {
        cout << students[i].id << " ";
        cout << students[i].name << " ";
        cout << students[i].cgpa << endl;
       
    }

    // free memory 
    delete[] students;
    students = NULL;

    return 0;
}