/*
Given the number n (n >=0), find its factorial. Factorial of n is defined as 1 x 2 x … x n. For n = 0, factorial is 1. We are going to discuss iterative and recursive programs in this post.

Examples:

Input: n = 5
Output: 120
Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120


Input: n = 4
Output: 24
Explanation: 4! = 4 * 3 * 2 * 1 = 24


Input: n = 0
Output: 1


Input: n = 1
Output: 1
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Return -1 for negative input
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i; // Multiply result by each number from 2 to n
    }
    return result;
}

int recursiveFactorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Return -1 for negative input
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * recursiveFactorial(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Iterative approach
    cout << "Factorial of " << n << " (iterative): " << factorial(n) << endl;

    // Recursive approach
    cout << "Factorial of " << n << " (recursive): " << recursiveFactorial(n) << endl;

    return 0;
}