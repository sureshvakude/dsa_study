/*
You are given two coordinates (x1, y1) and (x2, y2) of a two-dimensional graph. Find the distance between them.

Examples: 

Input : x1, y1 = (3, 4)
           x2, y2 = (7, 7)
Output : 5

Input : x1, y1 = (3, 4) 
           x2, y2 = (4, 3)
Output : 1.41421
*/

#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;

// Time Complexity: O(1) - The distance calculation involves a constant number of arithmetic operations.
// Space Complexity: O(1) - Only a constant amount of space is used for the variables.
// Note: The function assumes the coordinates are in a two-dimensional space and uses the Euclidean distance formula.
float distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Calculate the Euclidean distance between two points
}

int main() {
    int x1, y1, x2, y2;
    cout << "Enter coordinates (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates (x2, y2): ";
    cin >> x2 >> y2;

    float dist = distance(x1, y1, x2, y2);
    cout << "Distance between the points: " << dist << endl;

    return 0;
}