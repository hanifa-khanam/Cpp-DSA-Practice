// Write a program where user cn keep entring a numbers till they enter a multiple of 10
#include <iostream>
using namespace std;
int main() 
{
    int num;
    do
    {
        cout << "Enter number: ";
        cin >> num;
        if(num % 10 == 0) {
            break;
        }
        cout << "YOu entered: " << num << endl;
    } while (true);
    

}