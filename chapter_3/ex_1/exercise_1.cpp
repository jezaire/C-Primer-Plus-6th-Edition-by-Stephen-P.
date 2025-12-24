#include <iostream>
using namespace std;
int inch_to_ft(int);
int modulus_inch(int);

int main()
{
    int inches;
    cout << "Enter your height in inches: __\b\b";
    cin  >> inches;
    // Initializing constant int after giving input
    const int c_inches = inches;
    cout << endl;

    int foot = inch_to_ft(c_inches);
    int inch = modulus_inch(c_inches);
    cout << "Your height is " << foot << " feet"
         << " and " << inch << " inch." 
         << endl;

    return 0;
}

int inch_to_ft(int inch)
{
    return inch / 12;
}

int modulus_inch(int m_inch)
{
    return m_inch % 12;
}