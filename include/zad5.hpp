#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template <typename T>
void sortujTagliatelle(T beg, T end)
{
    std::sort(
        beg, end, [](Tagliatelle& t1, Tagliatelle& t2) { 
            return t1.ileMaki(1) > t2.ileMaki(1); 
        });
}