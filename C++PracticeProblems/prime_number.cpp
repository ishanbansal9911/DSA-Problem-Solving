/*
    Problem Statement:
    Write a program to check whether a given number is a prime number or not.

    The program asks the user to enter a number.
    If the number is less than 2, it is not prime.
    Otherwise, the program checks if the number is divisible by any number 
    between 2 and (num - 1). If it is divisible, it is not prime.
    If no divisors are found, the number is prime.
*/

#include <iostream>
using namespace std;

int main() {
    int num; // Variable to store the number entered by the user

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> num; // Take input from the user

    // Check if number is less than 2 (not prime)
    if (num < 2) {
        cout << "Number is not prime" << endl;
        return 0; // Exit the program early
    } else {
        // Loop to check for factors from 2 to num - 1
        for (int i = 2; i < num; i = i + 1) {
            if (num % i == 0) {
                cout << "Number is not prime" << endl;
                return 0; // Exit if a factor is found
            }
        }
        // If no factors found, the number is prime
        cout << "Number is prime" << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
