#include "solver.hpp"
#include "solver.hpp"

equation_solver::equation_solver()
{

}

equation_solver::~equation_solver()
{

}

bool equation_solver::solve_equation(const int k , const int n )
{
    int i;
    double a;
    double s;
    s = (o_1)/(1-o_1);
    for (i=2; i<k; i++)
    {
        s = (o_i_lesser/(1-o_i_lesser))*s;
    }
    for (i=k; k<n; i++)
    {
        s = (o_i_greater/(1-o_i_greater))*s;
    }
    this->result = s;
    return true;
}

ldouble equation_solver::get_result()
{
    return this->result;
}
