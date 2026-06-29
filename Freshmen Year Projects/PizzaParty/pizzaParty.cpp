//Program description: this program that needs to be purchased based on the diameter of the pizza and the number of people attending the party
#include <iostream>
#include <iomanip>

using namespace std;

int main ()

{
    // inititialize variables
    double diameter_of_pizza, people_attending, radius, area, total_slices, total_pizzas;
    
    // initializing constants
    float PI = 3.14;
    float slice_area = 14.125;
    float slices_per_person = 3;
    float slices;
    
    cout << "Enter the diameter of pizza in inches: " << endl ;
    cin >> diameter_of_pizza;// get diameter of pizza
    radius = diameter_of_pizza/2; // formula fro finding radius from diameter
    area = PI * radius * radius;// formula for area of pizza
    slices = area/slice_area;  // formula for the slices
    
    cout << fixed << setprecision(1); //use set preciion to shorten to 1 decimal place
    cout << "A " << diameter_of_pizza << " inches pizza contains about " << slices << " slices" << endl;
    
    
    cout << "Enter the number of people attending your party: " << endl;
    cin >> people_attending; // get the number of people attending the party
    
    total_slices = slices_per_person * people_attending; // formula for total slices
    total_pizzas = (total_slices / slices) + 1; // formula for total pizzas
    
    cout << "You should purchase " << total_pizzas << " pizzas of " << diameter_of_pizza << " inches" << endl; // print output statement for total pizzas and diameter requirements
    
    return 0;
    
}
