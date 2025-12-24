#include <iostream>
using namespace std;
void display(int, int);

int main()
{
    int hours;
    cout << "Enter the numbers of hours: ";
    cin  >> hours;

    int minutes;
    cout << "Enter the numbers of minutes: ";
    cin  >> minutes;
    cout << endl;

    display(hours, minutes);

    return 0;
}

void display(int hr, int mn)
{
    cout << hr << ":" << mn << endl;
}