/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square pattern where each row contains the column numbers 
in decreasing order starting from 'dim' down to 1.

Example:
If the user enters 4, the output should be:
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user to enter the dimension of the square
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop runs for each row
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop prints column numbers in decreasing order
        for(int col = dim; col >= 1; col = col - 1) {
            cout << col << " "; // Print the current column number
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
