#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename T>

std::size_t polejSosem(const Tagliatelle& t, const T& a)
{
    return a.polej(t);
}