//Program description: Uses overloaded functions to calculate the areas for rectangles and circles with pass by reference
//*********************************************************************

#include <iostream>
using namespace std;

// Function prototypes
void getinput(double&, double&);
void getinput(double&);
double calculatearea(double, double);
double calculatearea(double);
void displayresult(double, double, double, double, double);

const double PI = 3.14;// Global constant

int main()
{
    double val1, val2, rval,rectanglearea, circlearea;

    // Get length and width for rectangle
    getinput(val1, val2);
    
    // Get radius for cirlce
    getinput(rval);

    
    rectanglearea = calculatearea(val1, val2);// calculation of area of rectangle
    circlearea = calculatearea(rval);// calculation of area of circle

    displayresult(val1, val2, rectanglearea, rval, circlearea); // showing final results

    return 0;
}

// input for length and width or rectangle
void getinput(double &dimension1, double &dimension2)
{
    cout << "Enter the length of the rectangle: ";
    cin >> dimension1;// get length
    
    while (dimension1 <= 0)// input validation of length
    {
        cout << "Invalid input! Length must be positive." << endl;
        cout << "Enter the length of the rectangle: ";
        cin >> dimension1;
    }

    cout << endl << "Enter the width of the rectangle: ";
    cin >> dimension2;// get width
    while (dimension2 <= 0)// input validation of width
    {
        cout << "Invalid input! Width must be positive." << endl;
        cout << "Enter the width of the rectangle: ";
        cin >> dimension2;
    }
}

// input for radius of cirlcle
void getinput(double &rad)
{
    cout << endl <<"Enter the radius of the circle: ";
    cin >> rad; // get radius
    while (rad <= 0) // radius input validation
    {
        cout << "Invalid input! Radius must be positive." << endl;
        cout << "Enter the radius of the circle: ";
        cin >> rad;
    }
}

// Area for rectangle
double calculatearea(double l, double w)
{
    double result;
    result = l * w;
    return result;
}

// area for circle
double calculatearea(double r)
{
    return (r * r) * PI; // area of circle calculation
}

void displayresult(double l, double w, double arearect, double r, double areacirc)
{
    cout.precision(2);
    // final outout statement to display results
    cout << fixed << endl <<"The area of the rectangle with length " << l
         << " and width " << w << " is: " << arearect << endl; // display result
         
    cout << "The area of the circle with radius " << r
         << " is: " << areacirc << endl;// display result
}
