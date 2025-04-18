/*
Given an Integer n, find the reverse of its digits.

Examples:  

Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221.


Input: n = 200
Output: 2
Explanation: By reversing the digits of number, number will change into 2.


Input: n = 12345 
Output: 54321
Explanation: By reversing the digits of number, number will change into 54321.
*/

#include <iostream>
using namespace std;

// Time Complexity: O(log n) - The number of digits in n determines the number of iterations in the while loop.
// Space Complexity: O(1) - Only a constant amount of space is used for the variables.
// Note: The function assumes n is a positive integer. If n can be negative, additional handling is needed.
// The function does not handle leading zeros in the reversed number, as they are dropped in integer representation.
int reverseDigits(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10; // Append the last digit of n to reversed
        n /= 10; // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    int reversed = reverseDigits(n);
    cout << "Reversed digits: " << reversed << endl;
    
    return 0;
}