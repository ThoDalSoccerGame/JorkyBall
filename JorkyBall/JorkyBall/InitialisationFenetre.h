/* Head de la classe InitialisationFenetre du jeu jorkyball */

#include "Fenetre.h"
#include "Ballon.h"
#include "Cage.h"
#include "Personnage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#ifndef INITIALISATIONFENETRE_H
#define INITIALISATIONFENETRE_H

/* Cette classe servira à contenir le mode de jeu en solo entre deux joueurs */
class InitialisationFenetre
{
public:

	/************* Créateur et destructeur de la classe InitialisationFenetre **************/
	InitialisationFenetre();
	~InitialisationFenetre();

	/********************** Méthode de la classe InitialisationFenetre **********************/
	/* Activation de la partie InitialisationFenetre */
	void activation();
};

#endif INITIALISATIONFENETRE_H
