#include "Cage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

/* Créateur et destructeur de la classe Cage */
Cage::Cage()
{
	cout << "Création d'un objet de type Cage" << endl;
}

Cage::~Cage()
{
	cout << "Destruction d'un objet de type Cage" << endl;
}

/* Création du visuel de la cage */
void Cage::create_Cage(int sens)
{
	if (sens == 0) {
		cout << "Le sens de la cage est droite" << endl;
		cout << "Affichage de la cage droite" << endl;
	}
	else {
		cout << "Le sens de la cage est gauche" << endl;
		cout << "Affichage de la cage gauche" << endl;
	}
}

/* Renvoie une force auparavant reçu */
double Cage::return_Force()
{
	cout << "La cage renvoie une force de " << force_renvoyer << endl;
	return 0.0;
}

/* Recevoir une fprce par un autre objet */
double Cage::receive_Force()
{
	cout << "La cage recoit une force de " << force_recu << endl;
	return 0.0;
}

/* Gestion de la collision */
void Cage::collision()
{
	cout << "AIE il y a une collision avec une autre entité et la cage" << endl;
}