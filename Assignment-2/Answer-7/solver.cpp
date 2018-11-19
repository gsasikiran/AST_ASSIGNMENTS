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

    double loop_result = (o_1)/(1-o_1);
    for (int i=2; i<n; i++)
    {
        if(i<k)
        {
            loop_result = (1/(o_i_lesser/(1-o_i_lesser)))*loop_result;
        }
        else
        {
            loop_result = (1/(o_i_greater/(1-o_i_greater)))*loop_result;
        }

    }
    this->result = loop_result;
    return true;
}

ldouble equation_solver::get_result()
{
    return this->result;
}
