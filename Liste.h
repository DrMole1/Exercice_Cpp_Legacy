//=========================================
// Nom de fichier : Liste.h
// Classe : CListe
// Auteur : Prob Bastien
// Date de Création : 06/02
//=========================================

#ifndef LISTE_H
#define LISTE_H
#pragma once

struct element {
	element* suivant;
	void* contenu;
};

class CListe {


	// Le debut de la liste est l'origine de celle-ci
private:
	element* m_debut;
	element* m_courant;
public:

	CListe();
	~CListe();
	void ajoute(void*);
	void premier(void*);
	void prochain(void*);
	int fini();

};
#endif
