//=========================================
// Nom de fichier : Vectok.h
// Classe : CVectok
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
//=========================================

#ifndef VECTOK_H
#define VECTOK_H
#pragma once
#include "Vecteur.h"

class CVectok : public CVecteur {


	// Aucune nouvelle variable de besoin
private:
	
public:

	// BUT : Constructeur avec param�tres de d�but et de fin
	// ENTREE : Le vecteur 
	// SORTIE : Le vecteurb instanti�
	CVectok(int nDimension) : CVecteur(nDimension) {}


	CVectok(CVectok&);

	CVectok& operator =(const CVectok& );

	// BUT : Retourne la taille du vecteur
	// ENTREE : Le nombre d'�l�ment (prise depuis la classe parent gr�ce � l'h�ritage)
	// SORTIE : La taille du vecteur
	int taille()
	{
		return m_nElem;
	}

};
#endif