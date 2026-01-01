#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // STEP 1: Write to file
    ofstream outFile("data.txt");

    outFile << "Hello Hanifa" << endl;
    outFile << "Welcome to File Handling" << endl;
    outFile << "C++ is powerful" << endl;

    outFile.close();   // IMPORTANT

    // STEP 2: Read from same file
    ifstream inFile("data.txt");
    string line;

    cout << "Reading from file:\n";

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
