#include "Cage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

/* C'est dans le .cpp que tu incluts le corps des fonctions */
// A définir l'ensemble des fonctions utiles au classes*/

/* Créateur et destructeur de la classe Cage */
Cage::Cage()
{
}

Cage::~Cage()
{
}

/* Création du visuel de la cage */
void Cage::create_Cage()
{
}

/* Renvoie une force auparavant reçu */
double Cage::return_Force()
{
	return 0.0;
}

/* Recevoir une fprce par un autre objet */
double Cage::receive_Force()
{
	return 0.0;
}

/* Gestion de la collision */
void Cage::collision()
{
}