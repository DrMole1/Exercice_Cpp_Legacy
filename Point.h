//=========================================
// Nom de fichier : Point.h
// Classe : CPoint
// Auteur : Prob Bastien
// Date de Création : 06/02
//=========================================

#ifndef POINT_H
#define POINT_H
#pragma once


class CPoint {



private:
	int m_nX;
	int m_nY;
public:

	CPoint(int nAbs = 0, int nOrd = 0);
	void affiche();

};
#endif

