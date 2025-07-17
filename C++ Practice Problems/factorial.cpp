/*
    Problem Statement:
    Write a program to calculate the factorial of a given number 'n'.

    The program asks the user to enter a number 'n' and then calculates
    its factorial using a for loop. Finally, it displays the result.
    Factorial of n (n!) = 1 * 2 * 3 * ... * n
*/

#include <iostream>
using namespace std;

int main() {
    int n, res = 1; // 'n' stores the input number, 'res' stores the factorial result (initialized to 1)

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> n; // Take input from the user

    // Loop to calculate factorial
    for (int i = 1; i <= n; i = i + 1) {
        res = res * i; // Multiply result by current number 'i'
    }

    // Display the factorial result
    cout << "Factorial of " << n << " : " << res << endl;

    return 0; // Return 0 to indicate successful execution
}
