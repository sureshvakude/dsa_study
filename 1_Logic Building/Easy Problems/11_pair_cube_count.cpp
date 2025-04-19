/*
Given n, count all ‘a’ and ‘b’ that satisfy the condition a^3 + b^3 = n. Where (a, b) and (b, a) are considered two different pairs

Examples: 

Input: n = 9
Output: 2
Explanation: 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9


Input: n = 28
Output: 2
Explanation: 1^3 + 3^3 = 28 and 3^3 + 1^3 = 28
*/

// List of Approaches
// 1. Brute Force: Check all pairs of (a, b) such that a^3 + b^3 = n
// 2. Optimized Brute Force: Check pairs only up to the cube root of n
// 3. Hashing: Store the cubes of numbers in a hash table and check for pairs

#include <iostream>
#include <cmath>
using namespace std;

// Approach 1: Brute Force
int countPairsBruteForce(int n) {
    int count = 0;
    for (int a = 0; a <= cbrt(n); ++a) {
        for (int b = 0; b <= cbrt(n); ++b) {
            if (a * a * a + b * b * b == n) {
                count++;
            }
        }
    }
    return count;
}

// Approach 2: Optimized Brute Force
int countPairsOptimized(int n) {
    int count = 0;
    for (int a = 0; a <= cbrt(n); ++a) {
        int b = cbrt(n - a * a * a);
        if (a * a * a + b * b * b == n) {
            count += 2; // (a, b) and (b, a)
        }
    }
    return count;
}

// Approach 3: Hashing
#include <unordered_map>
int countPairsHashing(int n) {
    unordered_map<int, int> cubeMap;
    int count = 0;

    for (int i = 0; i <= cbrt(n); ++i) {
        cubeMap[i * i * i]++;
    }

    for (auto& pair : cubeMap) {
        int a = pair.first;
        int b = n - a;
        if (cubeMap.find(b) != cubeMap.end()) {
            count += cubeMap[a] * cubeMap[b];
        }
    }

    return count / 2; // To avoid double counting
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Count using Brute Force: " << countPairsBruteForce(n) << endl;
    cout << "Count using Optimized Brute Force: " << countPairsOptimized(n) << endl;
    cout << "Count using Hashing: " << countPairsHashing(n) << endl;

    return 0;
}