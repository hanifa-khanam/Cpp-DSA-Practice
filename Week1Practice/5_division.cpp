#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 2;

    cout << "int a and float b : " <<  a / b << "\n";
    cout << "int a and int b: " << a / static_cast<int> (b) << "\n";
    return 0;
}


