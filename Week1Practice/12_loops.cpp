#include <iostream>
using namespace std;

void loopFor(int n){
    cout << "For loop: \n";
    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void loopWhile(int n) {
    cout << "While Loop: \n";
    int i = 1;
    while(i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

void loopDoWhile(int n) {
    cout << "Do while loop: \n";
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    loopFor(n);
    loopWhile(n);
    loopDoWhile(n);

    return 0;
}


