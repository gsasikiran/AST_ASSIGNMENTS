#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <iostream>
#include <typeinfo>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;

typedef long long unsigned int longint;
typedef longint(*functionPtr)(longint);
typedef vector<longint> single_result_vector;


longint function_1(longint val){ return 2*val; }

longint function_2(longint val){ return pow(val,0.5); }

longint function_3(longint val){ return pow(10,val); }

longint function_4(longint val){ return pow(val,3);  }

longint function_5(longint val){ return pow(2,1/float(val)); }

longint function_6(longint val){ return exp(val);  }


// Function that takes in an function pointer and runs for range 0-100 input
single_result_vector iterate_for_function(functionPtr input_fn)
{
    single_result_vector function_results;

    for(int i = 1 ; i <= 100 ; i++)
    {
        function_results.push_back(input_fn(i));
    }

    return function_results;
}

// Prints the values as a columns
void pretty_print(vector<single_result_vector> & input_result_vectors)
{
    for(long long int i = 1 ; i < 100 ; i++)
    {
        for(auto vec : input_result_vectors)
        {
            cout<<setw(15)<<vec[i]<< "   | ";
        }
        cout<<endl;
    }
}

TEST_CASE()
{

    SECTION( "Running all the six functions to calculate the values" )
    {
        vector<single_result_vector> result_vectors;

        single_result_vector function_1_results = iterate_for_function(function_1);
        result_vectors.push_back(function_1_results);
        REQUIRE( function_1_results.size() == 100 );

        single_result_vector function_2_results = iterate_for_function(function_2);
        result_vectors.push_back(function_2_results);
        REQUIRE( function_2_results.size() == 100 );

        single_result_vector function_3_results = iterate_for_function(function_3);
        result_vectors.push_back(function_3_results);
        REQUIRE( function_3_results.size() == 100 );

        single_result_vector function_4_results = iterate_for_function(function_4);
        result_vectors.push_back(function_4_results);
        REQUIRE( function_4_results.size() == 100 );

        single_result_vector function_5_results = iterate_for_function(function_5);
        result_vectors.push_back(function_5_results);
        REQUIRE( function_5_results.size() == 100 );

        single_result_vector function_6_results = iterate_for_function(function_6);
        result_vectors.push_back(function_6_results);
        REQUIRE( function_6_results.size() == 100 );

        SECTION( "Printing the results from all the six results" )
        {
            REQUIRE( result_vectors.size() == 6 );
            pretty_print(result_vectors);
        }
    }


}


//int main()
//{

//    vector<single_result_vector> result_vectors;

//    single_result_vector function_1_results = iterate_for_function(function_1);
//    result_vectors.push_back(function_1_results);

//    single_result_vector function_2_results = iterate_for_function(function_2);
//    result_vectors.push_back(function_2_results);

//    single_result_vector function_3_results = iterate_for_function(function_3);
//    result_vectors.push_back(function_3_results);

//    single_result_vector function_4_results = iterate_for_function(function_4);
//    result_vectors.push_back(function_4_results);

//    single_result_vector function_5_results = iterate_for_function(function_5);
//    result_vectors.push_back(function_5_results);

//    single_result_vector function_6_results = iterate_for_function(function_6);
//    result_vectors.push_back(function_6_results);

//    pretty_print(result_vectors);


//    return 0;
//}


