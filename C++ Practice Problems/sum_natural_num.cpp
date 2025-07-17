/*
    Problem Statement:
    Write a program to calculate the sum of the first 'n' natural numbers.

    The program asks the user to enter a number 'n' and then calculates
    the sum from 1 to 'n' using a for loop. Finally, it displays the result.
*/

#include <iostream>
using namespace std;

int main() {
    int n, res = 0; // 'n' stores the user input, 'res' stores the sum (initialized to 0)

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> n; // Take input from the user

    // Loop to calculate the sum of numbers from 1 to 'n'
    for (int i = 1; i <= n; i = i + 1) {
        res = res + i; // Add current number 'i' to the result
    }

    // Display the result
    cout << "Result: " << res << endl;

    return 0; // Return 0 to indicate successful execution
}
