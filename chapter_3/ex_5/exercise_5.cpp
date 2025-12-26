#include <iostream>
using namespace std;

int main()
{

    long long world_pop;
    cout << "Enter the world's population: ";
    cin  >> world_pop;

    long long us_pop;
    cout << "Enter the population of the US: ";
    cin  >> us_pop;

    float pop_percentage = float(us_pop) / float(world_pop) * 100;

    cout << "The population of the US is " << pop_percentage
         << "%" << " of the world population.";

    return 0;
}
