//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 10 problem 1

//Date: 3/27/2026

//Program description:This program asks the user for numbers until they enter -1 and counts how many zeros were entered.
//*******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int num1, num2=0; // intiializing variables
    
    while ((num1 != -1)) // while statement for loop condition
    {
        if (num1 == 0) // if statement
            num2 = num2 + 1;
        cout << "Enter a value: " ; // get num1 again
        cin >> num1;
    }
    cout << "Result is: " << num2 << endl; // final result output statement
    
    return 0;
    
}
