#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ifstream file;
    string line;

    //open file
    file.open("students.txt");

    // read file line by line 
    while(getline(file, line)) {   // getline reads one line at a time
        cout << line << endl;
    }

    // close file

    file.close();

    return 0;
}