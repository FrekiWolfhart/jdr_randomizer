#ifndef PERSONNAGE
#define PERSONNAGE

typedef enum {elfe, nain, humain, halfling}race;

typedef struct
{
	race race;
	int age;
	double taille;
	int poids;
	int genre;
	char* nom;
	int nombre_famille;
}personnage;

#endif