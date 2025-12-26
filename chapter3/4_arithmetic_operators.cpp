#include <iostream>
using namespace std;

int main() {

    // Arithmetic Binary operators
    int a = 5;
    int b = 3;

    cout << "+ " << (a + b) << endl;
    cout << "- " << (a - b) << endl;
    cout << "* " << (a * b) << endl;
    cout << "/ " << (a / b) << endl;
    cout << "% " << (a % b) << endl;

    // Arithmetic Unary operators
    int c = 2;
    c++;
    cout << "c= " << c << endl;
    c--;
    cout << "c= " << c << endl;

    int d = 3;
    int e = d++;
    int f = ++d;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    
}