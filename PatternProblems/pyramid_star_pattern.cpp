/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a pyramid star pattern.
For a given input n, print n rows forming a pyramid of stars,
centered and increasing by two stars each row.

Example:
If the user enters 5, the output will be:

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

(Note: Spaces before stars align the pyramid center.)
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt the user for the number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    // Loop through each row
    for(int row = 1; row <= n; row = row + 1){
        // Print spaces before stars to align the pyramid
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print stars: (2*row - 1) stars in this row
        for(int col = 1; col <= (2 * row - 1); col = col + 1)
            cout << "* ";
        cout << endl; // Move to the next line after each row
    }

    return 0; // End of program
}
