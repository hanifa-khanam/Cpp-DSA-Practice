#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
};

int main() {

    Student s;

    cout << "Enter ID: ";
    cin >> s.id;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    // Write to file
    ofstream file("st.txt");

    file << s.id << endl;
    file << s.name << endl;
    file << s.cgpa << endl;

    file.close();

    cout << "Student data saved successfully.";

    return 0;
}
