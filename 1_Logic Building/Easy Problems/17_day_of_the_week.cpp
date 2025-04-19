/*
Given a date (day, month, year), the task is to determine the day of the week on which that date falls. The function should be able to compute the day for any date in the past or future. The function should return values from 0 to 6 where 0 means Sunday, 1 Monday and so on.

Examples:

Input: d = 30, m = 8, y = 2010
Output: 1
Explanation: 30th August 2010 was a Monday.


Input: d = 15, m = 6, y = 1995
Output: 4
Explanation: 15th June 1995 was a Thursday.


Input: d = 29, m = 2, y = 2016
Output: 1
Explanation: 26th January was a Monday.
*/

// List of Approaches:
// 1. Zeller's Congruence: A mathematical algorithm to calculate the day of the week for any date.
// 2. Using a custom algorithm: A manual calculation method to determine the day of the week based on known reference dates.

#include <iostream>
using namespace std;

// Approach 1: Zeller's Congruence
int dayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y--;
    }
    int k = y % 100;
    int j = y / 100;
    int f = d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 - 2 * j;
    return (f % 7 + 7) % 7; // Ensure the result is non-negative
}

// Approach 2: Custom Algorithm
int dayOfWeekCustom(int d, int m, int y) {
    // Array to hold the number of days in each month
    int monthDays[] = {0, 3, 0, 2, 3, 2, 3, 3, 2, 3, 2, 3};
    // Adjust for leap year
    if (m < 3) {
        y--;
    }
    // Calculate the day of the week
    return (y + y / 4 - y / 100 + y / 400 + monthDays[m] + d) % 7;
}

int main() {
    int d, m, y;
    cout << "Enter date (dd mm yyyy): ";
    cin >> d >> m >> y;

    // Using Zeller's Congruence
    int day1 = dayOfWeek(d, m, y);
    cout << "Day of the week (Zeller's): " << day1 << endl;

    // Using Custom Algorithm
    int day2 = dayOfWeekCustom(d, m, y);
    cout << "Day of the week (Custom): " << day2 << endl;

    return 0;
}