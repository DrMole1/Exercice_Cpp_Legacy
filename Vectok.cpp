//=====================================
// Nom de fichier : Vectok.cpp
// Classe : CVectok
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
// But : G�re les vecteurs de telle fa�on � ce que l'affectation et la transmission par valeur soient faites de mani�re convenable 
//======================================

#include <iostream>
#include "Vectok.h"

// Constructeur par recopie, en prenant la r�f�rence de CVectok
CVectok::CVectok(CVectok& v) : CVecteur (v.m_nElem)
{
	for (int i = 0; i < m_nElem; i++)
	{
		m_pnAdresse[i] = v.m_pnAdresse[i];
	}
}

// Surd�finition de l'affectation
// NOTE : On met le param en const car on ne le change pas
// NOTE 2 : Je me suis clairement aid� de documentations en ligne pour la r�alisation de cette m�thode
//          mais je mets en place mes propres commentaires pour ma compr�hension claire de celle-ci
CVectok& CVectok::operator=(const CVectok& v)
{
	// Si la valeur courante du vecteur n'est pas �gale au vecteur pris du param�tre
	if (this != &v)
	{
		// On delete l'adresse du vecteur courant pour en recr�er une autre
		delete m_pnAdresse;
		m_pnAdresse = new int[m_nElem = v.m_nElem];

		// On affecte les adresse de chaque �l�ment du vecteur param�tre au vecteur courant
		for (int i = 0; i < m_nElem; i++)
		{
			m_pnAdresse[i] = v.m_pnAdresse[i];
		}
	}

	// On retourne un pointeur pointant sur le vecteur courant, qui poss�de maintenant les valeurs du vecteurs param�tres
	return (*this);
}
