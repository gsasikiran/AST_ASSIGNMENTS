#include <iostream>
#include <vector>

using namespace std;

void get_number_stats(vector<int> &input_list, vector<double> &output_list)
{
    //Finding sum
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
int main()
{
    vector<double> out ;
    vector<int> number_list = {1,9,8,7,5,4,2,6};
    get_number_stats(number_list,out);
    return 0;
}
