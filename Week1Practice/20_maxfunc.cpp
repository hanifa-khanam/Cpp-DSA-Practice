#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}


int main() {
    int result = findMax(5, 6);
    cout << "Maximum number: " << result << endl;

    return 0;
}








