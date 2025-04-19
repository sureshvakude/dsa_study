/*
Given a positive integer n, find its square root. If n is not a perfect square, then return floor of √n.

Examples : 

Input: n = 4
Output: 2
Explanation: The square root of 4 is 2.


Input: n = 11
Output: 3
Explanation: The square root of 11 lies in between 3 and 4 so floor of the square root is 3.
*/

// List of Approaches to solve the problem:
// 1. Brute Force Approach: Check each number from 1 to n and check if it is a perfect square or not. O(n) time complexity.
// 2. Binary Search Approach: Use binary search to find the square root. O(log n) time complexity.
// 3. Newton's Method: Use Newton's method to find the square root. O(log n) time complexity.
// 4. Using built-in functions: Use built-in functions to find the square root. O(1) time complexity.

#include <iostream>
using namespace std;

// Approach 1: Brute Force Approach
int squareRoot(int n) {
    for (int i = 1; i <= n; i++) {
        if (i * i == n) {
            return i;
        }
    }
    return -1; // If no perfect square found
}

// Approach 2: Binary Search Approach
int floorSqrt(int x) {
    // Base Cases
    if (x == 0 || x == 1)
        return x;

    // Do Binary Search for floor(sqrt(x))
    int start = 1, end = x, ans;
    while (start <= end) {
        int mid = (start + end) / 2;

        // If x is a perfect square
        if (mid * mid == x)
            return mid;

        // Since we need floor, we update answer when mid*mid is
        // smaller than x, and move closer to sqrt(x)
        if (mid * mid < x) {
            start = mid + 1;
            ans = mid;
        } else // If mid*mid is greater than x
            end = mid - 1;
    }
    return ans;
}

// Approach 3: Newton's Method
int newtonSqrt(int n) {
    if (n == 0 || n == 1)
        return n;
    int x = n;
    while (x > n / x) {
        x = (x + n / x) / 2;
    }
    return x;
}

// Approach 4: Using built-in functions
#include <cmath>
int builtInSqrt(int n) {
    return static_cast<int>(sqrt(n));
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The square root of " << n << " using Newton's method is: " << newtonSqrt(n) << endl;
    cout << "The square root of " << n << " using built-in function is: " << builtInSqrt(n) << endl;
    cout << "The square root of " << n << " using brute force is: " << squareRoot(n) << endl;
    cout << "The square root of " << n << " using binary search is: " << floorSqrt(n) << endl;
    return 0;
}