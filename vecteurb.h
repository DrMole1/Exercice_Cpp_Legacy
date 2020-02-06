//=========================================
// Nom de fichier : Vecteurb.h
// Classe : CVecteurb
// Auteur : Prob Bastien
// Date de Création : 06/02
//=========================================

#ifndef VECTEURB_H
#define VECTEURB_H
#pragma once
#include "Vecteur.h"

class CVecteurb : public CVecteur {


	// Seules les variables spécifiques à la classe enfant sont déclarées
private:

	int m_nBegin;
	int m_nEnd;
	
public:

	// BUT : Constructeur avec paramètres de début et de fin
	// ENTREE : Le vecteur 
	// SORTIE : Le vecteurb instantié
	CVecteurb(int nBegin, int nEnd) : CVecteur(nEnd - nBegin + 1) {

		m_nBegin = nBegin;
		m_nEnd = nEnd;
	}

	// BUT : Se renseigner sur une valeur dynamique d'un vecteur en fonction d'un indice
	// ENTREE : Un indice
	// SORTIE : La valeur dynamique du vecteurb au dit indice
	// NOTE : _super:: pour prendre le parent, remplacement de CVecteur::
	int& operator[] (int nIndice) {
		return CVecteur::operator[] (nIndice - m_nBegin);
	}
};
#endif