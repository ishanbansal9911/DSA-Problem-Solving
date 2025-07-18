/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned triangle pattern where each row contains its own row number.
For a given input `row`, the first row will have one '1', the second row will have two '2's, and so on.

Example:
If the user enters 4, the output should be:
1 
2 2 
3 3 3 
4 4 4 4
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
        // Print the row number 'i', 'i' times in the i-th row
        for(int j = 1; j <= i; j = j + 1){
            cout << i << " ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
