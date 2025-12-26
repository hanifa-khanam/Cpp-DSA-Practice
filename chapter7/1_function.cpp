#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)\n";
}

void assistant() {
    sayHello();
    cout << "Work done \n";
}

int main() {
    
    cout << "We are calling the sayHello Function \n";
    sayHello(); // function call 
    cout << "Now assistant function is in progress \n";
    assistant();
    cout << "we have done or check both fuction functionality. \n";

    return 0;
}