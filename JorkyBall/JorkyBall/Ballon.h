/* Head de la classe Ballon du jeu jorkyball */

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#ifndef BALLON_H
#define BALLON_H

class Ballon
{
public:

	/************* Créateur et destructeur de la classe Ballon **************/
	Ballon();
	~Ballon();

	/********************** Méthode de la classe Ballon **********************/
	/* Création du visuel de la Balle */
	void create_Ballon();

	/* Renvoie une force auparavant reçu */
	double return_Force();

	/* Recevoir une force par un autre objet */
	double receive_Force();

	/* Vitesse actuelle du ballon */
	double vitesse();

	/* Gestion de la collision */
	void collision();

	/* Mouvement du ballon lorsqu'il reçoit une force */
	void mouvement_Indirect(double force_recu);

	/* Savoir si le ballon est en l'air ou pas */
	bool pos_AirorTerre();

	/* Savoir si le ballon est dedans ou en dehors du terrain */
	bool pos_TerrainorNot();

	/* Savoir si le ballon est dans les cages ou pas */
	bool pos_CageorNot();

private:

	double force_renvoyer;
	double force_recu;
	double vitesse_actuelle;

	bool CageorNot;
	bool TerrainorNot;
	bool AirorTerre;

	// Les attributs seront évalué plus tard /!\ Gwendal réfléchit à la collision !!!!!!
};

#endif BALLON_H
