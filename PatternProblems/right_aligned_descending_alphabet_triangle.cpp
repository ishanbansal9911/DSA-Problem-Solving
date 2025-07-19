/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a right-aligned triangle where each row 
contains uppercase letters in decreasing order, starting from the last letter 
(i.e., 'A'+n-1) down to an earlier letter.

For a given input n, print n rows. Each row starts with enough spaces 
so the triangle is right-aligned. The number of letters in each row equals the row number, 
and they are printed in descending order from ('A' + n - 1) down to the appropriate letter.

Example:
If the user enters 5, the output will be:
        E 
      E D 
    E D C 
  E D C B 
E D C B A 

(Note: Each align space is two spaces: "  ")
*/

#include<iostream>
using namespace std;

int main(){
    int n; // Number of rows

    // Prompt for input
    cout << "Enter the number of the rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        // Print spaces for right alignment
        for(int j = 1; j <= (n - i); j++)
            cout << "  ";
        // Print characters from 'A'+n-1 down to an earlier letter for the row
        for(int col = 1; col <= i; col++)
            cout << (char)('A' + (n - col)) << " ";
        cout << endl; // Newline after each row
    }
    return 0; // End of program
}
