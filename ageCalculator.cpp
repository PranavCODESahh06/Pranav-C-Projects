//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 7 Part 1

//Date: 3/6/2026

//Program description: the program calculates age by getting the input years from the user

//*******************************************************************
#include <iostream>
using namespace std;
int main()
{
//--- Variable definitions --
    
int currentYear = 2026 ; // Current year
int yearBorn;// Year user was born
int age;// User's current age
    
//----------- Program code -------- - - -
cout <<"***Age Calculator Program ***"; // Print title
cout << endl << endl; // Print 2 blank lines
    
//Inform the operating system that the program is done
    
cout << "Year of birth: ";// Prompt for year
cin >> yearBorn;// Obtain user's year of birth
age = currentYear - yearBorn; // Calculate user's age
    
//Display user's age
    cout << "Age this year: " << age << " years old";
    cout << endl << endl; // Print 2 blank lines
    
return 0;
}


