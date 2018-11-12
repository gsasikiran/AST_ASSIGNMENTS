#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <iostream>
#include <vector>

using namespace std;

/*
 * Finds the Sum , SD , Product and Variance of list of numbers
*/
void get_number_stats(vector<int> &input_list, vector<double> &output_list)
{
    int sum = 0;
    int product = 1;
    int average = 0;

    for (auto number : input_list)
    {
        sum += number;
        product *= number;
    }
    average = sum/input_list.size();

    int standard_deviation = 0;
    for(auto number : input_list)
    {
        int val = (number - average)^2;
        standard_deviation += val;
    }

    float variance = standard_deviation/ float(input_list.size());

    output_list.push_back(sum);
    output_list.push_back(product);
    output_list.push_back(average);
    output_list.push_back(variance);

    cout<<"Sum of the numbers   :"<<sum<<endl;
    cout<<"Product of the numbers:"<<product<<endl;
    cout<<"Average of all numbers :"<<average<<endl;
    cout<<"Variance of numbers  :"<<variance<<endl;
}


/*
 * Checks if two float numbers are equal or not
*/
bool check_float_equal(double in_1 ,double in_2 )
{
    if((in_1 - in_2) < 0.001)
    {
        return true;
    }
    return false;
}


TEST_CASE()
{

    SECTION( "Test 1" )
    {
        vector<int> number_list = {1,2,3,4,5,6,7,8} ;
        vector<double> output_list;
        get_number_stats(number_list,output_list);

        REQUIRE( check_float_equal(output_list[0] , 100) == true);
        REQUIRE( check_float_equal(output_list[1] , 100) == true);
        REQUIRE( check_float_equal(output_list[2] , 100) == true);
        REQUIRE( check_float_equal(output_list[3] , 100) == true);

    }

    SECTION( "Test 2" )
    {
        vector<int> number_list = {1,2,3} ;
        vector<double> output_list;
        get_number_stats(number_list,output_list);

        REQUIRE( check_float_equal(output_list[0] , 100) == true);
        REQUIRE( check_float_equal(output_list[1] , 100) == true);
        REQUIRE( check_float_equal(output_list[2] , 100) == true);
        REQUIRE( check_float_equal(output_list[3] , 100) == true);
    }

    SECTION( "Test 3" )
    {
        vector<int> number_list = {0,0,0,0} ;
        vector<double> output_list;
        get_number_stats(number_list,output_list);

        REQUIRE( check_float_equal(output_list[0] , 0) == true);
        REQUIRE( check_float_equal(output_list[1] , 0) == true);
        REQUIRE( check_float_equal(output_list[2] , 0) == true);
        REQUIRE( check_float_equal(output_list[3] , 0) == true);
    }


}

/*
int main()
{
    vector<double> out ;
    vector<int> number_list = {1,9,8,7,5,4,2,6};
    get_number_stats(number_list,out);
    return 0;
}
*/
