#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    map<int, string> student;

    // Insertion
    student[101] = "Ali";
    student[102] = "Ahmed";
    student[103] = "Sara";

    student.insert({104, "John"});

    // Accessing
    cout << student[101] << endl;

    // searching
    if(student.find(102) != student.end()) {
        cout << "Found -> ";
        cout << student[102] << endl;
    }

    // Traversing
    cout << "Sorted Students:\n";
    for(auto pair: student) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Deletion
    student.erase(103);

    cout << "\nAfter deletion:\n";
    
    for(auto pair: student) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    cout << "\nsize: " << student.size() << endl;
    
    return 0;

}