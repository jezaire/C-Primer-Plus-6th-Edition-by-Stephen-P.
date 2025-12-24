#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    
    int degrees;
    cout << "First, enter the degrees: ";
    cin  >> degrees;

    int minutes;
    cout << "Next, enter the minutes of arc: ";
    cin  >> minutes;

    int seconds;
    cout << "Finally, enter the seconds of arc: ";
    cin  >> seconds;

    const double sec_arc_min = 60;
    const double min_arc_degree = 3600;
    double decimal_format = degrees + (minutes / sec_arc_min) + (seconds / min_arc_degree);
    
    cout << degrees << " degrees, " << minutes << " minutes, "
         << seconds << " seconds = " << decimal_format << " degrees."
         << endl;

    return 0;
}



