
#include <iostream>
#include <typeinfo>
#include <cmath>
#include <vector>
#include <string>
#include <limits>
#include <chrono>

#include <bits/stdc++.h>

using namespace std;


// Getting min and max datatypes using STL
const int MAX_INT = std::numeric_limits<int>::max();
const int MIN_INT = std::numeric_limits<int>::min();

const long int MAX_LONG_INT = std::numeric_limits<long int>::max();
const long int MIN_LONG_INT = std::numeric_limits<long int>::min();


// Template program to check time taken by the function
typedef std::chrono::high_resolution_clock::time_point Time;
#define duration(a) std::chrono::duration_cast<std::chrono::nanoseconds>(a).count()
#define current_time() std::chrono::high_resolution_clock::now()

template<typename F, typename... Args>
double get_function_runtime(F func, Args&&... args){
    Time t1=current_time();
    func(std::forward<Args>(args)...);
    return duration(current_time()-t1);
}


// Sieve function
vector<int> run_eratosthenes_sieve(long int upper_bound)
{
    vector<int> primes;

    // fill vector with candidates
    for(int i = 2; i < upper_bound; i++)
    {
        primes.push_back(i);
    }

    // for each value in the vector...
    for(int i = 0; i < primes.size(); i++)
    {
        //get the value
        int v = primes[i];

        if (v!=0) {
            //remove all multiples of the value
            int x = i+v;
            while(x < primes.size()) {
                primes[x]=0;
                x = x+v;
            }
        }
    }

    primes.erase(std::remove(primes.begin(), primes.end(), 0), primes.end());
    return primes;
}

void print_vector(vector<int> & in_vector)
{
    for(auto val : in_vector)
    {
        cout << val << " , ";
    }
    cout << endl;
}

int main()
{

    auto output_max_int_prime_vector = run_eratosthenes_sieve(1000) ;

    //** Runing the below functions will cause the computer to hang
    //auto output_max_int_prime_vector = run_eratosthenes_sieve(MAX_INT) ;
    //auto output_max_long_int_prime_vector = run_eratosthenes_sieve(MAX_LONG_INT);

    print_vector(output_max_int_prime_vector);


    return 0;
}

