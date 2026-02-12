#include <iostream> 
using namespace std;

char nextAlphabet(char a) {
    char next_ch;
    if(a == 'z') {
        return 'a';
    } else {
        next_ch = a + 1;
    }
    return next_ch;
}

int main() {

    char ch;
    cout << "Enter alphabet: ";
    cin >> ch;

    char result = nextAlphabet(ch);
    cout << "Next alphabet after " << ch << " is " << result << ".\n";
    return 0;
}



