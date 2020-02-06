//=====================================
// Nom de fichier : Listepoints.cpp
// Classe : CListepoints
// Auteur : Prob Bastien
// Date de Cr�ation : 06/02
// But : G�re les listes de points
//======================================

#include <iostream>
using namespace std;

#include "Listepoints.h"

// Affiche les points de la liste jusqu'� ce que la liste soit finie
// NOTE : On utilise la m�thode fini() de la classe CListe
void CListepoints::affiche()
{
	CPoint* ptPoint = (CPoint*)(premier());
	while (!fini())
	{
		// On affiche le point puis on va au suivant
		ptPoint->affiche();
		ptPoint = (CPoint *)(prochain());
	}
}
