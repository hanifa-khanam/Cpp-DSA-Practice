#include <iostream>
#include <cstring>
using namespace std;

void reverseChar(char arr[], int n){
    int start = 0;
    int end = n-1;
    while (start <= end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp; 
            start++;
            end--; 
    }
}

int main() {
    char word[] = "code";
    reverseChar(word, strlen(word));

    cout << word << endl;

    return 0;
}