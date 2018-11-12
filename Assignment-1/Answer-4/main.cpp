#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <iostream>
#include <typeinfo>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

typedef long double bignumber;

const bignumber BIG_PI = 3.14159265358;

/*
 * Function to find the circumference of the circle
 * give the radius and the PI value
 */
bignumber find_cicumference(int radius , bignumber pi)
{
    return pi * pow(radius,2);
}

/*
 * Gives the PI output given the precision digits
 */
bignumber get_float_precision(double precision)
{
    return (floor((BIG_PI * pow(10, precision) + 0.5)) / pow(10, precision));
}

TEST_CASE()
{

    SECTION( "Running Tests with default values" )
    {

        SECTION( "Test 1" )
        {
            int radius = 5;
            int pi_approx = 5;

            bignumber pi = get_float_precision(pi_approx);
            bignumber circumference  = find_cicumference(radius , pi);
            REQUIRE( (circumference - 78.5398) < 0.001);
        }

        SECTION( "Test 2" )
        {
            int radius = 5;
            int pi_approx = 2;

            bignumber pi = get_float_precision(pi_approx);
            bignumber circumference  = find_cicumference(radius , pi);
            REQUIRE( circumference ==  78.5);
        }


    }
}


//int main()
//{
//        int radius = 10;
//        cout << "Please enter the radius of the circle : ";
//        cin >> radius;

//        int pi_approx = 5;
//        cout << "Enter the PI precision (0-6): ";
//        cin >> pi_approx ;

//        bignumber pi = get_float_precision(pi_approx);

//        cout<<"PI : "<<pi<<endl;
//        bignumber circumference  = find_cicumference(radius , pi);

//        cout<<circumference<<endl;
//        return 0;
//}

