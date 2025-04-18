/*
Given a number n, find the sum of the first n natural numbers.

Examples : 

Input: n = 3
Output: 6
Explanation: Note that 1 + 2 + 3 = 6

Input  : 5
Output : 15 
Explanation : Note that 1 + 2 + 3 + 4 + 5 = 15
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Formula for sum of first n natural numbers
    int sum = (n * (n + 1)) / 2;
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    // Alternative method using loop
    int sum_loop = 0;
    for (int i = 1; i <= n; i++) {
        sum_loop += i;
    }
    cout << "Sum of first " << n << " natural numbers using loop is: " << sum_loop << endl;
    return 0;
}