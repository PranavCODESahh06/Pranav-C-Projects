//********************************************************************
//Name: Pranav Vivekanandan
//Class: COSC 1435 Spring 2026
//Instructor: Mamta Yadav
//Assignment 5 Problem 1
//Date: 3/24/2026
//Program description: This program helps the user choose between restaurants based on if the users friends are vegetarian, vegan or gluten-free
//*********************************************************************
#include <iostream>
using namespace std;

int main()//
{
    string vegetarian, vegan, glutenFree;// initializing variables
    
    // Ask the user about dietary restrictions
    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarian;// getting vegetarian input from user
    
    cout << "Is anyone in your party a vegan? ";
    cin >> vegan;// getting vegan in input from user
    
    cout << "Is anyone in your party a gluten-free? ";
    cin >> glutenFree;// getting gluten free input from user
    
    cout << "Here are your restaurant choices:" << endl;
    
    // if statement for no vegetarian no vegan no gluten free
    if (vegetarian == "no" && vegan == "no" && glutenFree == "no")
    {
        cout << "Joe's Gourmet Burgers" << endl;
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Café" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "Chef's Kitchen" << endl;
    }
    // if statement for yes vegetarian no vegan no gluten-free
    if (vegetarian == "yes" && vegan == "no" && glutenFree == "no")
    {
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Café" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "Chef's Kitchen" << endl;
    }
    // if statement for yes vegetarian yes vegan no gluten-free
    if (vegetarian == "yes" && vegan == "yes" && glutenFree == "no")
    {
        cout << "Corner Café" << endl;
        cout << "Chef's Kitchen" << endl;
    }
    
    // if statement for yes vegetarian no vegan yes gluten-free
    if (vegetarian == "yes" && vegan == "no" && glutenFree == "yes")
    {
        cout << "Corner Café" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "Chef's Kitchen" << endl;
    }
    
    
    // if statement, for yes vegetarian, yes vegan is gluten-free
    if (vegetarian == "yes" && vegan == "yes" && glutenFree == "yes")
    {
        cout << "Corner Café" << endl;
        cout << "Chef's Kitchen" << endl;
    }
    // no vegetarian, yes vegan, no gluten-free
    if (vegetarian == "no" && vegan == "yes" && glutenFree == "no")
    {
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Café" << endl;
        cout << "Chef's Kitchen" << endl;
        
        
        // no vegetarian, no vegan, yes gluten-free
    if (vegetarian == "no" && vegan == "no" && glutenFree == "yes")
    {
        cout << "Corner Café" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "Chef's Kitchen" << endl;
    }
        
        // no vegetarian, yes vegan, yes gluten-free
    if (vegetarian == "no" && vegan == "yes" && glutenFree == "yes")
    {
        cout << "Corner Café" << endl;
        cout << "Chef's Kitchen" << endl;
    }
        
        return 0;
    }}
