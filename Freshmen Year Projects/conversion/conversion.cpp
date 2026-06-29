//*******************************************************************

//Name: Pranav Vivekanandan

//Class: COSC 1435.001 Spring 2026

//Instructor: Dr. Mamta Yadav

//Lab 13 problem 7

//Date: 4/17/2026

//Program description:This program takes measurements in inches, pounds, and Fahrenheit from user and uses functions to convert and display them in a clean results table. //*******************************************************************
#include <iostream>
using namespace std;

// function prototypes
double getInches();
int getPounds();
float getFahr();

double convert(double inches);
double convert(int pounds);
double convert(float fahrenheit);

void displayResults(double in, int lbs, float fahr, double cm, double kg, double celsius);// void function does not return anything

int main()
{
    double inches = getInches();
    int pounds = getPounds();
    float fahrenheitVal = getFahr();

    double centimeters = convert(inches);
    double kilograms = convert(pounds);
    double celsius = convert(fahrenheitVal);

    displayResults(inches, pounds, fahrenheitVal, centimeters, kilograms, celsius);

    return 0;
}

double getInches()
{
    double val;
    cout << "Enter the length in inches: ";// getting inches
    cin >> val;
    cin >> val;
    return val;
}

int getPounds()
{
    int val;
    cout << "Enter the weight in pounds: ";// getting pounds
    cin >> val;
    cin >> val;
    return val;
}

float getFahr()
{
    float val;
    cout << "Enter the temperature in Fahrenheit: "; // getting fahrenheit
    cin >> val;
    return val;
}


double convert(double inches)
{
    return inches * 2.54;// inches conversion
}

double convert(int pounds)
{
    return pounds * 0.453592;// pounds conversion
}

double convert(float fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;// fahrenheit conversion
}

void displayResults(double in, int lbs, float fahr, double cm, double kg, double celsius)
{
    cout << endl << "******************************************************************************" << endl << endl;
    cout << "                                Conversion Results" << endl << endl;
    cout << "******************************************************************************" << endl << endl;
    
    // Line 1: Length
    cout << "Original Length (inches): " << in;
    cout << "           Converted Length (cm): " << cm << endl;
    
    // Line 2: Weight
    cout << "Original Weight (pounds): " << lbs;
    cout << "              Converted Weight (kg): " << kg << endl;
    
    // Line 3: Temperature
    cout << "Original Temperature (F): " << fahr;
    cout << "           Converted Temperature (C): " << celsius << endl << endl;
    
    cout << "******************************************************************************" << endl;
}
