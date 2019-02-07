#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "MultiHorsLigne.h"

using namespace std;
using namespace sf;

/* Déclaration des variables globales */
sf::Window window;

int main()
{
#pragma region Structure
/*
// ZONE PAYANTE : *

// BLOC INITIALISATION DE LA FENETRE 
// BLOC CONNECTION
	// BLOC MENU
		// HORS LIGNE 
			// BLOC SOLO (contre un bot)
			// BLOC MULTI (contre un autre utilisateur)
		// EN LIGNE *
			// JEU EN LIGNE *
			// JEU EN LOCAL *
		// CHOIX DU MODE *
			// BLOC SOLO (contre un bot) *
			// BLOC MULTI (contre un autre utilisateur) *
		// SKIN
			// CREATION DE SKIN *
			// SKIN DE LA BOUTIQUE => pas de skin payant  
		// PARAMETRE*/
#pragma endregion Structure


		//Initialisation des classes 
		MultiHorsLigne BLOC_MultiHorsLigne;

		// BLOC INITIALISATION DE LA FENETRE
		// BLOC INSCRIPTION 

		// BLOC Multi Hors Ligne
		BLOC_MultiHorsLigne.activation(); 


	return 0;
}

