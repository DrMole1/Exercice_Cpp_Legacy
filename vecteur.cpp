//=====================================
// Nom de fichier : Vecteur.cpp
// Classe : CVecteur
// Auteur : Prob Bastien
// Date de Création : 06/02
// But : Gère les vecteurs 
//======================================

#include <iostream>
#include "Vecteur.h"

// Ceci dessous était basé sur des recherches, source : https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

//CVecteur::CVecteur(int nElem)
//{
//	this->m_pnAdresse = new(std::nothrow) int[nElem];	
//}
//
//CVecteur::~CVecteur()
//{
//	delete &m_nElem;
//	delete[] m_pnAdresse;
//}


// BUT : Constructeur de la classe CVecteur
// ENTREE : La valeur de la taille du vecteur 
// SORTIE : Le vecteur instantié
CVecteur::CVecteur(int nElem)
{
	m_pnAdresse = new int[nElem];
	m_nElem = nElem;
}

// BUT : Destructeur de la classe CVecteur
// ENTREE : /
// SORTIE : Le vecteur détruit
CVecteur::~CVecteur()
{
	delete m_pnAdresse;
}

// BUT : Se renseigner sur une valeur dynamique d'un vecteur en fonction d'un indice
// ENTREE : Un indice
// SORTIE : La valeur dynamique du vecteur au dit indice
int& CVecteur::operator[](int nIndice)
{
	return m_pnAdresse[nIndice];
}
