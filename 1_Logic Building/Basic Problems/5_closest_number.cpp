/*
Given two integers n and m (m != 0). Find the number closest to n and divisible by m. If there is more than one such number, then output the one having maximum absolute value.

Examples: 

Input: n = 13, m = 4
Output: 12
Explanation: 12 is the closest to 13, divisible by 4.


Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15, but-18 has the maximum absolute value.
*/

#include <iostream>
#include <cmath>
using namespace std;

int closestNumber(int n, int m) {
    // Calculate the quotient of n divided by m
    int q = n / m;
    
    // Calculate the two closest multiples of m to n
    int lower = q * m; // Closest multiple less than or equal to n
    int upper = (q + 1) * m; // Closest multiple greater than n
    
    // Check which one is closer to n and return it
    if (abs(n - lower) < abs(n - upper)) {
        return lower;
    } else if (abs(n - lower) > abs(n - upper)) {
        return upper;
    } else {
        // If both are equally close, return the one with maximum absolute value
        return (abs(lower) > abs(upper)) ? lower : upper;
    }
}

int main() {
    int n, m;
    cout << "Enter two integers n and m (m != 0): ";
    cin >> n >> m;

    int result = closestNumber(n, m);
    cout << "The closest number to " << n << " that is divisible by " << m << " is: " << result << endl;

    return 0;
}