#include <iostream>
using namespace std;
double astro_conv(double);

int main()
{
    double light_years;
    cout << "Enter the number of light years: ";
    cin  >> light_years;

    double astro_units = astro_conv(light_years);
    cout << light_years << " light years = "
         << astro_units << " astronomical units."
         << endl;
         
    return 0;
}

double astro_conv(double ly)
{
    return ly * 63240;
}