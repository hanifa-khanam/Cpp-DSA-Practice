#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // copy string from one str to other
    char str1[50];
    char str2[50] = "Hello World";
    strcpy(str1, str2);
    cout << str1 << endl;
    // cout << str2 << endl;  // str2 remain same


    // concatenate (join) to strings
    char str3[] = "Hanifa ";
    char str4[] = "Khanam";
    strcat(str3, str4);
    cout << str3 << endl;
    // cout << str4 << endl; // remain same

    // comparing two strings based on values (return any negative value if first str is smaller, if greater positvie and if both are same return 0 )
    char str5[] = "xyz";
    char str6[] = "abc";
    cout << strcmp(str5, str6) << endl;
 
    return 0;
} 