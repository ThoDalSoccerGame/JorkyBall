#include "Fenetre.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

Fenetre::Fenetre()
{
	cout << "Un objet de type Fenetre a été créer" << endl;
}

Fenetre::~Fenetre()
{
	cout << "Un objet de type Fenetre a été detruit" << endl;
}

void Fenetre::create_Fenetre()
{
	cout << "L'affichage de la fenetre" << endl;
}
