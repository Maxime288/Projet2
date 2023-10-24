#ifndef CLASSE_COMPLEXE_H
#define CLASSE_COMPLEXE_H

class Classe_Complexe 
{
private:
    double reel;
    double imaginaire;

public:
    Classe_Complexe(double r = 0.0, double i = 0.0);
    double getReel() const;
    double getImaginaire() const;
    void setReel(double r);
    void setImaginaire(double i);
    Classe_Complexe operator+(const Classe_Complexe& autre) const;
    Classe_Complexe operator-(const Classe_Complexe& autre) const;
    Classe_Complexe operator*(const Classe_Complexe& autre) const;
    Classe_Complexe operator/(const Classe_Complexe& autre) const;
};
#include "Classe_complexe.h"
#endif  // CLASSE_COMPLEXE_H
