/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned triangle star pattern.
For a given input `row`, print a pattern where the first row has 1 star,
the second row has 2 stars, and so on.

Example:
If the user enters 4, the output should be:
* 
* * 
* * * 
* * * *
*/

#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store the number of rows for the triangle

    // Prompt the user for the number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Loop for each row
    for(int i = 1; i <= row; i = i + 1){
        // Print 'i' stars in the i-th row
        for(int j = 1; j <= i; j = j + 1){
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
