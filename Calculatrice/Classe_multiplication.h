#ifndef Classe_MULTIPLICATION_H
#define Classe_MULTIPLICATION_H

#include "Classe_Mère.h"

class Classe_multiplication : public Classe_Mere 

{
    public:
    double calcul(double a, double b);
};
#include "Classe_multiplication.cpp"
#endif