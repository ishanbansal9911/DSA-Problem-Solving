/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a reversed left-aligned number triangle pattern.
For a given input `row`, print rows starting with numbers from 1 up to a decreasing count,
starting from `row` numbers in the first row and decreasing by one number each subsequent row.

Example:
If the user enters 4, the output will be:
1 2 3 4
1 2 3
1 2
1
*/

#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store the number of rows to print

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Loop for each row
    for(int i = 1; i <= row; i = i + 1){
        // In each row, print numbers from 1 up to (row - (i-1))
        for(int j = 1; j <= (row - (i - 1)); j = j + 1){
            cout << j << " ";
        }
        cout << endl; // Move to next line after each row
    }
    return 0; // End of program
}
