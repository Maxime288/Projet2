#ifndef CLASSE_FILLE_1_H //utilisée pour vérifier si le symbole "CLASSE_FILLE_1_H" n'a pas déjà été défini. 
//Si ce n'est pas le cas, le code entre "#ifndef" et "#endif" sera inclus dans le programme. 
//Cela permet d'éviter les doublons d'inclusion de fichiers.
#define CLASSE_FILLE_1_H

#include "Classe_Mère.h" //qui contient la déclaration de la classe mère.

class Classe_Fille_1 : public Classe_Mere  //déclarée en utilisant le mot-clé "class". 
//Elle hérite de la classe mère "Classe_Mere" en utilisant le mot-clé "public". 
//Cela signifie que la classe "Classe_Fille_1" aura accès aux membres publics de la classe mère.
{
public:
    double calcul(double a, double b); //déclare une fonction membre appelée "calcul" qui prend deux paramètres de type double, 
    //a et b, et qui renvoie un résultat de type double.
};
#include "Classe_Fille_1.cpp" //contient les définitions des fonctions membres de la classe "Classe_Fille_1".
#endif