#include <iostream>
using namespace std;


struct Student
{
    int id;
    float cgpa;
    string name;
};

/*Create a structure Employee with:
id
salary
Store data for 2 employees and print employees with salary > 50,000.*/
struct Employee
{
    string name;
    int salary;
};

int main() {

    Student students[2];

    for(int i=0; i<2; i++) {
        cout << "Enter ID: ";
        cin >> students[i].id;

        cout << "Enter Name: ";
        cin >> students[i].name;

        cout << "Enter CGPA: ";
        cin >> students[i].cgpa;
    }

    cout << "\nStudent Records:\n";
    for(int i=0; i<2; i++) {
        cout << students[i].id << " " << students[i].name << " " << " " << students[i].cgpa << endl;    }


    Employee emp[2];
    for(int i=0; i<2; i++) {
        cout << "Enter Name: ";
        cin >> emp[i].name;

        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\nEmployees Data:\n";
    for(int i=0; i<2; i++) {
        if(emp[i].salary > 50000) {
            cout << emp[i].name << " -> " << emp[i].salary << endl;
        }
    }


    return 0;
}