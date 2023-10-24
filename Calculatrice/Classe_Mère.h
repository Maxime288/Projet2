#ifndef CLASSE_MERE_H //est une directive de préprocesseur qui empêche l'inclusion multiple du fichier d'en-tête "Classe_Mere.h". 
//Cela évite les problèmes liés à la redéfinition des symboles.

#define CLASSE_MERE_H //définit le symbole "CLASSE_MERE_H" afin de signaler que le fichier d'en-tête est inclus.

class Classe_Mere //Cette classe est déclarée avec le mot-clé "class" suivi du nom de la classe. Dans ce cas, la classe est déclarée sans corps (entre les accolades {}). 
//Cela signifie qu'il s'agit d'une classe abstraite, ce qui est indiqué par la méthode virtuelle pure "calcul(double a, double b) = 0;". 
//Une classe abstraite ne peut pas être instanciée, mais elle peut être utilisée comme classe de base pour d'autres classes dérivées.
{
public:
    virtual double calcul(double a, double b) = 0;
};
#include "Classe_Mère.cpp" //qui inclut le fichier source "Classe_Mère.cpp". 
//Il est généralement recommandé d'inclure uniquement les fichiers d'en-tête (.h) et de laisser les fichiers source (.cpp) être compilés séparément.

#endif //marque la fin de la section conditionnelle commencée avec "#ifndef". 
//Cela clôt la section conditionnelle et indique la fin du fichier d'en-tête.