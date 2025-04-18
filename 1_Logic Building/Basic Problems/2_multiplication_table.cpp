/*
Given a number n, we need to print its table. 

Examples : 

Input:  5
Output: 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50


Input:  2
Output: 
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20

*/

#include <iostream>
using namespace std;

void printMultiplicationTable(int n, int i = 1){
    if (i > 10) return; // Base case: stop after 10 iterations
    cout << n << " * " << i << " = " << n * i << endl;
    printMultiplicationTable(n, i + 1); // Recursive call with incremented i
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Loop to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    // Alternatively, you can use the recursive function
    printMultiplicationTable(n); // Call the recursive function

    return 0;
}