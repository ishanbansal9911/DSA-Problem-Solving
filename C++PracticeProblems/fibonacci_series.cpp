/*
    Problem Statement:
    Write a program to find the nth Fibonacci number.

    The Fibonacci sequence is a series where each number is the sum of the two preceding ones:
    0, 1, 1, 2, 3, 5, 8, ...

    The program asks the user to enter a number 'n' and then calculates the nth Fibonacci number
    using a loop. It handles special cases for n = 1 and n = 2.
*/

#include <iostream>
using namespace std;

int main() {
    int n, a0 = 0, a1 = 1; // 'n' is the position; a0 and a1 store previous two Fibonacci numbers

    // Prompt the user to enter the position 'n'
    cout << "Enter the number: ";
    cin >> n; // Take input from the user

    // Handle special cases for n = 1 and n = 2
    if (n == 1) {
        cout << "Result is: " << a0 << endl;
    }
    else if (n == 2) {
        cout << "Result is: " << a1 << endl;
    }
    else {
        int res; // Variable to store the nth Fibonacci number

        // Loop to calculate the nth Fibonacci number
        for (int i = 3; i <= n; i = i + 1) {
            res = a0 + a1; // Current Fibonacci number is sum of previous two
            a0 = a1;       // Update a0 to previous a1
            a1 = res;      // Update a1 to current result
        }

        cout << "Result is: " << res << endl; // Display the result
    }

    return 0; // Return 0 to indicate successful execution
}
