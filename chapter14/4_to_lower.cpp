#include <iostream>
#include <cstring>
using namespace std;

void toLower(char arr[], int n) {

    for(int i=0; i<n; i++) {
        char ch = arr[i];
        if(ch >= 'a' && ch <= 'z') {
            continue;
        } else {
            arr[i] = ch - 'A' + 'a';
        }
    }
}

int main() {
    char word[] = "BAnAna";
    toLower(word, strlen(word));

    cout << word << endl;

    return 0;
}