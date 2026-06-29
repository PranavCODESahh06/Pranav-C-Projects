//Program description: the program validates the performance scare entered by the user and determines if the result is satisfactory or needs improvement
//******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int length_of_1st_rectangle, width_of_1st_rectangle, length_of_2nd_rectangle, width_of_2nd_rectangle, area1, area2;
    
    
    cout << "Enter the length of the 1st rectangle: ";
    cin >> length_of_1st_rectangle;
    cout << "Enter the width of the 1st rectangle: ";
    cin >> width_of_1st_rectangle;
    
    
    cout << "Enter the length of the 2nd rectangle: ";
    cin >> length_of_2nd_rectangle;
    cout << "Enter the width of the 2nd rectangle: ";
    cin >> width_of_2nd_rectangle;
    
    if (length_of_1st_rectangle < 0)
    {
            cout << "You entered invalid input." << endl;
            return 0;
        }
        else if (width_of_1st_rectangle < 0) {
            cout << "You entered invalid input." << endl;
            return 0;
        }
        else if (length_of_2nd_rectangle < 0) {
            cout << "You entered invalid input." << endl;
            return 0;
        }
        else if (width_of_2nd_rectangle < 0) {
            cout << "You entered invalid input." << endl;
            return 0;
        }
    
    
    area1 = length_of_1st_rectangle * width_of_1st_rectangle;
    area2 = length_of_2nd_rectangle * width_of_2nd_rectangle;
    
    if (area1 > area2)
        {
            cout << "The 1st rectangle has the greater area." << endl;
        }
        else if (area2 > area1)
        {
            cout << "The 2nd rectangle has the greater area." << endl;
        }
        else
        {
            cout << "Both rectangles have the same area." << endl;
        }
    
    return 0;
}

