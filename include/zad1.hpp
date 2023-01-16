#include "catch.hpp"

class Makaron
{
public:
    virtual double ileMaki(unsigned P) const  = 0;
    static Makaron* gotujMakaron(const std::string& S);
};

class Tagliatelle :public Makaron
{
public:
    Tagliatelle(double l, double w, double r) : L(l), W(w), R(r){}
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

    double ileMaki(unsigned P) const { 
        return P * L * W * (1. - R) * C;
    } 

private: 
    double L;
    double W;
    double R;
    static const double C;

};