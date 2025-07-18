/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a reversed left-aligned triangle pattern using stars ('*').
For a given number of rows, the first row should have as many stars as the user entered (e.g., 4 if the input is 4), 
then decrease by one star each row down to 1 star in the final row.

Example:
If the user enters 4, the output will be:
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store the number of rows to print

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Print the pattern: first row has 'row' stars, decreases by one each row
    for(int i = 1; i <= row; i = i + 1){
        for(int j = 1; j <= (row - (i - 1)); j = j + 1){
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }
    return 0; // End of program
}
