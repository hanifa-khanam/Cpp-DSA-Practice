#include <iostream> 
using namespace std;

int main() {

    // step 1: Allocate memory dynamically
    int* p = new int;

    // step 2: Assign value
    *p = 50;

    // Step 3: Use the value
    cout << "Value: " << *p << endl;

    // Step 4: Free memory
    delete p; 
    p = NULL;

    return 0;
}