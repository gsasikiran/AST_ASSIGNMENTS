#pragma once

#include <vector>

using namespace std;



typedef  long double ldouble;

class equation_solver
{

public:
    equation_solver();
    ~equation_solver();

    bool solve_equation(const int k, const int n);
    ldouble get_result();

private:

    float result;

    const float o_1 = 0.5;
    const float o_i_lesser  = 0.9;
    const float o_i_greater = 0.1;

};
