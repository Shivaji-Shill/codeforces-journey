#include <iostream>        // Include the standard input-output library
using namespace std;       // Use the standard namespace so we don't need std:: before cout, etc.

int main() {
    // int a = 14          // Old way of declaring variables (commented out)
    // int b = 15          // Old way of declaring variables (commented out)

    int a = 14, b = 15;   // Declare two integer variables a and b in one line

    float pi = 3.15;      // Declare a float variable 'pi' to store decimal numbers

    char c = 'a';         // Declare a char variable 'c' to store a single character

    // Print tutorial message and variable values
    cout << "This is the tutorial 3.\n";  
    // "\n" moves to a new line after the text

    cout << "Here the value of a is " << a << ".\n";  
    // Print the value of 'a' after the text
    // Problem in earlier code: missing space before value caused output like "is14"
    // Fixed by keeping space in string

    cout << "The value of b is " << b;  
    // Print the value of 'b' after the text

    cout << " \nThe value of pi is: " << pi;  
    // Print the value of 'pi' on a new line
    // Added a space before "\n" to avoid sticking with previous output

    cout << " \nThe value of c is: " << c;  
    // Print the value of 'c' (character) on a new line

    return 0;  
    // End of main function, program exits
}


// vs code terminal command 
//   g++ main.cpp -o main
//  ./main