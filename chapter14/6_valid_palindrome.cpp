#include <iostream>
#include <cstring>
using namespace std;

bool valid_Palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    bool palindrome = true;

    while (start < end){ 
        if(str[start++] != str[end--]) { 
            cout << "not valid palindrome.\n";
           return false;
        } 

    }
    cout  << "valid palindrome.\n";
    return true;
}


int main() {
    char word[] = "racecar";
    valid_Palindrome(word);
    

    char word2[] = "apple";
    valid_Palindrome(word2);
    

    return 0;
}