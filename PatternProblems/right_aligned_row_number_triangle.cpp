/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle where each row 
contains its row number, aligned using spaces.

For a given input n, there should be n rows. Each row starts with
sufficient spaces to align the numbers to the right, then the row number is printed
as many times as the row number in that row.

Example:
If the user enters 5, the output will be:
        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 

Note: Each space before the numbers is two spaces ("  "), to keep the triangle aligned.
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt user to enter number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces to right-align the numbers
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print the row number 'row' times, followed by a space for alignment
        for(int col = 1; col <= row; col = col + 1)
            cout << row << " ";
        cout << endl; // Next line after each row
    }
    return 0; // End of program
}
