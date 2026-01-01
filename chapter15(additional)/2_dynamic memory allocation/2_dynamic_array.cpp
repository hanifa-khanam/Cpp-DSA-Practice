#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // step 1: Allocate dynamic array 
    int* arr = new int[n];

    // step 2: Input values
    for(int i=0; i<n; i++) {
        arr[i] = i * 10;
    }

    // step 3: print values 
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    // step 4: Free Memory
    delete[] arr;
    arr = NULL;

    return 0;
}