// Check if a number is prime or not 
// #include <iostream>
// using namespace std;
// int main() 
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     for(int i=2; i<=n-1; i++) 
//     {
//         if(n % i == 0) {
//             cout << n << " is composite number." << endl;
//             break;
//         }
//         else {
//             cout << n << " is a prime number." << endl;
//             break;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number: " ;
//     cin >> n;
//     bool isPrime = true;

//     for(int i=2; i<=n-1; i++) 
//     {
//         if(n % i == 0) 
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime) 
//     {
//         cout << "Number is prime" << endl;
//     }
//     else {
//         cout << "Number is not prime" << endl;
//     }
//     return 0;

// }


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter number: " ;
    cin >> n;
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++) 
    {
        if(n % i == 0) 
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime) 
    {
        cout << "Number is prime" << endl;
    }
    else {
        cout << "Number is not prime" << endl;
    }
    return 0;

}