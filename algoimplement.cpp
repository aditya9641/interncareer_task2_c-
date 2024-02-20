// We'll create a function to find the factorial of a given number using recursion.//

#include <iostream>

using namespace std;

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;
    // Call the factorial function and display the result
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}
/*

We define a recursive function factorial that takes an integer n as input and returns the factorial of n.
Inside the function, we have a base case: if n is 0, the factorial is 1.
For any other value of n, we recursively call the factorial function with n-1 and multiply the result with n.
In the main function, we prompt the user to enter a number and then call the factorial function with that number, displaying the result.
Compile and run this code, and it will calculate the factorial of the input number using recursion.

*/