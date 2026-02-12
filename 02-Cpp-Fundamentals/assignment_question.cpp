#include <iostream>
using namespace std;

int main() {

    /* Question: 1 : In a program, input the side of a square. You have to output the area of 
    the square. 
    Input : n (side) Output 
    : n*n (area)*/
    int side ;
    cout << "Enter n (side of a square): ";
    cin >> side;
    int area = side * side;
    cout << "Area: " << area << endl;


    /*Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a 
    pen and an eraser. You have to output the total cost of the items back to the user as 
    their bill. 
    (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced 
    problem) */
    float pencil, pen, eraser;
    cout << "Enter cost of a Pencil: ";
    cin >> pencil;
    cout << "Enter cost of a Pen: ";
    cin >> pen;
    cout << "Enter cost of an Eraser: ";
    cin >> eraser;

    float total_cost = pencil + pen + eraser;
    cout << "Total cost: " << total_cost << endl;
    cout << "Total cost with 18% GST tax: " << (total_cost + (0.18 * total_cost)) << endl;

    return 0;
}