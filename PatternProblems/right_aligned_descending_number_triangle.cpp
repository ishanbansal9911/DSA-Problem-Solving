/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle where each row contains 
numbers in descending order, starting from the row number down to 1.

For a given input n, the triangle should have n rows. Each row starts 
with enough spaces so the numbers are right-aligned, then prints the numbers 
from the current row number down to 1.

Example:
If the user enters 5, the output will be:
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

(Note: Each align space is two spaces: "  ")
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces to right-align the numbers
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print numbers from row down to 1
        for(int col = row; col >= 1; col = col - 1)
            cout << col << " ";
        cout << endl; // Move to next line after each row
    }
    return 0; // End of program
}
