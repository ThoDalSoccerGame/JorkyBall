/* Head de la classe Cage du jeu jorkyball */

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#ifndef CAGE_H
#define CAGE_H

class Cage
{
public:

	/************* Créateur et destructeur de la classe Cage **************/
	Cage();
	~Cage();

	/********************** Méthode de la classe Cage **********************/
	/* Création du visuel de la cage */
	void create_Cage(int sens);

	/* Renvoie une force auparavant reçu */
	double return_Force();

	/* Recevoir une force par un autre objet */
	double receive_Force();

	/* Gestion de la collision */
	void collision();

private:

	// 0 => cage de droite et 1 => cage de gauche
	int sens;

	double force_renvoyer;
	double force_recu;

	// Les attributs seront évalué plus tard /!\ Gwendal réfléchit à la collision !!!!!!
};

#endif CAGE_H