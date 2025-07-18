/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned inverted number triangle pattern.
For a given input 'row', the pattern should display numbers in each row starting from the row number down to 1.

Example:
If the user enters 4, the output should be:
1
2 1
3 2 1
4 3 2 1
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
        // Print numbers from i down to 1 in the current row
        for(int j = i; j >= 1; j = j - 1){
            cout << j << " ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
