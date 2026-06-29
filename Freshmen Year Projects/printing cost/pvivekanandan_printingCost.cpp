//Program description: the program gets the number of pages to print and the cost per page to print then calculates the total cost of printing 
//*********************************************************************
#include <iostream>
using namespace std;

int main ()

{
    float number_of_pages, cost_per_page, print_cost; //initializing all the variables
    
    cout << "Enter the number of pages: ";
    cin >> number_of_pages;// get the number of pages
    cout << "Enter the cost per page: ";
    cin >> cost_per_page;// get the number of pages
    
    print_cost = number_of_pages * cost_per_page; // setting formula for calculatign the print cost
    
    cout << "Total printing cost is: $" << print_cost <<endl;//  print the output line for the total printing cost 
    

    return 0;
}
