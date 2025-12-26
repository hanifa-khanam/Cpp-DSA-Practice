#include <iostream>
using namespace std;

int main() {
    int arr[5] = {7, 5, 2, 1, 3};
    int len = sizeof(arr) / sizeof(int);
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    cout << "\n* * * * * * * *" <<  endl;
    cout << endl;

    // statically allocated memory i.e at compile time the memory is allocated
    int lst[5];
    int n = sizeof(lst) / sizeof(int);
    for(int i=0; i<n; i++) {
        cout << "Enter number: "; 
        cin >> lst[i];
    }
    for(int i=0; i<n; i++) {
        cout << lst[i] << " ";
    }
    cout << endl;
    cout << "\n* * * * * * * *" <<  endl;
    cout << endl;

    // Dynamically allocated memory at runtime i.e taking the size of array from the user at run time and allocating the size at runtime
    int lenofarr;
    cout << "Enter size of array: ";
    cin >> lenofarr;
    int marks[lenofarr];
    for(int i=0; i<lenofarr; i++) {
        cout << "Enter " << i << " number: ";
        cin >> marks[i];
    }
    for(int i=0; i<lenofarr; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "\n* * * * * * *\n";
    cout << endl;
    return 0;
}