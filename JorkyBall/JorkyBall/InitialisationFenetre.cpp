#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "InitialisationFenetre.h"

using namespace std;
using namespace sf;

/* Cr�ateur et destructeur de la classe InitialisationFenetre */
InitialisationFenetre::InitialisationFenetre()
{
	cout << "Cr�ation d'un objet de type InitialisationFenetre" << endl;
}

InitialisationFenetre::~InitialisationFenetre()
{
	cout << "Destruction d'un objet de type InitialisationFenetre" << endl;
}

/* Methode principal */
void InitialisationFenetre::activation()
{
	// Initialisation de la classe 
	Fenetre fenetre_principal;

	// Cr�ation de la fenetre 
	fenetre_principal.create_Fenetre();


}
