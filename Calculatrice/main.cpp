#include <iostream>
#include <cmath> 
#include "Classe_Mère.cpp" //Ce code est un exemple d'utilisation des classes "Classe_Mère", 
//"Classe_Fille_1" et "Classe_Fille_2" pour effectuer des opérations mathématiques.
//Il inclut les fichiers d'en-tête nécessaires, tels que "iostream", "Classe_Mère.h", "Classe_Fille_1.h" et "Classe_Fille_2.h".
#include "Classe_Mère.h"
#include "Classe_Fille_1.h"
#include "Classe_Fille_2.h"
#include "Classe_multiplication.h"
#include "Classe_division.h"
#include "Classe_division.h"
using namespace std;
int main() //définie, qui est le point d'entrée du programme. À l'intérieur de la fonction main, deux objets sont créés : 
//"addition" de type "Classe_Fille_1" et "soustraction" de type "Classe_Fille_2".
{
    Classe_Fille_1 addition;
    Classe_Fille_2 soustraction;
    Classe_multiplication multiplication;
    Classe_division division;
    
    
    double a, b;
    std::cout << "Entrez deux nombres : "; 
    std::cin >> a >> b; //Ensuite, l'utilisateur est invité à saisir deux nombres à l'aide de "std::cin". 
    //Ces nombres sont stockés dans les variables "a" et "b".

    double resultat_addition = addition.calcul(a, b);
    double resultat_soustraction = soustraction.calcul(a, b);
    double resultat_multiplication = multiplication.calcul(a, b);
    double resultat_division = division.calcul(a, b);

    std::cout << "Resultat de l'addition : " << resultat_addition << std::endl; //Ensuite, les fonctions "calcul" des objets 
    //"addition" et "soustraction" sont appelées avec les valeurs de "a" et "b". Les résultats sont stockés dans les variables 
    //"resultat_addition" et "resultat_soustraction".
    std::cout << "Resultat de la soustraction : " << resultat_soustraction << std::endl;

    std::cout << "Resultat de la multiplication : " << resultat_multiplication << std::endl;
    std::cout << "Resultat de la division : " << resultat_division << std::endl;
    return 0;
}
//En résumé, ce code crée des objets de classes dérivées de la classe mère "Classe_Mère" et utilise leurs fonctions "calcul" 
//pour effectuer des opérations mathématiques (addition et soustraction) sur deux nombres saisis par l'utilisateur.

//calculatrice