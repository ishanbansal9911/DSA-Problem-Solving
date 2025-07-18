/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned triangle pattern of lowercase alphabets.
For a given input 'row', each row should contain the same alphabet letter, starting from 'a' for the first row,
'b' for the second row, and so on.

Example:
If the user enters 4, the output should be:
a
b b
c c c
d d d d
*/

#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store the number of rows for the triangle

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Loop for each row
    for(int i = 1; i <= row; i = i + 1){
        // Print the character for the current row ('a'+(i-1)), i times
        for(int j = 1; j <= i; j = j + 1){
            cout << (char)('a' + (i - 1)) << " ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
