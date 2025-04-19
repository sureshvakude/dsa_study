/*
LCM of two numbers is the smallest number which can be divided by both numbers. 

Input :  a = 12, b = 18
Output :  36
36 is the smallest number divisible by both 12 and 18


Input :  a = 5, b = 11
Output :  55
55 is the smallest number divisible by both 5 and 11
*/

// List of Approaches to find LCM of two numbers
// 1. Using GCD (Greatest Common Divisor) formula: LCM(a, b) = (a * b) / GCD(a, b)
// 2. Using the brute force method: Start from the maximum of the two numbers and check if it is divisible by both numbers

#include <iostream>
using namespace std;

// Approach 1: Using GCD formula
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Approach 2: Brute force method
int lcm_brute_force(int a, int b) {
    int max_num = max(a, b);
    while (true) {
        if (max_num % a == 0 && max_num % b == 0) {
            return max_num;
        }
        max_num++;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM using GCD formula: " << lcm(a, b) << endl;
    cout << "LCM using brute force method: " << lcm_brute_force(a, b) << endl;

    return 0;
}