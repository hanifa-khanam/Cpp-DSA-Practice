#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    map<int, string> students;

    // insert in a map
    students[101] = "Khanam";
    students[102] = "Nouman";
    students[103] = "Haris";
    students[104] = "Awais";

    cout << students[101] << endl;    // access value using key

    cout << students.count(101) << endl;  // 1 if key present, 0 if key not present



    // traverse
    cout << "\nStudent Data:\n";
    for(auto it: students) {
        cout << it.first << " -> " << it.second << endl;
    }

    // search
    if(students.find(102) != students.end()) {
        cout << "\nFound roll number 102\n";
    }

    // delete
    students.erase(102);

    cout << "\nAfter deletion:\n";
    for(auto it: students) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0; 
}