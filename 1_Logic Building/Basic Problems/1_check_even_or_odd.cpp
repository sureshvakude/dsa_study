/*
Given a number n, check whether it is even or odd. Return true for even and false for odd.

Examples: 

Input: 2 
Output: true


Input: 5
Output: false
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // using bitwise AND operator to check if the number is even or odd
    // If the last bit is 0, the number is even; if it's 1, the number is odd
    if (n & 1 == 0) {
        cout << "true" << endl; // Even
    } else {
        cout << "false" << endl; // Odd
    }

    // Alternatively, using shift operator to check if the number is even or odd
    // This method checks if the number is equal to itself when right-shifted by 1 and then left-shifted back
    if(n == (n >> 1) << 1) {
        cout << "true" << endl; // Even
    } else {
        cout << "false" << endl; // Odd
    }

    return 0;
}