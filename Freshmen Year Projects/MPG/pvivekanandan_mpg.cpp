//Program description: Calculates miles per gallon for different vehicles and identifies the best and worst mpg
//*********************************************************************
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int total_vehicles = 5;
    
    string modelnames[total_vehicles] = {"Sports Coupe", "Sedan", "SUV", "Minivan", "Pickup"};
    double milesrange[total_vehicles] = {350, 240, 543, 535, 612};
    double tankcapacity[total_vehicles] = {20, 24, 30, 35, 42};
    double fuelefficiency[total_vehicles];

    
    for (int counter = 0; counter < total_vehicles; counter++)// calculating the mpg
    {
        fuelefficiency[counter] = milesrange[counter] / tankcapacity[counter];// formula
    }
    
    double high_mpg = fuelefficiency[0];
    double low_mpg = fuelefficiency[0];
    string best_model = modelnames[0];
    string worst_model = modelnames[0];

    
    for (int counter = 1; counter < total_vehicles; counter++)// finding highest and lowest values by looping through the array
    {
        
        if (fuelefficiency[counter] > high_mpg)// maximum efficiency
        {
            high_mpg = fuelefficiency[counter];
            best_model = modelnames[counter];
        }
        
        
        if (fuelefficiency[counter] < low_mpg)// minimum efficiency
        {
            low_mpg = fuelefficiency[counter];
            worst_model = modelnames[counter];
        }
    }

    // final output statemnt to display results
    cout << "The car with the highest miles per gallon is: " << best_model
         << ", with " << high_mpg << " miles per gallon!" << endl;
         
    cout << endl << "The car with the lowest miles per gallon is: " << worst_model
         << ", with " << low_mpg << " miles per gallon!" << endl;

    return 0;
}
