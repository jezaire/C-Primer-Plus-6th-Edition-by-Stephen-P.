#include <iostream>
#include <cmath>
using namespace std;
int ft_to_inch(int, int);
double pounds_to_kg(double);

int main()
{
    int feet;
    cout << "Enter your height in ft: _\b";
    cin  >> feet;
    const int c_feet = feet;
    cout << endl;

    int inches;
    cout << "Enter your height in remainder inch: _\b";
    cin  >> inches;
    const int c_inches = inches;
    cout << endl;

    double pounds;
    cout << "Enter your weight in pounds: _\b";
    cin >> pounds;
    const int c_pounds = pounds;
    cout << endl;
    
    int inch_height = ft_to_inch(c_feet, c_inches);
    double m_height = inch_height  * 0.0254;
    double kg_weight = pounds_to_kg(c_pounds);
    double sqrt_height = sqrt(m_height);

    const double bmi = kg_weight / sqrt_height;
    cout << "Your BMI is " << bmi << endl;
    
    return 0;
}

int ft_to_inch(int ft, int inch)
{
    return (ft * 12) + inch;
}

double pounds_to_kg(double conv_pnds)
{
}