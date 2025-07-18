/*
    Problem Statement:
    Write a program to print the first 'n' natural numbers in reverse order.

    The program prompts the user to enter a number 'n',
    then uses a for loop to print numbers from 'n' down to 1,
    each separated by a space.
*/

#include <iostream>
using namespace std;

int main() {
    int n; // Variable to store the number entered by the user

    // Ask the user to enter a number
    cout << "Enter the number: ";
    cin >> n; // Take input from the user

    // Loop from 'n' down to 1
    for (int i = n; i >= 1; i = i - 1) {
        cout << i << " "; // Print the current number followed by a space
    }

    cout << endl; // Print a newline at the end for clean output formatting

    return 0; // Return 0 to indicate successful program execution
}
