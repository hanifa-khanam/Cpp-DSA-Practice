#include <iostream>
using namespace std;

void changeA(int a) {
    a = 20;
    cout << "Variable change in function: " << a << "\n";
}

int main() {
    int a = 10;
    changeA(a);
    
    cout << "Variable after function call but remain original: " << a << "\n";
    
    return 0;
}