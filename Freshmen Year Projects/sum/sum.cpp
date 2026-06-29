//********************************************************************
//Name: Pranav Vivekanandan
//Class: COSC 1435 Spring 2026
//Instructor: Mamta Yadav
//Assignment 6 Problem 2
//Date:4/9/2026
//Program description: This program finds the total sum of all numbers up to a integer provided byt he user and lists every odd number in that range.
//*********************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main ()

{
    int number, sum = 0, count, oddnum = 0;// initializing variables
    
    cout << "Enter a Positive integer value: " ;
    cin >> number;// getting integer
    
    while (number <= 0)
    {
        cout << "Invalid input. Enter a positive number greater than zero: " ;
        cin >> number;// input validation while loop
    }
    
    
    
    for(count = 1; count <= number; count++) // for loop for countering
    {
        if(count % 2 == 0)//  if statement  for even
        {
            sum = sum + count;
        }
        else if(count % 2 != 0)// else if statement for not even
        {
            oddnum = oddnum + 1;
            sum = sum + count;
        }
        
    }
    
    cout << "the sum of numbers 1 to " << number << " is " << sum << "   ";// display statement
    
    cout << sum << endl;
    cout << "The odd numbers between 1 to " << number << " are " << endl;// odd numbers display
    
    for(count = 1, sum = 0; count <= number ; count++)
    {
        if(count % 2 != 0)
        {
            cout << count << endl;
           
        }
         
        
    }
    
    return 0;
    
}
