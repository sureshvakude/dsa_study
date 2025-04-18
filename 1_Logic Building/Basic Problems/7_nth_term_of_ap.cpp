/*
Given two integers a1 and a2, the first and second terms of an Arithmetic Series respectively, the problem is to find the nth term of the series. 
Examples :

Input : a1 = 2,  a2 = 3,  n = 4
Output : 5
Explanation : The series is 2, 3, 4, 5, 6, ....   , thus the 4th term is 5. 

Input : a1 = 1, a2 = 3, n = 10
Output : 19
Explanation:  The series is: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21..... Thus,10th term is 19.
*/

#include <iostream>
using namespace std;

int nthTermOfAP(int a1, int a2, int n) {
    // Calculate the common difference
    int d = a2 - a1;
    
    // Calculate the nth term using the formula: a_n = a1 + (n - 1) * d
    int nthTerm = a1 + (n - 1) * d;
    
    return nthTerm;
}

int main() {
    int a1, a2, n;
    cout << "Enter the first term (a1): ";
    cin >> a1;
    cout << "Enter the second term (a2): ";
    cin >> a2;
    cout << "Enter the term number (n): ";
    cin >> n;

    // Call the function to find the nth term of the arithmetic series
    // and print the result
    int result = nthTermOfAP(a1, a2, n);
    cout << "The " << n << "th term of the arithmetic series is: " << result << endl;

    // Alternatively, using the for loop method
    int term = a1;
    for (int i = 1; i < n; i++) {
        term += (a2 - a1); // Increment by the common difference
    }
    cout << "The " << n << "th term of the arithmetic series using for loop is: " << term << endl;

    return 0;
}