/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square number pattern.
For a given input 'dim', print a square pattern of dimension 'dim x dim' such that each row 
contains column numbers in increasing order.

Example:
If the user enters 4, the output should be:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user to enter the dimension of the square
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for rows
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop for columns
        for(int col = 1; col <= dim; col = col + 1) {
            cout << col << " "; // Print the current column number
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0; // End of program
}
