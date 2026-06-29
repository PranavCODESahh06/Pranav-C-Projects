//Program description: A program figures out the hotel costs for different guests based on membership and room choices
//********************************************************************

#include<iostream>
using namespace std;

// Function prototypes
char getgueststatus();
double calculatemembertotal();
double applydiscount(string, double);
double calculatenonmembertotal();

int main()
{
    char status;
    double finalbill;

    cout.precision(2);

    status = getgueststatus();

    if (status == 'y' || status == 'Y')
    {
        finalbill = calculatemembertotal();
    }
    else
    {
        finalbill = calculatenonmembertotal();
    }

    // total end bill print end
    cout << endl << fixed << "Total Charge: $" << finalbill << endl;

    return 0;
}

// to find if user is a member or not
char getgueststatus()
{
    char choice;
    cout << "Are you a Club member? [y(Y)/n(N)]: ";
    cin >> choice; // getting choice
    return choice;
}

// members
double calculatemembertotal()
{
    int stayduration;
    string category, tier;
    double nightlycost = 0.0, subamount, savings, grandtotal;

    cout << "Enter number of nights: ";
    cin >> stayduration; // getting stay duration

    // imput validation loop to make sure 0 nights are not entered by the user
    while (stayduration <= 0)
    {
        cout << "The number of nights must be greater than zero. Please re-enter." << endl;
        cout << endl << "Enter number of nights: ";
        cin >> stayduration; // getting stay duration or number of nights
    }

    cout << "Enter the room type (Economy, Standard, Luxury): ";
    cin >> category; // getting category

    // room choices for user
    if (category == "Economy")
    {
        nightlycost = 95.00;
    }
    else if (category == "Standard")
    {
        nightlycost = 125.00;
    }
    else
    {
        nightlycost = 180.00;
    }

    cout << "Enter Club membership type (Gold, Silver, Bronze): ";
    cin >> tier;

    subamount = nightlycost * stayduration;// sub amount calculation
    savings = applydiscount(tier, subamount);//savings calculation
    grandtotal = subamount - savings;// grandtotal calculation

    // output statements to display with fixed decimal formatting
    cout << endl << fixed << "Room Rate per Night: $" << nightlycost << endl;
    cout << "Number of Nights: " << stayduration << endl;
    cout << "Subtotal: $" << subamount << endl;
    cout << tier << " Member Discount: -$" << savings << endl;

    return grandtotal;
}

//different percentage for different discounts
double applydiscount(string membershipLevel, double rawtotal)
{
    double percent;
    if (membershipLevel == "Gold")
    {
        percent = 0.20;
    }
    else if (membershipLevel == "Silver")
    {
        percent = 0.10;
    }
    else
    {
        percent = 0.15; // rate for bronze
    }
    return rawtotal * percent;
}

// if the user is a non member
double calculatenonmembertotal()
{
    int stayduration;
    string category;
    string wantsbuffet;
    double nightlycost = 0.0;
    double buffetfee = 0.0;
    double dayrate, grandtotal;

    cout << "Enter number of nights: ";
    cin >> stayduration;

    // imput validation loop until valid no of nights is entered by user
    while (stayduration <= 0)
    {
        cout << "The number of nights must be greater than zero. Please re-enter." << endl;
        cout << "Enter number of nights: ";
        cin >> stayduration;
    }

    cout << "Enter room type (Economy, Standard, Luxury): ";
    cin >> category;

    if (category == "Economy")
    {
        nightlycost = 95.00;
    }
    else if (category == "Standard")
    {
        nightlycost = 125.00;
    }
    else
    {
        nightlycost = 180.00;
    }

    cout << "Was breakfast buffet included? (yes/no): ";
    cin >> wantsbuffet;

    // Add buffet cost if the user says yes
    if (wantsbuffet == "yes")
    {
        buffetfee = 10.00;
    }

    dayrate = nightlycost + buffetfee;
    grandtotal = dayrate * stayduration;

    // Show the non-member breakdown using fixed for the money output
    cout << endl << fixed << "Room Rate per Night: $" << nightlycost << endl;
    cout << "Breakfast Buffet per Night: $" << buffetfee << endl;
    cout << "Total per Night: $" << dayrate << endl;
    cout << "Number of Nights: " << stayduration << endl;

    return grandtotal;
}
