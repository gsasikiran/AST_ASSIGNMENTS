#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <iostream>
#include "solver.hpp"

using namespace std;


TEST_CASE()
{

    equation_solver solver;

    SECTION("Test 1")
    {
        solver.solve_equation(10,20);
        REQUIRE(solver.get_result()==81);
    }

    SECTION("Test 2")
    {
        solver.solve_equation(100,120);
        REQUIRE(solver.get_result()==0);
    }

}

/*
int main()
{

    equation_solver solver;

    solver.solve_equation(10,20);
    cout<<solver.get_result()<<endl;

    solver.solve_equation(100,120);
    solver.get_result();

    solver.solve_equation(1000,1200);
    solver.get_result();

    solver.solve_equation(10000,10200);
    solver.get_result();


    return 0;
}
*/
