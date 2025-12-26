#include <iostream>
using namespace std;

void decToBin(int decNum) {
    int n = decNum;
    int power = 1;
    int binNum = 0;
     
    while(n > 0) {
        int remainder = n % 2;
        binNum += remainder * power;
        n = n / 2;
        power = power * 10;
    }
    cout << "binary of " << decNum << " = " << binNum << endl;
}

int main() {
    decToBin(10);   
    return 0;
}