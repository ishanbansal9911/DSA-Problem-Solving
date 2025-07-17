/*
    Problem Statement:
    Write a program to print all lowercase alphabets from 'a' to 'z'.

    This program uses a for loop to iterate through characters from 'a' to 'z'
    and prints each character separated by a space.
*/

#include <iostream>
using namespace std;

int main() {
    // Loop through characters from 'a' to 'z'
    for (char c = 'a'; c <= 'z'; c = c + 1) {
        cout << c << " "; // Print the current character followed by a space
    }

    cout << endl; // Print a newline at the end for better output formatting
    return 0; // Return 0 to indicate successful execution
}
