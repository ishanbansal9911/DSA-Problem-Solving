/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a centered pyramid pattern of numbers,
where each row contains numbers increasing from 1 up to the row number,
then decreasing back to 1 in mirror order (palindromic pyramid).

For a given input n, print n rows with each row centered appropriately.

Example:
If the user enters 5, the output will be:
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

(Note: Each align space is two spaces: "  ")
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt user to enter the number of rows
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int row = 1; row <= n; row = row + 1){
        // Print spaces to center-align the numbers
        for(int col = 1; col <= (n - row); col = col + 1)
            cout << "  ";
        // Print ascending numbers from 1 up to 'row'
        for(int col = 1; col <= row; col = col + 1)
            cout << col << " ";
        // Print descending numbers from (row-1) down to 1
        for(int col = row - 1; col >= 1; col = col - 1)
            cout << col << " ";
        cout << endl; // Next line after each row
    }
    return 0; // End of program
}
