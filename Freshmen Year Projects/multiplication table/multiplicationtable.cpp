//Program description:This program asks for a number and uses a for loop to show its multiplication table from 1 to 10. //*******************************************************************
#include <iostream>
using namespace std;

int main ()

{
    int num;// initializing varibales
    
    cout << "Enter a number which you want a multiplication table: ";
    cin >> num; // getting number from user
    
    for (int count = 1; count <= 10; count++)// for loop conditions
    {
        cout << num << " x " << count << " = " << (num * count) << endl;// final output statement to print out table
    }
    
    return 0;
}
