//=====================================
// Nom de fichier : Liste.cpp
// Classe : CListe
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
// But : G�re les listes
//======================================

#include <iostream>
#include "Liste.h"

// Constructeur de la classe liste
// Le d�but pointe sur NULL et on affecte la valeur du d�but � la valeur courante
CListe::CListe()
{
	this->m_debut = NULL;
	m_courant = m_debut;
}

CListe::~CListe()
{
	delete this;
}

void CListe::ajoute(void* contenu)
{
	m_courant->suivant->contenu = contenu;
}

void CListe::premier(void*)
{
	m_courant = m_debut;
}

void CListe::prochain(void*)
{
	m_courant = m_courant->suivant;
}

int CListe::fini()
{
	if (m_courant->suivant == NULL)
		return 0;
	else
		return 1;
}
