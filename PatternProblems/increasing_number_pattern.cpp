/*
Pattern Problem Statement:
--------------------------
Write a C++ program to print a square pattern of consecutive numbers.
For a given input `dim`, print a `dim x dim` grid where numbers increase row-wise from left to right, 
starting from 1.

Example:
If the user enters 4, the output should be:
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
*/

#include<iostream>
using namespace std;

int main(){
    int dim; // Variable to store the dimension of the square

    // Prompt the user to input the dimension
    cout<<"Enter the dimension of the square: ";
    cin>>dim;

    // Loop for each row
    for(int row=1; row<=dim; row=row+1){
        // Loop for each column in the current row
        // col starts from 1 + (row-1)*dim and ends at dim + (row-1)*dim
        for(int col=(1+(row-1)*dim); col<=(dim+(row-1)*dim); col=col+1){
            cout<<col<<" "; // Print the current number
        }
        cout<<endl; // Move to the next line after finishing a row
    }
}
