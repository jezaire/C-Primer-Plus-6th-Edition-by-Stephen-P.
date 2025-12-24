#include <iostream>
using namespace std;
int yard_convert(int);

int main()
{
    int furlong;
    cout << "Enter a distance in furlong: ";
    cin  >> furlong;
    cout << endl;

    int yard = yard_convert(furlong);
    cout << furlong << " is equal to "
         << yard << " yard." << endl;

    return 0;
}

int yard_convert(int fr)
{
    return fr * 220;
}