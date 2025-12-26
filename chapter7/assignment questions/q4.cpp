#include <iostream> 
using namespace std;

void largestofNum(int a, int b, int c) {
    if (a >= b && a >= c) {
        cout << a << " is greater than " << b << " and " << c << endl;
    } else if (b >= c) {
        cout << b << " is greater than " << a << " and " << c << endl;
    } else {
        cout << c << " is greater than " << a << " and " << b << endl;
    }

}
int main() {

    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;   

    largestofNum(a, b, c);

    return 0;
}


