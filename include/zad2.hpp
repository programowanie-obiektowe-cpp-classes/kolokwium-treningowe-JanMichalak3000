#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne: public Makaron
{
    double ileMaki(unsigned W) const { 
        return static_cast< double >(W);
    }
};

    Makaron* Makaron::gotujMakaron(const std::string& S)
{
    if (S.front() == S.back())
        return new Tagliatelle(3.14, 0.42, 0.1);
    else
        return new Penne;
}