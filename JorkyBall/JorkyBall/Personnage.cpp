#include "Personnage.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

/* Créateur et destructeur de la classe Personnage */
Personnage::Personnage()
{
	cout << "Création d'un objet de type Personnage" << endl;
}

Personnage::~Personnage()
{
	cout << "Destruction d'un objet de type Personnage" << endl;
}

/* Création du visuel du Personnage */
void Personnage::create_Personnage(int sens, int placement)
{
	if (sens == 0) {
		cout << "Le personnage est du côté droit" << endl;
		if (placement == 0) {
			cout << "Le personnage est un gardien" << endl;
		}
		else {
			cout << "Le personnage est un attaquant" << endl;
		}
	}
	else {
		cout << "Le personnage est du côté gauche" << endl;
		if (placement == 0) {
			cout << "Le personnage est un gardien" << endl;
		}
		else {
			cout << "Le personnage est un attaquant" << endl;
		}
	}	
}

/* Renvoie une force auparavant reçu */
double Personnage::return_Force()
{
	cout << "Le personnage retourne une force de" << force_renvoyer << endl;
	return 0.0;
}

/* Recevoir une force par un autre objet */
double Personnage::receive_Force()
{
	cout << "Le personnage recois une force de " << force_recu << endl;
	return 0.0;
}

/* Vitesse du personnage */
double Personnage::vitesse()
{
	cout << "Le personnage est à une vitesse de " << vitesse_actuelle << endl;
	return 0.0;
}

/* Gestion de la collision */
void Personnage::collision()
{
	cout << "AIE le personnage est entrée en collision avec une autre entité" << endl;
}

/* Lever le pied du personnage => envoie une force */
void Personnage::lever_Pied()
{
	cout << "Le personnage leve le pied puis renvoie une force de " << force_renvoyer << endl;
}

/* Mouvement direct par l'appuye du bouton */
void Personnage::mouvement_Direct()
{
	cout << "Le personnage est en mouvement" << endl;
}

/* Mouvement indirect par acquisition de force */
void Personnage::mouvement_Indirect()
{
	cout << "Le personnage est en mouvement" << endl;
	cout << "Par la force recu de " << force_recu << endl;
}

/* Savoir comment est incliner le personnage par rapport au sol */
double Personnage::angle_PersonnageSol()
{
	cout << "Traitement angle" << endl;

	return 0.0;
}

/* Savoir si le Personnage est en l'air ou pas */
bool Personnage::pos_AirorTerre()
{
	cout << "Traitament AirorTerre" << endl;
	AirorTerre = false;  // ou true
	return false;
}
