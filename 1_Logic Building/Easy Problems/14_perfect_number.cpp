/*
A number is a perfect number if is equal to the sum of its proper divisors, that is, the sum of its positive divisors excluding the number itself. The task is to find whether a given positive integer n is perfect or not.
Examples: 

Input: n = 15
Output: false
Divisors of 15 are 1, 3 and 5. Sum of divisors is 9 which is not equal to 15.

Input: n = 6
Output: true
Divisors of 6 are 1, 2 and 3. Sum of divisors is 6.
*/

// List of Approaches to find Perfect Number
// 1. Brute Force Method: Check all numbers from 1 to n-1 and find the sum of divisors
// 2. Optimized Method: Check all numbers from 1 to sqrt(n) and find the sum of divisors

#include <iostream>
using namespace std;

// Approach 1: Brute Force Method
bool isPerfectNumberBruteForce(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

// Approach 2: Optimized Method
bool isPerfectNumberOptimized(int n) {
    if (n < 2) return false; // 1 is not a perfect number
    int sum = 1; // 1 is a proper divisor of any number
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) { // Avoid adding the square root twice
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPerfectNumberBruteForce(n)) {
        cout << n << " is a perfect number (Brute Force Method)." << endl;
    } else {
        cout << n << " is not a perfect number (Brute Force Method)." << endl;
    }

    if (isPerfectNumberOptimized(n)) {
        cout << n << " is a perfect number (Optimized Method)." << endl;
    } else {
        cout << n << " is not a perfect number (Optimized Method)." << endl;
    }

    return 0;
}