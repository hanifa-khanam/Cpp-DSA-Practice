#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 4, 7, 9, 67};
    int max = arr[0];
    int min = arr[0];

    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;

    return 0;
}