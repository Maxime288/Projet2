#include "Classe_complexe.cpp"

Classe_Complexe::Classe_Complexe(double r, double i) : reel(r), imaginaire(i) 
{

}

double Classe_Complexe::getReel() const 
{
    return reel;
}

double Classe_Complexe::getImaginaire() const 
{
    return imaginaire;
}

void Classe_Complexe::setReel(double r) 
{
    reel = r;
}

void Classe_Complexe::setImaginaire(double i) 
{
    imaginaire = i;
}

Classe_Complexe Classe_Complexe::operator+(const Classe_Complexe& autre) const 
{
    double nouveauReel = reel + autre.reel;
    double nouveauImaginaire = imaginaire + autre.imaginaire;
    return Classe_Complexe(nouveauReel, nouveauImaginaire);
}

Classe_Complexe Classe_Complexe::operator-(const Classe_Complexe& autre) const 
{
    double nouveauReel = reel - autre.reel;
    double nouveauImaginaire = imaginaire - autre.imaginaire;
    return Classe_Complexe(nouveauReel, nouveauImaginaire);
}

Classe_Complexe Classe_Complexe::operator*(const Classe_Complexe& autre) const 
{
    double nouveauReel = reel * autre.reel - imaginaire * autre.imaginaire;
    double nouveauImaginaire = reel * autre.imaginaire + imaginaire * autre.reel;
    return Classe_Complexe(nouveauReel, nouveauImaginaire);
}

Classe_Complexe Classe_Complexe::operator/(const Classe_Complexe& autre) const 
{
    double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
    double nouveauReel = (reel * autre.reel + imaginaire * autre.imaginaire) / denominateur;
    double nouveauImaginaire = (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur;
    return Classe_Complexe(nouveauReel, nouveauImaginaire);
}
#include "Classe_complexe.cpp"
