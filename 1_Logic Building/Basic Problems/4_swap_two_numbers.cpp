/*
Given two numbers a and b, the task is to swap them.

Examples:

Input: a = 2, b = 3
Output: a = 3, b = 2

Input: a = 20, b = 0
Output: a = 0, b = 20

Input: a = 10, b = 10
Output: a = 10, b = 10 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Swapping without using a temporary variable
    a = a + b; // Step 1: a now contains the sum of a and b
    b = a - b; // Step 2: b now contains the original value of a
    a = a - b; // Step 3: a now contains the original value of b
    cout << "After swapping without temp: a = " << a << ", b = " << b << endl;

    // Swapping using bitwise XOR operator
    a = a ^ b; // Step 1: a now contains the XOR of a and b
    b = a ^ b; // Step 2: b now contains the original value of a
    a = a ^ b; // Step 3: a now contains the original value of b
    cout << "After swapping using XOR: a = " << a << ", b = " << b << endl;

    // Swapping using multiplication and division (only if both numbers are non-zero)
    if (a != 0 && b != 0) {
        a = a * b; // Step 1: a now contains the product of a and b
        b = a / b; // Step 2: b now contains the original value of a
        a = a / b; // Step 3: a now contains the original value of b
        cout << "After swapping using multiplication/division: a = " << a << ", b = " << b << endl;
    } else {
        cout << "Cannot swap using multiplication/division as one of the numbers is zero." << endl;
    }

    // Swapping using STL swap function
    swap(a, b);
    cout << "After swapping using STL swap: a = " << a << ", b = " << b << endl;

    return 0;
}