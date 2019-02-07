#include "Fenetre.h"
#include "Ballon.h"
#include "Cage.h"
#include "Personnage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "MultiHorsLigne.h"

using namespace std;
using namespace sf;

/* Créateur et destructeur de la classe MultiHorsLigne */
MultiHorsLigne::MultiHorsLigne()
{
	cout << "Création d'un objet de type MultiHorsLigne" << endl;
}

MultiHorsLigne::~MultiHorsLigne()
{
	cout << "Destruction d'un objet de type MultiHorsLigne" << endl;
}

/* Methode principal */
void MultiHorsLigne::activation()
{
	// Initialisation

	// Instanciation de tout les objets dont on a besoin.
	Ballon Ballon;
	Cage Cage_droite, Cage_gauche;
	Personnage Gardien_droite, Attaquant_droite, Gardien_gauche, Attaquant_gauche;

	// Affichage des sprites :
	Ballon.create_Ballon();
	Cage_droite.create_Cage(0);
	Cage_gauche.create_Cage(1);
	Gardien_droite.create_Personnage(0, 0);
	Attaquant_droite.create_Personnage(0, 1);
	Gardien_gauche.create_Personnage(1, 0);
	Attaquant_gauche.create_Personnage(1, 1);

}
