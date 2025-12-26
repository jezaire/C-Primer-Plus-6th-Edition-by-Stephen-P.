#include <iostream>
using namespace std;

int main()
{
    float distance;
    cout << "Enter distance in km: ";
    cin  >> distance;

    float fuel;
    cout << "Enter fuel in liter: ";
    cin  >> fuel;

    float ltr_km = fuel / distance * 100;

    cout << "Your car has used " << ltr_km
         << " litre per 100 km." << endl;

    return 0;
}