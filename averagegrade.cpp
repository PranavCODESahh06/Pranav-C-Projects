#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float gradel = 80.0, grade2 = 85.0, grade3 = 90.0, avg;
    avg = (gradel + grade2 + grade3) / 3;
    cout << fixed << setprecision (4) << showpoint;
    cout << "The average grade is " << avg << endl;
}
    
