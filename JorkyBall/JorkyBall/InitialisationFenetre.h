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

/* Cette classe servira � contenir le mode de jeu en solo entre deux joueurs */
class InitialisationFenetre
{
public:

	/************* Cr�ateur et destructeur de la classe InitialisationFenetre **************/
	InitialisationFenetre();
	~InitialisationFenetre();

	/********************** M�thode de la classe InitialisationFenetre **********************/
	/* Activation de la partie InitialisationFenetre */
	void activation();
};

#endif INITIALISATIONFENETRE_H
