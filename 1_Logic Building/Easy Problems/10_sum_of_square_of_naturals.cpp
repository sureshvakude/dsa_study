/*
Given a positive integer n, we have to find the sum of squares of first n natural numbers. 
Examples : 

Input : n = 2
Output: 5
Explanation: 1^2+2^2 = 5


Input : n = 8
Output: 204
Explanation :  1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 = 204 
*/

// List of Approaches to solve the problem
// 1. Brute Force Approach: Iterate from 1 to n and calculate the sum of squares of each number.
// 2. Mathematical Approach: Use the formula n*(n+1)*(2*n+1)/6 to calculate the sum of squares of first n natural numbers.

#include <iostream>
using namespace std;

// Approach 1: Brute Force Approach
int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

// Approach 2: Mathematical Approach
int sumOfSquaresFormula(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Using Brute Force Approach
    int result1 = sumOfSquares(n);
    cout << "Sum of squares using brute force approach: " << result1 << endl;

    // Using Mathematical Approach
    int result2 = sumOfSquaresFormula(n);
    cout << "Sum of squares using mathematical approach: " << result2 << endl;

    return 0;
}