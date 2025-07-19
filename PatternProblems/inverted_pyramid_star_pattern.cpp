/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print an inverted pyramid pattern of stars.
For a given input n, print n rows, starting with the widest row and decreasing the number 
of stars by two each row, centered by leading spaces.

Example:
If the user enters 5, the output will be:
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

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
        // Print spaces at the beginning of each row for center alignment
        for(int col = 1; col <= (row - 1); col = col + 1)
            cout << "  ";
        // Print stars; each row contains (2*n - 2*row + 1) stars
        for(int col = 1; col <= (2 * n - 2 * row + 1); col = col + 1)
            cout << "* ";
        cout << endl; // Move to the next row
    }
    return 0; // End of program
}
