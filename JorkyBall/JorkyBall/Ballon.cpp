#include "Ballon.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

/* Créateur et destructeur de la classe Ballon*/
Ballon::Ballon()
{
	cout << "Création d'un objet de type Ballon" << endl;
}

Ballon::~Ballon()
{
	cout << "Destruction d'un objet de type Ballon" << endl;
}

/* Création du visuel du ballon */
void Ballon::create_Ballon() const
{
	cout << "Affichage du ballon" << endl;
}

/* Renvoie d'une force auparavant reçu */
double Ballon::return_Force()
{
	cout << "Le ballon retourne une force de" << force_renvoyer << endl;
	return 0.0;
}

/* Recevoir une force par un autre objet */
double Ballon::receive_Force()
{
	cout << "Le ballon recois une force de" << force_recu << endl;
	return 0.0;
}

/* Vitesse du ballon */
double Ballon::vitesse()
{
	cout << "Le ballon va à une vitesse de" << vitesse_actuelle << endl;
	return 0.0;
}

/* Gestion de la collision */
void Ballon::collision()
{
	cout << "AIE il y a une collision avec une autre entité et le ballon" << endl;
}

/* Mouvement du ballon lorsqu'il reçoit une force */
void Ballon::mouvement_Indirect(double force_recu)
{
	cout << "Conversion de la force en vitesse " << endl;
	cout << "Répercution de la force recu" << endl;
}

/* Savoir si le ballon est en l'air ou pas */
bool Ballon::pos_AirorTerre()
{
	cout << "Traitement pour savoir si le ballon est en l'air ou pas" << endl;
	AirorTerre = false;// or true pour pouvoir récupérer la valeur facilement dans la classe.

	return false; // or true
}

/* Savoir si le ballon est dedans ou en dehors du terrain */
bool Ballon::pos_TerrainorNot()
{
	cout << "Traitement pour savoir si le ballon est en dehors du terrain ou pas" << endl;
	TerrainorNot = false; // or true pour pouvoir récupérer la valeur facilement dans la classe.

	return false; // or true
}

/* Savoir si le ballon est dans les cages ou pas */
bool Ballon::pos_CageorNot()
{
	cout << "Traitement pour savoir si le ballon est dans les cages ou pas" << endl;
	CageorNot = false; // or true pour pouvoir récupérer la valeur facilement dans la classe.

	return false; // or true
}