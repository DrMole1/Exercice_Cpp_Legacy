//=====================================
// Nom de fichier : Liste.cpp
// Classe : CListe
// Auteur : Prob Bastien
// Date de Création : 06/02
// But : Gère les listes
//======================================

#include <iostream>
#include "Liste.h"

// Constructeur de la classe liste
// Le début pointe sur NULL et on affecte la valeur du début à la valeur courante
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

// Méthode qui ajoute un contenu dans l'élément suivant
void CListe::ajoute(void* contenu)
{
	element* elementTemp = new element();
	elementTemp->contenu = contenu;
	elementTemp->suivant = m_debut;
	m_debut = elementTemp;
}

// Méthode qui set l'élément courant avec l'élément du début de liste
void* CListe::premier()
{
	m_courant = m_debut;
	return m_courant->contenu;
}

// Méthode qui set l'élément courant avec l'élément suivant
void* CListe::prochain()
{
	m_courant = m_courant->suivant;
	return m_courant->contenu;
}

// Méthode qui retourne si la liste est finie ou non
int CListe::fini()
{
	if (m_courant->suivant == NULL)
		return 1; //équivalent d'un TRUE
	else
		return 0; //équivalent d'un FALSE
}
