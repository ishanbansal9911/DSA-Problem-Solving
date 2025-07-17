/*
    Problem Statement:
    Write a program to calculate the result of a number raised to a given power.

    The program asks the user to enter a base number 'n' and an exponent 'pow'.
    It then calculates n^pow using a for loop and displays the result.
*/

#include <iostream>
using namespace std;

int main() {
    int n, pow, res; // Declare variables: n = base number, pow = exponent, res = result

    // Prompt the user to enter the base number
    cout << "Enter the number: ";
    cin >> n; // Take input for the base number

    // Prompt the user to enter the power
    cout << "Enter the power: ";
    cin >> pow; // Take input for the exponent

    res = n; // Initialize result with base number

    // Multiply 'n' by itself (pow - 1) times
    for (int i = 2; i <= pow; i = i + 1) {
        res = res * n; // Multiply the result by the base number each iteration
    }

    // Display the final result
    cout << "Result: " << res << endl;

    return 0; // Return 0 to indicate successful program execution
}
