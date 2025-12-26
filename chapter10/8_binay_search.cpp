#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end ) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            // second half
            start = mid + 1;
        } else {
            // first half
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "Enter value you want to search: ";
    cin >> key;
    
    cout << binSearch(arr, n, key) << endl;

    return 0;
}