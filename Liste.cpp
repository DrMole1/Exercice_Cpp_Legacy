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

// Destructeur de la classe liste
CListe::~CListe()
{
	delete this;
}

// M�thode qui ajoute un contenu dans l'�l�ment suivant
void CListe::ajoute(void* contenu)
{
	element* elementTemp = new element();
	elementTemp->contenu = contenu;
	elementTemp->suivant = m_debut;
	m_debut = elementTemp;
}

// M�thode qui set l'�l�ment courant avec l'�l�ment du d�but de liste
void* CListe::premier()
{
	m_courant = m_debut;
	return m_courant->contenu;
}

// M�thode qui set l'�l�ment courant avec l'�l�ment suivant
void* CListe::prochain()
{
	m_courant = m_courant->suivant;
	return m_courant->contenu;
}

// M�thode qui retourne si la liste est finie ou non
int CListe::fini()
{
	if (m_courant->suivant == NULL)
		return 1; //�quivalent d'un TRUE
	else
		return 0; //�quivalent d'un FALSE
}
