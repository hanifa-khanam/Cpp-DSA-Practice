#include <iostream>
using namespace std;

int main() {
    float eng;
    float math;
    float cs;

    cout << "Enter English marks: ";
    cin >> eng;

    cout << "Enter Math marks: ";
    cin >> math;

    cout << "Enter Computer marks: ";
    cin >> cs;
 
    float avg = (eng + math + cs) / 3;
    cout << "Average Marks: " << avg << endl;

    return 0;
}