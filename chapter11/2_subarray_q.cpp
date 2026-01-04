#include <iostream>
using namespace std;

// Print only subarrays of length 2
void printArray(int arr[], int n) {
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            if(end - start + 1 == 2) {  // logic: if end = 4, start = 3 so 4-3+1 = 2
                for(int i=start; i<=end; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    printArray(arr, 5);
    return 0;
}