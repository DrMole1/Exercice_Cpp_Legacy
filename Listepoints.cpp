//=====================================
// Nom de fichier : Listepoints.cpp
// Classe : CListepoints
// Auteur : Prob Bastien
// Date de Création : 06/02
// But : Gère les listes de points
//======================================

#include <iostream>
using namespace std;

#include "Listepoints.h"

// Affiche les points de la liste jusqu'à ce que la liste soit finie
// NOTE : On utilise la méthode fini() de la classe CListe
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
