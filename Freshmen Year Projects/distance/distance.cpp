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
