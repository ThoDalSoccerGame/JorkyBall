#include "Cage.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

/* C'est dans le .cpp que tu incluts le corps des fonctions */
// A d�finir l'ensemble des fonctions utiles au classes*/

/* Cr�ateur et destructeur de la classe Cage */
Cage::Cage()
{
}

Cage::~Cage()
{
}

/* Cr�ation du visuel de la cage */
void Cage::create_Cage()
{
}

/* Renvoie une force auparavant re�u */
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