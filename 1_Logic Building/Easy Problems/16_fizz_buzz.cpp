/*
Given an integer n, for every positive integer i <= n, the task is to print,

“FizzBuzz” if i is divisible by 3 and 5,
“Fizz” if i is divisible by 3,
“Buzz” if i is divisible by 5
“i” as a string, if none of the conditions are true.
Examples:

Input: n = 3
Output: [“1”, “2”, “Fizz”]


Input: n = 10
Output: [“1”, “2”, “Fizz”, “4”, “Buzz”, “Fizz”, “7”, “8”, “Fizz”, “Buzz”]


Input: n = 20
Output: [“1”, “2”, “Fizz”, “4”, “Buzz”, “Fizz”, “7”, “8”, “Fizz”, “Buzz”, “11”, “Fizz”, “13”, “14”, “FizzBuzz”, “16”, “17”, “Fizz”, “19”, “Buzz”]
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}

vector<string> fizzBuzzUsingString(int n){
    vector<string> result;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        if (i % 3 == 0) str = "Fizz";
        if (i % 5 == 0) str = (str == "Fizz") ? "FizzBuzz" : "Buzz";
        result.push_back(str);
    }
    return result;
}

int main() {
    int n = 10; // Example input
    vector<string> result = fizzBuzz(n);
    for (const string& str : result) {
        cout << str << " ";
    }
    cout << endl; // Output: [“1”, “2”, “Fizz”, “4”, “Buzz”, “Fizz”, “7”, “8”, “Fizz”, “Buzz”]
    return 0;
}
