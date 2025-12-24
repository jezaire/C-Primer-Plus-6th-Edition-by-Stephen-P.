#include <iostream>
using namespace std;
float ft_to_inch(float, float);
double pounds_to_kg(double);

int main()
{
    float feet;
    cout << "Enter your height in ft: _\b";
    cin  >> feet;
    const float c_feet = feet;
    cout << endl;

    float inches;
    cout << "Enter your height in remainder inch: _\b";
    cin  >> inches;
    const float c_inches = inches;
    cout << endl;

    double pounds;
    cout << "Enter your weight in pounds: __\b\b";
    cin >> pounds;
    const double c_pounds = pounds;
    cout << endl;
    
    const double m_height = ft_to_inch(c_feet, c_inches);
    const double kg_weight = pounds_to_kg(c_pounds);
    double sqrt_height = m_height * m_height;

    const double bmi = kg_weight / sqrt_height;
    cout << "Your BMI is " << bmi << endl;
    
    return 0;
}

float ft_to_inch(float ft, float inch)
{
    return ((ft * 12) + inch) * 0.0254;
}

double pounds_to_kg(double conv_pnds)
{
    return conv_pnds / 2.2;
}