/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a left-aligned triangle pattern of descending numbers.
For a given input `row`, print `row` rows. Each row starts from the input number and 
prints descending numbers, with each subsequent row adding one more number to the sequence.

Example:
If the user enters 5, the output will be:
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int row; // Variable to store the number of rows

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> row;

    // Loop for each row
    for(int i = 1; i <= row; i = i + 1){
        // Print numbers from 'row' down to (row - i + 1)
        for(int j = row; j >= (row - (i - 1)); j = j - 1){
            cout << j << " ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
