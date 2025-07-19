/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle where each row contains 
uppercase English letters in increasing order, starting from 'A'. 

For a given input n, there should be n rows. Each row starts with enough spaces
so that the letters are right-aligned, then prints letters from 'A' up to the column number.

Example:
If the user enters 5, the output will be:
        A 
      A B 
    A B C 
  A B C D 
A B C D E 

(Note: Each space for alignment is two spaces "  ")
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces for right alignment
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print characters from 'A' up to the row number
        for(int col = 1; col <= row; col = col + 1)
            cout << (char)('A' + (col - 1)) << " ";
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
