#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cout << "ptr = " << *ptr << endl;
    cout << "ch = " << ch << " cho = " << cho << endl;
    cout << int(ch) << endl;
    cho += a;
    *ptr += ch;

    cout << a << "  , " << ch << endl;

    return 0;
}