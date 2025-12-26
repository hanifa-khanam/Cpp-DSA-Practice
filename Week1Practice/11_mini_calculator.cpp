#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char opera;
    cout << "Enter first num: " ;
    cin >> num1;
    cout << "Enter second num: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> opera;

    switch (opera)
    {
    case '+': 
         cout << "Addition: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication: " << num1 * num2 << endl;
        break;
    case '/':
        if(num2 != 0){
            cout << "Division: " << num1/num2 << endl;
        } else {
            cout << "Division by zero is not allowed\n";
        }
        break;
    default:
        cout << "Invalid operator!\n";
        break;
    }
    
    return 0;
}



