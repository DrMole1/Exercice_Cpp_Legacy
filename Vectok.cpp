//=====================================
// Nom de fichier : Vectok.cpp
// Classe : CVectok
// Auteur : Prob Bastien
// Date de Création : 06/02
// But : Gère les vecteurs de telle façon à ce que l'affectation et la transmission par valeur soient faites de manière convenable 
//======================================

#include <iostream>
#include "Vectok.h"

// Constructeur par recopie, en prenant la référence de CVectok
CVectok::CVectok(CVectok& v) : CVecteur (v.m_nElem)
{
	for (int i = 0; i < m_nElem; i++)
	{
		m_pnAdresse[i] = v.m_pnAdresse[i];
	}
}

// Surdéfinition de l'affectation
// NOTE : On met le param en const car on ne le change pas
// NOTE 2 : Je me suis clairement aidé de documentations en ligne pour la réalisation de cette méthode
//          mais je mets en place mes propres commentaires pour ma compréhension claire de celle-ci
CVectok& CVectok::operator=(const CVectok& v)
{
	// Si la valeur courante du vecteur n'est pas égale au vecteur pris du paramètre
	if (this != &v)
	{
		// On delete l'adresse du vecteur courant pour en recréer une autre
		delete m_pnAdresse;
		m_pnAdresse = new int[m_nElem = v.m_nElem];

		// On affecte les adresse de chaque élément du vecteur paramètre au vecteur courant
		for (int i = 0; i < m_nElem; i++)
		{
			m_pnAdresse[i] = v.m_pnAdresse[i];
		}
	}

	// On retourne un pointeur pointant sur le vecteur courant, qui possède maintenant les valeurs du vecteurs paramètres
	return (*this);
}
