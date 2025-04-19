/*
Given two numbers a and b, the task is to find the GCD of the two numbers.

Note: The GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them. 

gcd


Examples:

Input: a = 20, b = 28
Output: 4
Explanation: The factors of 20 are 1, 2, 4, 5, 10 and 20. The factors of 28 are 1, 2, 4, 7, 14 and 28. Among these factors, 1, 2 and 4 are the common factors of both 20 and 28. The greatest among the common factors is 4.


Input: a = 60, b = 36
Output: 12
*/

// List of Approaches to solve the problem:
// 1. Brute Force Approach
// 2. Euclidean Algorithm
// 3. Recursive Approach
// 4. Using STL (Standard Template Library) in C++

#include <iostream>
using namespace std;

// Approach 1: Brute Force Approach
// Time Complexity: O(min(a, b)) - we are iterating from 1 to min(a, b) to find the GCD
// Space Complexity: O(1) - we are using a constant amount of space
int gcdBruteForce(int a, int b) {
    int gcd = 1; // Initialize GCD to 1
    for (int i = 1; i <= min(a, b); i++) { // Iterate from 1 to min(a, b)
        if (a % i == 0 && b % i == 0) { // Check if i is a common divisor of a and b
            gcd = i; // Update GCD
        }
    }
    return gcd; // Return the GCD
}

// Approach 2: Euclidean Algorithm
// Time Complexity: O(log(min(a, b))) - the number of iterations is logarithmic in the smaller of the two numbers
// Space Complexity: O(1) - we are using a constant amount of space
int gcdEuclidean(int a, int b) {
    while (b != 0) { // While b is not zero
        int temp = b; // Store the value of b in a temporary variable
        b = a % b; // Update b to be the remainder of a divided by b
        a = temp; // Update a to be the previous value of b
    }
    return a; // Return the GCD (which is now stored in a)
}

// Approach 3: Recursive Approach
// Time Complexity: O(log(min(a, b))) - the number of recursive calls is logarithmic in the smaller of the two numbers
// Space Complexity: O(log(min(a, b))) - due to the recursion stack
int gcdRecursive(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0) {
        return a;
    }
    // Recursive case: call the function with b and the remainder of a divided by b
    return gcdRecursive(b, a % b);
}

// Approach 4: Using STL (Standard Template Library) in C++
// Time Complexity: O(log(min(a, b))) - the number of iterations is logarithmic in the smaller of the two numbers
// Space Complexity: O(1) - we are using a constant amount of space
#include <algorithm> // Include the algorithm header for std::gcd
int gcdSTL(int a, int b) {
    return std::gcd(a, b); // Use the built-in GCD function from the STL
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "GCD (Brute Force): " << gcdBruteForce(a, b) << endl;
    cout << "GCD (Euclidean): " << gcdEuclidean(a, b) << endl;
    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;
    cout << "GCD (STL): " << gcdSTL(a, b) << endl;

    return 0;
}