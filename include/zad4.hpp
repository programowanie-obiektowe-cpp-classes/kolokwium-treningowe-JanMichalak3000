#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector< Tagliatelle >& vec)
{
    double M = 0;
    int    i = 1;
    for (auto it = vec.crbegin(); it != vec.crend(); it++){
        M += it->ileMaki(i);
        i++;
    }
    if (M > 100)
        throw(1);
    else if (M > 50)
        throw(1.);
    else return M;



}