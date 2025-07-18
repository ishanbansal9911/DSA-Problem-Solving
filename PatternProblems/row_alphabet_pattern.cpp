/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square pattern using lowercase English letters.
For a given input `dim`, each row should contain the same letter, starting from 'a' for the first row,
'b' for the second row, and so on.

Example:
If the user enters 4, the output should be:
a a a a
b b b b
c c c c
d d d d
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user to enter the dimension
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for rows
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop for columns
        for(int col = 1; col <= dim; col = col + 1) {
            cout << (char)('a' + (row - 1)) << " "; // Print the character for the current row
        }
        cout << endl; // Move to next line after each row
    }

    return 0; // End of program
}
