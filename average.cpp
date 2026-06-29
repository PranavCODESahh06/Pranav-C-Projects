//********************************************************************
//Name:Pranav Vivekanandan
//Class: COSC 1435 Spring 2026
//Instructor: Mamta Yadav
//Assignment 6 Problem 1
//Date:4/9/2026
//Program description: This program calculates and displays the sum and average of all even integers within the range given by the user.
//*********************************************************************
#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, sum = 0, count = 0; // initializing variables
    
    cout << "Enter two integers: "; // getting the 2 integers
    cin >> num1 >> num2;
    
    while (num1 > num2) // Checking if the first is larger than the second
    {
        cout << "Invalid Numbers. Enter the lowest number first and the large number second." << endl << endl;
        cout << "Enter two integers: ";
        cin >> num1 >> num2; // input validation
    }
    
    cout << "Sum = ";
    
    for (int num = num1; num <= num2 ; num++) // for loop for the even number
    {
        if (num % 2 == 0)// nested if loop for even 
        {
            if (count > 0)
            {
                cout << " + ";
            }
            
            cout << num;
            sum = sum + num;
            count = count + 1;
        }
    }
    
    cout << " = " << sum << endl;

    if (count > 0)
    {
        int average = sum / count;
        cout << "Average = " << average << endl;// average calculation and displau
    }
        
    return 0;
}
