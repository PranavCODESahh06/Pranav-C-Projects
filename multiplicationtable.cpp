//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 11 problem 1

//Date: 4/3/2026

//Program description:This program asks for a number and uses a for loop to show its multiplication table from 1 to 10. //*******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int num;// initializing varibales
    
    cout << "Enter a number which you want a multiplication table: ";
    cin >> num; // getting number from user
    
    for (int count = 1; count <= 10; count++)// for loop conditions
    {
        cout << num << " x " << count << " = " << (num * count) << endl;// final output statement to print out table
    }
    
    return 0;
}
