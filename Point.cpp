//=====================================
// Nom de fichier : Point.cpp
// Classe : CPoint
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
// But : G�re les points
//======================================

#include <iostream>
using namespace std;

#include "Point.h"


CPoint::CPoint(int nAbs, int nOrd)
{
	this->m_nX = nAbs;
	this->m_nY = nOrd;
}

void CPoint::affiche()
{
	cout << "Coord : " << m_nX << m_nY << endl;
}
