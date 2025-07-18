/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square number pattern.
For a given input 'dim', print a square pattern of dimension 'dim x dim' where each row 
contains only its row number.

Example:
If the user enters 4, the output should be:
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user for input
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for each row
    for (int row = 1; row <= dim; row = row + 1) {
        // Inner loop for each column in the current row
        for (int col = 1; col <= dim; col = col + 1) {
            cout << row << " "; // Print the current row number
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // Successful program termination
}
