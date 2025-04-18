/*
Given two positive numbers x and y, check if y is a power of x or not.
Examples : 

Input:  x = 10, y = 1
Output: True
x^0 = 1


Input:  x = 10, y = 1000
Output: True
x^3 = 1


Input:  x = 10, y = 1001
Output: False
*/

#include <iostream>
using namespace std;

bool isPower(int x, int y) {
    if (y == 1) return true; // x^0 = 1
    if (x == 1) return y == 1; // 1^n = 1 for any n

    while (y > 1) {
        if (y % x != 0) return false; // y is not divisible by x
        y /= x; // divide y by x
    }
    return true; // y is a power of x
}

int main() {
    int x, y;
    cout << "Enter two positive numbers x and y: ";
    cin >> x >> y;

    if (isPower(x, y)) {
        cout << y << " is a power of " << x << endl;
    } else {
        cout << y << " is not a power of " << x << endl;
    }

    return 0;
}