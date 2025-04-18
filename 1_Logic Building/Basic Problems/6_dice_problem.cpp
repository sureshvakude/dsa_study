/*
You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.

Examples:

Input: n = 2
Output: 5
Explanation: For dice facing number 5 opposite face will have the number 2.


Input: 6 = 6
Output: 1
Explanation: For dice facing number 6 opposite face will have the number 1.
*/

#include <iostream>
using namespace std;

int oppositeFace(int n) {
    // The opposite face of a dice can be calculated using the formula:
    // opposite_face = 7 - n
    return 7 - n;
}

int main() {
    int n;
    cout << "Enter the number on the face of the dice (1 to 6): ";
    cin >> n;

    if (n < 1 || n > 6) {
        cout << "Invalid input! Please enter a number between 1 and 6." << endl;
        return 1;
    }

    int result = oppositeFace(n);
    cout << "The number on the opposite face of the dice is: " << result << endl;

    return 0;
}