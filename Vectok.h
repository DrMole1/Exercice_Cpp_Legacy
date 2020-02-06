//=========================================
// Nom de fichier : Vectok.h
// Classe : CVectok
// Auteur : Prob Bastien
// Date de Création : 06/02
//=========================================

#ifndef VECTOK_H
#define VECTOK_H
#pragma once
#include "Vecteur.h"

class CVectok : public CVecteur {


	// Aucune nouvelle variable de besoin
private:
	
public:

	// BUT : Constructeur avec paramètres de début et de fin
	// ENTREE : Le vecteur 
	// SORTIE : Le vecteurb instantié
	CVectok(int nDimension) : CVecteur(nDimension) {}


	CVectok(CVectok&);

	CVectok& operator =(const CVectok& );

	// BUT : Retourne la taille du vecteur
	// ENTREE : Le nombre d'élément (prise depuis la classe parent grâce à l'héritage)
	// SORTIE : La taille du vecteur
	int taille()
	{
		return m_nElem;
	}

};
#endif