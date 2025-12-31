#include <iostream>
using namespace std;


struct Student
{
    int id, age;
    float cgpa;
    string name;
};



int main() {

    Student s1;
    s1.name = "Hanifa";
    s1.age = 20;
    s1.id = 120;
    s1.cgpa = 3.63;


    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "CGPA: " << s1.cgpa << endl;


    return 0;
}