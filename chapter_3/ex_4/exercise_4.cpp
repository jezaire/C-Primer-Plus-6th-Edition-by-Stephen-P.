#include <iostream>
using namespace std;

int main()
{
    long long numb_seconds;
    cout << "Enter the number of seconds: ";
    cin  >> numb_seconds;

    const int days = numb_seconds / 86400;
    const int mod_days = numb_seconds % 86400;
    const int hours = mod_days / 3600;
    const int mod_hours= mod_days % 3600;
    const int minutes = mod_hours / 60;
    const int seconds = mod_hours % 60;

    cout << numb_seconds << " = " << days 
         << " days, " << hours << " hours, " << minutes 
         << " minutes, " << seconds << " seconds."
         << endl;

    return 0;

}