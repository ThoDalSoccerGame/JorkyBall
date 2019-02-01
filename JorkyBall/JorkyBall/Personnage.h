/* Head de la classe Personnage du jeu jorkyballl */

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
public:

	/************* Créateur et destructeur de la classe Personnage **************/
	Personnage();
	~Personnage();

	/********************** Méthode de la classe Personnage **********************/
	/* Création du visuel du Personnage */
	void create_Personnage(int sens, int placement);

	/* Renvoie une force auparavant reçu */
	double return_Force();

	/* Recevoir une force par un autre objet */
	double receive_Force();

	/* Vitesse du personnage */
	double vitesse();

	/* Gestion de la collision */
	void collision();

	/* Lever le pied du personnage => envoie une force */
	void lever_Pied();

	/* Mouvement direct par l'appuye du bouton */
	void mouvement_Direct();

	/* Mouvement indirect par acquisition de force */
	void mouvement_Indirect();

	/* Savoir comment est incliner le personnage par rapport au sol */
	double angle_PersonnageSol();

	/* Savoir si le Personnage est en l'air ou pas */
	bool pos_AirorTerre();


private:
	// 0 => Personnage de droite et 1 => Personnage de gauche
	int sens;
	// 0 => Gardien et 1 => Attaquant
	int placement;

	double force_renvoyer;
	double force_recu;
	double vitesse_actuelle;
	double angle;

	bool AirorTerre;

	// Les attributs seront évalué plus tard /!\ Gwendal réfléchit à la collision !!!!!!
};

#endif PERSONNAGE_H
