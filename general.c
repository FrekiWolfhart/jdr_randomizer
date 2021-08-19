#include "general.h"

double reste(double a, double b)
{
	double division = floor(a / b);
	if (division == 0.0) return a;
	return a - (division * b);
}

void elfe_general(personnage* personnage)
{
	personnage->age = (30.0 + (5.0 * reste(rand(), 20.0)));
	personnage->poids = (36.0 + (2.0 * (reste(rand(), 20.0) + 1.0)));
	personnage->nombre_famille = reste(rand(), 4.0);
	if(personnage->genre == 0) personnage->taille = (1.65 + (0.025 * reste(rand(), 10.0)));
	else personnage->taille = (1.60 + (0.025 * (reste(rand(), 10.0) + 1.0)));
}

void nain_general(personnage* personnage)
{
	personnage->age = (20.0 + (5.0 * reste(rand(), 20.0)));
	personnage->poids = (40.0 + (2.0 * (reste(rand(), 20.0) + 1.0)));
	personnage->nombre_famille = reste(rand(), 4.0);
	if(personnage->genre == 0) personnage->taille = (1.30 + (0.025 * reste(rand(), 10.0)));
	else personnage->taille = (1.25 + (0.025 * (reste(rand(), 10.0) + 1.0)));
}

void humain_general(personnage* personnage)
{
	personnage->age = (16.0 + reste(rand(), 20.0));
	personnage->poids = (40.0 + (3.0 * (reste(rand(), 20.0) + 1.0)));
	personnage->nombre_famille = reste(rand(), 6.0);
	if(personnage->genre == 0) personnage->taille = (1.60 + (0.025 * reste(rand(), 10.0)));
	else personnage->taille = (1.52 + (0.025 * (reste(rand(), 10.0) + 1.0)));
}

void halfling_general(personnage* personnage)
{
	personnage->age = (20.0 + (2.0 * reste(rand(), 20.0)));
	personnage->poids = (30.0 + (2 * (reste(rand(), 20.0) + 1.0)));
	personnage->nombre_famille = reste(rand(), 6)+ 1.0;
	if(personnage->genre == 0) personnage->taille = (1.00 + (0.025 * reste(rand(), 10.0)));
	else personnage->taille = (0.95 + (0.025 * (reste(rand(), 10.0) + 1.0)));
}

void cree_general(personnage* personnage)
{
	personnage->genre = rand() % 2;
	switch (personnage->race)
	{
		case 0:
			elfe_general(personnage);
			break;
		case 1:
			nain_general(personnage);
			break;
		case 2:
			humain_general(personnage);
			break;
		case 3:
			halfling_general(personnage);
			break;
	}
}
