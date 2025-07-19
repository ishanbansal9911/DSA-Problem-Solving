/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle pattern using stars ('*').
For a given input `n`, the triangle should have `n` rows,
where each row contains spaces followed by stars so that the stars are aligned to the right.

Example:
If the user enters 5, the output will be:
    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;

int main(){
    int n; // Variable to store the number of rows

    // Prompt the user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces: in each row, print (n - row) spaces
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << " ";
        // Print stars: number of stars is equal to current row number
        for(int col = 1; col <= row; col = col + 1)
            cout << "*";
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of program
}
