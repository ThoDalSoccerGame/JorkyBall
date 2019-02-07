/* Head de la classe MultiHorsLigne du jeu jorkyball */

#include "Fenetre.h"
#include "Ballon.h"
#include "Cage.h"
#include "Personnage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#ifndef MULTIHORSLIGNE_H
#define MULTIHORSLIGNE_H

/* Cette classe servira à contenir le mode de jeu en solo entre deux joueurs */
class MultiHorsLigne
{
public:

	/************* Créateur et destructeur de la classe MultiHorsLigne **************/
	MultiHorsLigne();
	~MultiHorsLigne();

	/********************** Méthode de la classe MultiHorsLigne **********************/
	/* Activation de la partie MultiHorsLigne */
	void activation();
private :

	sf::Window window;
};

#endif MULTIHORSLIGNE_H
