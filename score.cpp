//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 9

//Date: 20/3/2026

//Program description: the program validates the performance scare entered by the user and determines if the result is satisfactory or needs improvement
//******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int performanceScore;// initialize variables
    cout << "Please Enter your performance score between 1 and 100: " << endl;
    cin >> performanceScore; // get input score
    
    if (performanceScore >= 0 && performanceScore <= 100) // add if loop to chekc validity of score
    {   cout << "Entered score is valid " << endl;

        if (performanceScore >= 75) // above 75 then satisfactory
            cout << "Your performance is satisfactory   ";
        else// below 75 then needs improvement

            cout << "Needs Improvement " ;
            
    }
    else
    {
        cout << "Entered score is invalid! Please enter valid score"<< endl;
    }
    
    
    return 0;
}
