/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle where each row contains 
the column numbers in increasing order, aligned using spaces.

For a given input n, print n rows. Each row should start with enough spaces
to align the numbers to the right, then print numbers from 1 up to the row number.

Example:
If the user enters 5, the output will be:
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

(Note: Each aligning space is two spaces: "  ")
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt user to enter number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces to right-align the triangle
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print column numbers from 1 to row number
        for(int col = 1; col <= row; col = col + 1)
            cout << col << " ";
        cout << endl; // Move to next line after each row
    }
    return 0; // End of program
}
