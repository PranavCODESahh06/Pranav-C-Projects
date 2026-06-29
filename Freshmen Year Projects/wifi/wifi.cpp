//Program description: This program helps a user troubleshoot a bad Wi-Fi signal with the help of getting yes, or no answers from the user
//*********************************************************************
#include <iostream>
using namespace std;

int main ()

{
       char ans;// initializing variable

    // step one
       cout << "Reboot the computer and try to connect." << endl;
       cout << "Did that fix the problem? Answer (y/n): ";
       cin >> ans;

       if (ans == 'y')// if step is succeeded then program will use this
       {
           cout << "Wonderful! Glad to be of help." << endl;
           return 0;
       }

    // step two
       cout << "Reboot the router and try to connect." << endl;
       cout << "Did that fix the problem? Answer (y/n): ";
       cin >> ans;

       if (ans == 'y')// if step is succeeded then program will use this
       {
           cout << "Wonderful! Glad to be of help." << endl;
           return 0;
       }

    // step three
       cout << "Make sure the cables between the router and modem are plugged in firmly." << endl;
       cout << "Did that fix the problem? Answer (y/n): ";
       cin >> ans;

       if (ans == 'y')// if step is succeeded then program will use this
       {
           cout << "Wonderful! Glad to be of help." << endl;
           return 0;
       }

    // step four
       cout << "Move the router to a new location and try to connect." << endl;
       cout << "Did that fix the problem? Answer (y/n): ";
       cin >> ans;

       if (ans == 'y')// if step is succeeded then program will use this
       {
           cout << "Wonderful! Glad to be of help." << endl;
           return 0;
       }

       cout << "Get a new router." << endl;// find output statement, if all the troubleshooting methods have failed

    
    
    
    
    return 0;
}
