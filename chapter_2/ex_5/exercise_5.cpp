#include <iostream>
using namespace std;
int fahren_conv(int);

int main()
{
    int celcius;
    cout << "Please enter a Celcius value: ";
    cin  >> celcius;

    int fahrenheit = fahren_conv(celcius);
    cout << celcius << " degrees Celcius is equal to "
         << fahrenheit << " degrees Fahrenheit."
         << endl;

    return 0;
}

int fahren_conv(int cl)
{
    return cl * 1.8 + 32;
}