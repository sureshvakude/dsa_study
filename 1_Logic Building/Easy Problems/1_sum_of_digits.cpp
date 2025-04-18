/*
Given a number n, find the sum of its digits.

Examples : 

Input: n = 687
Output: 21
Explanation: The sum of its digits are: 6 + 8 + 7 = 21


Input: n = 12
Output: 3
Explanation: The sum of its digits are: 1 + 2 = 3
*/

#include <iostream>
using namespace std;

// Time Complexity: O(log n) - because we are dividing the number by 10 in each iteration
// Space Complexity: O(1) - we are using a constant amount of space
// Function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit to the sum
        n /= 10;       // Remove the last digit from n
    }
    return sum;
}

// Recursive function to calculate the sum of digits of a number
// Time Complexity: O(log n) - because we are dividing the number by 10 in each recursive call
// Space Complexity: O(log n) - due to the recursion stack
int recursiveSumOfDigits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: add the last digit to the sum of the remaining digits
    return n % 10 + recursiveSumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << sumOfDigits(n) << endl;
    return 0;
}