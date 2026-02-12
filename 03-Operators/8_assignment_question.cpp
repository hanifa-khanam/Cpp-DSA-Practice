#include <iostream>
using namespace std;

int main() { 

    int x = 2, y = 5; 
    int exp1 = (x * y / x); 
    int exp2 = (x * (y / x)); 
    cout << exp1 << endl;
    cout << exp2 << endl;



    int a = 10, b = 5; 
    int stat1 = (b * (a / b + a / b)); 
    int stat2 = (b * a / b + b * a / b); 
    cout << stat1 << " "; 
    cout << stat2 << "\n"; 
    


    int c = 200, d = 50, z = 100; 
    if(c > d && d > z){ 
    cout << "Hello" << endl; 
    } 
    if(z > d && z < c){ 
    cout << "C++" << endl; 
    }
    if((d+200) < c && (d+150) < z){ 
    cout << "Hello C++" << endl; 
    } 

    return 0;
} 