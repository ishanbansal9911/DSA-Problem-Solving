/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a diamond star pattern.
For a given input n, the pattern consists of an upward-facing and downward-facing triangle
joined at the middle line, together forming a diamond.

Example:
If the user enters 5, the output will be:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

(Note: Each space for alignment is a single space " ".)
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of the rows: ";
    cin >> n;

    // Upper triangle (including the middle row)
    for(int row = 1; row <= n; row = row + 1){
        // Print spaces for alignment
        for(int col = 1; col <= n - row; col = col + 1)
            cout << " ";
        // Print stars with a trailing space
        for(int col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }

    // Lower triangle (including the middle row again, as per your code)
    for(int row = n; row >= 1; row = row - 1){
        // Print spaces for alignment
        for(int col = 1; col <= n - row; col = col + 1)
            cout << " ";
        // Print stars with a trailing space
        for(int col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
