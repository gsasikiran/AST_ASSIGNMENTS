#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

/* References
 * [1]https://stackoverflow.com/questions/686353/c-random-float-number-generation
 * [2]
 */

using namespace std;


double get_sum(vector<double> &input)
{
    double output = std::accumulate(input.begin(), input.end(), 0);
    return output;
}

double get_product(vector<double> &input)
{
    double output = std::accumulate(input.begin(), input.end(), 1, std::multiplies<int>()) ;
    return output;
}

double get_max(vector<double> &input)
{
    double output = *std::max_element(input.begin(), input.end()) ; ;
    return output;
}

double get_min(vector<double> &input)
{
    double output = *std::min_element(input.begin(), input.end()) ;
    return output;
}

double get_average(vector<double> &input)
{
    double sum = std::accumulate(input.begin(), input.end(), 0);
    double output = sum / input.size() ;
    return output;
}

double get_variance(vector<double> &input)
{
    double output = 0.0 ;
    for(auto item : input)
    {

    }
    return output;
}


vector<double> get_random_doubles(int n)
{
    vector<double>output;
    for(int i = 0 ; i < n  ; i++)
    {
        double random_double = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/10000));
        cout << random_double <<endl;
        output.push_back(random_double);
    }
    return output;
}


int main()
{
    int n1 = 0 ;
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
