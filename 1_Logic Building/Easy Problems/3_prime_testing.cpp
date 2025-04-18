/*
Given a positive integer, check if the number is prime or not. A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Examples of the first few prime numbers are {2, 3, 5, …}
Examples : 

Input:  n = 11
Output: true


Input:  n = 15
Output: false


Input:  n = 1
Output: false
*/

#include <iostream>
using namespace std;

// Time Complexity: O(sqrt(n)) - The loop runs up to the square root of n, which is efficient for prime checking.
// Space Complexity: O(1) - Only a constant amount of space is used for the variables.
// Note: The function assumes n is a positive integer. If n can be negative or zero, additional handling is needed.
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) { // Check divisibility from 2 to sqrt(n)
        if (n % i == 0) return false; // If n is divisible by i, it's not prime
    }
    return true; // If no divisors were found, n is prime
}

// Alternative approach using recursion
// Time Complexity: O(sqrt(n)) - The recursive function checks divisibility up to the square root of n.
// Space Complexity: O(n) - The maximum depth of the recursion stack can go up to n in the worst case.
bool isPrimeRecursive(int n, int i = 2){
    if(n <= 1) return false; // 0 and 1 are not prime numbers
    if(i * i > n) return true; // If no divisors were found, n is prime
    if(n % i == 0) return false; // If n is divisible by i, it's not prime
    return isPrimeRecursive(n, i + 1); // Check the next number
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    return 0;
}

