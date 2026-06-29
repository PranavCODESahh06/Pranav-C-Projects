//Program description: This program reads daily step counts from a file to calculate and display the maximum, minimum, and average steps for each month in a formatted table
//*********************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main ()

{
    
    int daysInMonth, steps;// initializng variables
    string monthname;// initializng variables
    
    ifstream infile;
    infile.open("steps.dat"); // opening files
    
    if (!infile) // if statement to check if the file is opening or not
    {
        cout << "Error opening file." << endl;
    }
    
    cout << left << setw(12) << "Month"// displaying different categories
    << right << setw(15) << "Maximum Steps"
    << setw(17) << "Minimum Steps"
    << setw(27) << "Average number of steps" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    
    for (int month = 1; month <= 12 ; month++)// for loop for months
    {
        if (month == 1)
        {
            monthname = "January"; daysInMonth = 31;
        }
        else if (month == 2)
        {
            monthname = "February"; daysInMonth = 28;
        }
        else if (month == 3)
        {
            monthname = "March"; daysInMonth = 31;
        }
        else if (month == 4)
        {
            monthname = "April"; daysInMonth = 30;
        }
        else if (month == 5)
        {
            monthname = "May"; daysInMonth = 31;
        }
        else if (month == 6)
        {
            monthname = "June"; daysInMonth = 30;
        }
        else if (month == 7)
        {
            monthname = "July"; daysInMonth = 31;
        }
        else if (month == 8)
        {
            monthname = "August"; daysInMonth = 31;
        }
        else if (month == 9)
        {
            monthname = "September"; daysInMonth = 30;
        }
        else if (month == 10)
        {
            monthname = "October"; daysInMonth = 31;
        }
        else if (month == 11)
        {
            monthname = "November"; daysInMonth = 30;
        }
        else if (month == 12)
        {
            monthname = "December"; daysInMonth = 31;
        }
        
       
        // declaring variables
        int maxSteps = 0;
        int minSteps = 1000000;
        double totalSteps = 0;

                
        for (int day = 1; day <= daysInMonth; day++)// for loops for days
        {
            infile >> steps;
                    
            totalSteps += steps;

                    if (steps > maxSteps)//  nested if for steps > maxsteps
                    {
                        maxSteps = steps;
                    }
                    if (steps < minSteps)// nested if for steps < maxsteps
                    {
                        minSteps = steps;
                    }
                }
        
        
        double average = totalSteps / daysInMonth; // calculatign average

                
        cout << left << setw(12) << monthname << right << setw(15) << maxSteps << setw(17) << minSteps<< setw(27) << fixed << setprecision(2) << average << endl;
            } // final output statement displaying result
            
            infile.close();// closing file 
            return 0;
        }
        
