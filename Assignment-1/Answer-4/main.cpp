#include <iostream>
#include <typeinfo>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

typedef long double bignumber;

const bignumber BIG_PI = 3.14159265358;

bignumber find_cicumference(int radius , bignumber pi)
{
    return pi * pow(radius,2);
}

bignumber get_float_precision(double precision)
{
    return (floor((BIG_PI * pow(10, precision) + 0.5)) / pow(10, precision));
}

int main()
{
        int radius = 10;
        cout << "Please enter the radius of the circle : ";
        cin >> radius;

        int pi_approx = 5;
        cout << "Enter the PI precision (0-6): ";
        cin >> pi_approx ;

        bignumber pi = get_float_precision(pi_approx);

        cout<<"PI : "<<pi<<endl;
        bignumber circumference  = find_cicumference(radius , pi);

        cout<<circumference<<endl;
        return 0;
}

