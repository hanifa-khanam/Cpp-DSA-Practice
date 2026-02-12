#include <iostream>
using namespace std;

int globalVar = 25;

void sum(int a, int b) {
    cout << globalVar << endl;
    int s = a + b;
    cout << s << endl;
}

int main() {
    sum(5, 4);
    // cout << s ; local variable=> cannot accessible, only accessible within that function
    cout << globalVar << endl;

    return 0;
}