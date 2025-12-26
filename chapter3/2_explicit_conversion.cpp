#include <iostream>
using namespace std;

int main() {
    float price = 99.99;
    
    // Explicit conversion
    int intPrice1 = (int)price;                  // C-style
    int intPrice2 = int(price);                  // Function-style
    int intPrice3 = static_cast<int>(price);    // C++ named cast
    
    cout << intPrice1 << " " << intPrice2 << " " << intPrice3 << endl; // 99 99 99
    return 0;
}
