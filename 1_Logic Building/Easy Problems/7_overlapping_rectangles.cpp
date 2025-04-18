/*
Given two rectangles, find if the given two rectangles overlap or not.
Note that a rectangle can be represented by two coordinates, top left and bottom right. So mainly we are given following four coordinates. 
l1: Top Left coordinate of first rectangle. 
r1: Bottom Right coordinate of first rectangle. 
l2: Top Left coordinate of second rectangle. 
r2: Bottom Right coordinate of second rectangle.

rectanglesOverlap

Examples:
Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { 5, 5 }, r2 = { 15, 0 }
Output: Rectangles Overlap


Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { -10, 5 }, r2 = { -1, 0 }
Output: Rectangles Don’t Overlap
*/

#include <iostream>
#include <utility> // for std::pair
#include <algorithm> // for std::max, std::min
using namespace std;

bool doOverlap(pair<int, int> l1, pair<int, int> r1, pair<int, int> l2, pair<int, int> r2) {
    // If one rectangle is to the left of the other
    if (l1.first >= r2.first || l2.first >= r1.first) {
        return false;
    }

    // If one rectangle is above the other
    if (l1.second <= r2.second || l2.second <= r1.second) {
        return false;
    }

    return true;
}

int main() {
    pair<int, int> l1 = {0, 10}, r1 = {10, 0}; // First rectangle
    pair<int, int> l2 = {5, 5}, r2 = {15, 0}; // Second rectangle

    if (doOverlap(l1, r1, l2, r2)) {
        cout << "Rectangles Overlap" << endl;
    } else {
        cout << "Rectangles Don’t Overlap" << endl;
    }

    return 0;
}