//=========================================
// Nom de fichier : Vecteur.h
// Classe : CVecteur
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
//=========================================

#ifndef VECTEUR_H
#define VECTEUR_H
#pragma once

class CVecteur
{
	//Attributs membres de la classe
protected:
	int m_nElem;
	int* m_pnAdresse;

	//M�thodes publiques membres de la classe
public:
	CVecteur(int);
	~CVecteur();
	int& operator[] (int);
};

#endif