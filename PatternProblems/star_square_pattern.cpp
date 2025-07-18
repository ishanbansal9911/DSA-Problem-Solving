/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square pattern of asterisks ('*').
The size of the square (number of rows and columns) should be input by the user.

Example:
If the user enters 4, the output should be:
* * * *
* * * *
* * * *
* * * *
*/

#include<iostream>
using namespace std;

int main() {
    int dim; // Variable to store the dimension of the square
    
    // Ask the user to input the dimension of the square
    cout << "Enter the dimension of the square: ";
    cin >> dim;

    // Outer loop for rows
    for(int row = 1; row <= dim; row = row + 1) {
        // Inner loop for columns
        for(int col = 1; col <= dim; col = col + 1) {
            cout << "* "; // Print an asterisk followed by a space
        }
        cout << endl; // Move to the next line after each row
    }
    
    return 0; // Indicate successful execution
}
