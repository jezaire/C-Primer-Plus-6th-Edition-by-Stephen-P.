#include <iostream>
using namespace std;
int age_conv(int);

int main()
{
    int age;
    cout << "Enter your age: ";
    cin  >> age;
    cout << endl;

    int age_month = age_conv(age);
    cout << "Your age in months is "
         << age_month << "." << endl;

    return 0;
}

int age_conv(int ag)
{
    return ag * 12;
}