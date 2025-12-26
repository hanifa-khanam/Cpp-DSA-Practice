#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    // cout << "ptr: " << ptr << endl;
    // --ptr;
    // cout << "--ptr: " << ptr << endl;
    // cout << "ptr: " << ptr << endl;
    // ++ptr;
    // cout << "++ptr: " << ptr << endl;



    /*Adding constant to a pointer*/
    cout << "ptr: " << ptr << endl;
    cout << "ptr + 3: " << (ptr + 3) << endl;
    cout << "ptr - 3: " << (ptr - 3) << endl;

    
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = &arr[4];   // points to 50
    int *p2 = &arr[1];   // points to 20
    cout << p1 - p2 << endl;


    return 0;
}