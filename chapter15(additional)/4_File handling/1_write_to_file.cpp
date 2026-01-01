#include <iostream>
#include <fstream>  //header file
using namespace std;

// WRITING TO A FILE
// If file doesn’t exist → C++ creates it
// If file exists → content is overwritten (by default)

int main() {
    // step 1: create output file stream
    ofstream file;

    // step 2: open file 
    file.open("students.txt");

    // step 3: write data to file
    file << "ID: 101\n";
    file << "Name: Hanifa Khanam\n";
    file << "CGPA: 3.63\n";

    // step 4: close file
    file.close();

    cout << "Data written to file successfully.\n";

    return 0;
}
