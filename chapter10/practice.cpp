#include <iostream>
using namespace std;

void inputFun(int marks[]) {
    cout << "Enter 5 marks: " ;
    for(int i=0; i<5; i++) {
        cin >> marks[i];
    }
}

int average(int marks[] ) {
    int sum = 0;
    for(int i=0; i<5; i++) {
        sum += marks[i];
    }
    return sum / 5;
}

int main() {
    int marks[5];

    inputFun(marks);

    int ave= average(marks);
    cout << "Average marks = " << ave << endl;

    return 0;
}




