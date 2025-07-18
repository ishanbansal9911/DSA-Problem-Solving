/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square pattern where each row contains the squares
of the column numbers from 1 to 'dim'.

Example:
If the user enters 4, the output should be:
1 4 9 16
1 4 9 16
1 4 9 16
1 4 9 16
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square pattern

    // Prompt the user to enter the dimension of the square
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for each row
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop for each column
        for(int col = 1; col <= dim; col = col + 1) {
            cout << col*col << " "; // Print square of current column number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful execution
}
