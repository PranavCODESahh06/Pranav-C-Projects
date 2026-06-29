//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 7 Part 2

//Date: 3/6/2026

//Program description: the program gets the speed and time from user and calculates distance

//*******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int speed, distance, time; //variable definition
    
    //------Program-code--------
    cout << "Enter the speed: ";
    cin >> speed ; //get input speed
     
    cout << "Enter the time: ";
    cin >> time ;//get input time
    
    distance = speed * time; // distance formula
    
    cout << "The distance is: " << distance << endl;// final output line printing the total distance
    
    
    return 0;
}
