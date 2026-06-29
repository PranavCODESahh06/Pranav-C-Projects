//Program description: this program gets the sizes and the quantity of the coffees that needs to be ordered from the user and gives out the total price the user needs to pay
//*********************************************************************
#include <iostream>
using namespace std;

int main ()

{
    // initializing variables
    int quantity ;
    char size;
    string sizename;
    double price = 0.0, subtotal, total, tax;
    
    cout << "Enter coffee size (S, M, or L): " ; // getting the size of the coffee
    cin >> size;
    
    if (size == 'S')// nested if else if statement for a classifying different sizes to different price and name
    {
            price = 3.00;
            sizename = "Small"; // small
        }
        else if (size == 'M')
        {
            price = 4.50;
            sizename = "Medium";// medium
        }
        else if (size == 'L')
        {
            price = 6.00;
            sizename = "Large";// large
    }
        
    
    if (size != 'S' && size != 'M' && size != 'L')
    {
        cout << "Invalid size ";
        return 0;
    }// making sure if invalid size is entered
    
    cout << "Enter number of coffees: " ;
    cin >> quantity;// getting quantity
        
    if (quantity <= 0)
    {
        cout << "Invalid quantity " << endl;
        return 0;
    }// making sure if invalid quantity is entered
    
    cout << endl;
    
    cout << "Coffee size: " << sizename << endl;// output statement for coffee size
    cout << "Number of coffees: " << quantity << endl;// output statement for number of coffees
    
    
    cout << "-------------------------------------" << endl;
    
    subtotal = price * quantity;// formula for subtotal
    
    tax = subtotal * 0.0575;// formula for tax
    
    total = subtotal + tax;// formula for total
                
    cout << "Subtotal: " << subtotal << endl;// displaying subtotal total
    cout << "Sales tax (5.75%): " << tax << endl;// displaying sales tax
    cout << "Total Amount Due: " << total << endl;// displaying total amount due
    cout << "Thank you so much for your purchase! " << endl;// final thank you statement 
    cout << endl;
    
    
    return 0 ;
}
