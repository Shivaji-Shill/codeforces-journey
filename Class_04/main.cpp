#include<iostream>  //Includes input-output library so we can use cin and cout

using namespace std; // Allows us to use std features without writting std:: every time


int main()          // Main function: program excution starts from here
{
    int num1, num2; // Declare two integer variables to store numbers

    // Ask the user to enter the first number
    cout<<"Enter the value of num1 \n";  /*'<<' is called Insertion operator*/
    //Example output: Enter the value of num1    

    cin>>num1; /*'>>' is called Extraction operator*/ //"Takes input from keyboard and stores it in num1"
    // Example: If user tpes 5, then num1 = 5

    //Ask the user to enter the second number
    cout<<"Enter the value of num2 \n";  /*'<<' is called Insertion operator*/
    //Example output: Enter the value of num2

    cin>>num2; /*'>>' is called Extraction operator*/  //"Takes input from keyboard and stories it in num2"
    // Example: If user type 3, then num2 = 3

    // Add num1 and num2 and print the result
    cout<<"The sum is "<< num1+num2;
    // Example: If num1 = 5 and num2 = 3, output will be: The sum is 8

    return 0;   // End the program successfully
}


// For run this program open the terminal of vs code and command [g++ main.cpp -o main]
//                                                               [./main]  