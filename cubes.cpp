//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 10 problem 2

//Date: 3/27/2026

//Program description: the program print the cubes from numbers 1 through 10

//*******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int number = 1; int cube; // initializing variables
        
    cout << "The cubes of the numbers 1 through 10:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Number          Cube" << endl;
    cout << "---------------------------------------" << endl;

    // While loop from 1 to 10
    while (number <= 10)
        {
            cube = number * number * number;   // cube formula

            
            cout << number << "               " << cube << endl;

            number = number + 1;
        }
    return 0;
}

