/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a hollow double diamond (hollow butterfly) star pattern.
Given `n`, print lines such that the top half and the mirrored bottom half each have stars increasing to the middle,
with corresponding spaces in the center. The pattern is symmetric about the center row.

Example:
If the user enters 5, the output will be:

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

(Note: Each space " " for center alignment is two actual spaces.)
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of the rows: ";
    cin >> n;

    // Upper part (including the middle line)
    for(int row = 1; row <= n; row=row+1){
        // Print left stars
        for(int col = 1; col <= row; col=col+1)
            cout << "* ";
        // Print center spaces
        for(int col = 1; col <= 2*(n-row); col=col+1)
            cout << "  ";
        // Print right stars
        for(int col = 1; col <= row; col=col+1)
            cout << "* ";
        cout << endl;
    }

    // Lower part (excluding the middle line)
    for(int row = n-1; row >= 1; row=row-1){
        // Print left stars
        for(int col = 1; col <= row; col=col+1)
            cout << "* ";
        // Print center spaces
        for(int col = 1; col <= 2*(n-row); col=col+1)
            cout << "  ";
        // Print right stars
        for(int col = 1; col <= row; col=col+1)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
