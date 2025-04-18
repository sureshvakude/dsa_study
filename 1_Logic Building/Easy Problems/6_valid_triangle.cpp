/*
Given three sides, check whether triangle is valid or not. 

Examples:  

Input :  a = 7, b = 10, c = 5 
Output : Valid
We can draw a triangle with the given three edge lengths.

Input : a = 1, b = 10, c = 12 
Output : Invalid
We can not draw a triangle with the given three edge lengths.
*/

#include <iostream>
using namespace std;

bool isValidTriangle(int a, int b, int c) {
    // Check if the sum of any two sides is greater than the third side
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides: ";
    cin >> a >> b >> c;

    if (isValidTriangle(a, b, c)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}