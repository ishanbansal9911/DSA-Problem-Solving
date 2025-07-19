/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print an hourglass star pattern.
For a given input n, print a symmetric star hourglass made of two main parts:
- The upper part: stars decrease outward from n to 1, with increasing middle spaces.
- The lower part: stars increase outward from 1 to n, with decreasing middle spaces.

Example:
If the user enters 5, the output will be:

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 

(Note: Each " " is two spaces for alignment.)

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of the rows: ";
    cin >> n;

    // Upper part of hourglass
    for(int row = 1; row <= n; row = row + 1){
        // Print left stars (n-row+1)
        for(int col = 1; col <= n - row + 1; col = col + 1)
            cout << "* ";
        // Print middle spaces (2*(row-1))
        for(int col = 1; col <= 2 * (row - 1); col = col + 1)
            cout << "  ";
        // Print right stars (n-row+1)
        for(int col = 1; col <= n - row + 1; col = col + 1)
            cout << "* ";
        cout << endl;
    }

    // Lower part of hourglass
    for(int row = 1; row <= n; row = row + 1){
        // Print left stars (row)
        for(int col = 1; col <= row; col = col + 1)
            cout << "* ";
        // Print middle spaces (2*(n-row))
        for(int col = 1; col <= 2 * (n - row); col = col + 1)
            cout << "  ";
        // Print right stars (row)
        for(int col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
