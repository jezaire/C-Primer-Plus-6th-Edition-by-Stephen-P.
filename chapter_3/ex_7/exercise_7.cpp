#include <iostream>
using namespace std;

int main()
{
    int liter_km;
    cout << "Enter the amount of fuel in liter per 100 km: ";
    cin  >> liter_km;
    cout << endl;

    double miles_gl = 235.2145 / liter_km;
    cout << liter_km << " liter per 100 km is equal to "
         << miles_gl << " miles per galloon." << endl;

    return 0;
}