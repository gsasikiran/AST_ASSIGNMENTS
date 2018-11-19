#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

/* References
 * [1]https://stackoverflow.com/questions/686353/c-random-float-number-generation
 * [2]
 */

using namespace std;


double get_sum(const vector<double> &input)
{
    double output = std::accumulate(input.begin(), input.end(), 0);
    return output;
}

double get_product(const vector<double> &input)
{
    double output = std::accumulate(input.begin(), input.end(), 1, std::multiplies<int>()) ;
    return output;
}

double get_max(const vector<double> &input)
{
    double output = *std::max_element(input.begin(), input.end()) ; ;
    return output;
}

double get_min(const vector<double> &input)
{
    double output = *std::min_element(input.begin(), input.end()) ;
    return output;
}

double get_average(const vector<double> &input)
{
    double sum = std::accumulate(input.begin(), input.end(), 0);
    double output = sum / input.size() ;
    return output;
}

double get_variance(const vector<double> &input)
{
    double output = 0.0 ;
    double average = get_average(input);

    double standard_deviation = 0;
    for(double number : input)
    {
        double val = pow((number - average),2);
        standard_deviation += val;
    }

    output = standard_deviation/ double(input.size());

    return output;
}


vector<double> get_random_doubles(const int n)
{
    vector<double> output;
    for(int i = 0 ; i < n  ; i++)
    {
        double random_double = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/10000));
        output.push_back(random_double);
    }
    return output;
}

/*
int main()
{
    int n1 = 100 ;
    int n2 = 0 ;
    int n3 = 0 ;

    auto double_list = get_random_doubles(n1);

    double result_sum = get_sum(double_list);
    double result_product = get_product(double_list);
    double result_max = get_max(double_list);
    double result_min = get_min(double_list);
    double result_average = get_average(double_list);
    double result_variance = get_variance(double_list);
}
*/

TEST_CASE()
{
    int n1;
    int n2;
    int n3;

    cout<<"Give the value of n1"<<endl;
    cin>>n1;
    cout<<"Give the value of n2"<<endl;
    cin>>n2;
    cout<<"Give the last value also"<<endl;
    cin>>n3;
    SECTION("Test 1")
    {
        REQUIRE((n1<100000 && n1>1) == true);
        REQUIRE((n2<n3) == true);
     }
    SECTION("Test 2")
    {
        int output_length;
        output_length = get_random_doubles(n1).size();
        REQUIRE((n1 == output_length) == true);
    }
    SECTION("Test 3")
    {

    }
}
