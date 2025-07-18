/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square character pattern.
For a given input `dim`, each row should display the lowercase English letters
from 'a' up to the letter corresponding to 'a' + (dim - 1), in order.

Example:
If the user enters 4, the output should be:
a b c d
a b c d
a b c d
a b c d
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user for input
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for rows
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop for columns
        for(int col = 1; col <= dim; col = col + 1) {
            cout << (char)('a' + (col - 1)) << " "; // Print the corresponding letter for the current column
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful completion
}
