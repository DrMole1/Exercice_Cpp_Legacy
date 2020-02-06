#include <iostream>
#include <cstdlib>
#include "Vecteur.h"
#include "Vecteurb.h"
#include "Vectok.h"
#include "Liste.h"

using namespace std;

int main()
{
	// Exercice 1 :
	// ***********************************************************************************************************
	cout << "Exercice 1 : " << endl;
	// On créée un vecteur, puis on assigne une valeur dynamique du vecteur à un int qu'on affichera.
	CVecteur vect = CVecteur(5);
	vect.operator[](2) = 25;
	int nValeur = vect.operator[](2);
	cout << nValeur << endl;
	// On créée un vecteur b, puis on assigne une valeur dynamique du vecteur b à un int qu'on affichera.
	CVecteurb vectb = CVecteurb(2,4);
	vectb.operator[](2) = 25;
	int nValeur2 = vectb.operator[](2);
	cout << nValeur2 << endl;
	// ***********************************************************************************************************

	// Exercice 2 :
	// ***********************************************************************************************************
	cout << "Exercice 2 : " << endl;
	// On créée un vecteur de type CVectok puis on lui met des valeurs 
	CVectok vectok(10);
	for (int i = 0; i < vectok.taille(); i++)
	{
		vectok[i] = i;
	}
	// Grace au constructeur par copie, on affecte un vecteur à un autre (ce qui est normalement impossible)
	CVectok vectok2 = vectok;
	// On affiche les valeurs du nouveau vecteur
	for (int i = 0; i < vectok2.taille(); i++)
	{
		cout << vectok2[i];
	}
	// ***********************************************************************************************************

	// Exercice 3 :
	// ***********************************************************************************************************
	cout << "Exercice 3 : " << endl;

	// ***********************************************************************************************************

	system("pause");
	return 0;
}
