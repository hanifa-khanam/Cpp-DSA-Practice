#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    fstream file;
    
    //open file for both writing and reading
    file.open("info.txt", ios::out |ios::in | ios::trunc);

    // write to file
    file << "Dynamic Memory Allocation\n";
    file << "File Handling in C++\n";
    file << "DSA Preparation\n";

    // move file pointer to begining for reading
    file.seekg(0);

    string line;
    cout << "Reading from same file:\n";
    
    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    
    return 0;
}