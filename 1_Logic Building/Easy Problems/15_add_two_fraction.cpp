/*
Given two integer arrays a[] and b[] containing two integers each representing the numerator and denominator of a fraction respectively. The task is to find the sum of the two fractions and return the numerator and denominator of the result.

Examples : 

Input:  a = [1, 2] , b = [3, 2] 
Output: [2, 1] 
Explanation: 1/2 + 3/2 = 2/1


Input:  a = [1, 3] , b = [3, 9] 
Output: [2, 3] 
Explanation: 1/3 + 3/9 = 2/3   


Input:  a = [1, 5] , b = [3, 15] 
Output: [2, 5] 
Explanation: 1/5 + 3/15 = 2/5 
*/

#include <iostream>
#include <vector>
#include <numeric> // for std::gcd
using namespace std;

vector<int> addFraction(vector<int> a, vector<int> b) {
    // Calculate the numerator and denominator of the sum
    int numerator = a[0] * b[1] + b[0] * a[1];
    int denominator = a[1] * b[1];

    // Reduce the fraction to its simplest form
    int gcd = std::gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    return {numerator, denominator};
}

int main() {
    vector<int> a = {1, 2};
    vector<int> b = {3, 2};
    vector<int> result = addFraction(a, b);
    cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl; // Output: [2, 1]
    return 0;
}