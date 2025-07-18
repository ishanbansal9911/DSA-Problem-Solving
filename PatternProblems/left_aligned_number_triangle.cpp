/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned number triangle pattern.
For a given input `row`, print a pattern where the i-th row contains numbers
from 1 up to i.

Example:
If the user enters 4, the output should be:
1
1 2
1 2 3
1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store number of rows for the triangle

    // Prompt user for number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Loop for each row
    for(int i = 1; i <= row; i = i + 1){
        // Print numbers 1 to i in the i-th row
        for(int j = 1; j <= i; j = j + 1){
            cout << j << " ";
        }
        cout << endl; // Move to next line after each row
    }
    return 0; // End of program
}
