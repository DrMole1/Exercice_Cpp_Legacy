//=========================================
// Nom de fichier : Listepoints.h
// Classe : CListepoints
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
//=========================================

#ifndef LISTEPOINTS_H
#define LISTEPOINTS_H
#pragma once
#include "Liste.h"
#include "Point.h"



class CListepoints  : public CListe, public CPoint{


public:
	CListepoints() {}
	void affiche();

};
#endif
