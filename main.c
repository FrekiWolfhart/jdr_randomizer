#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "general.h"

void montre_personnage(personnage* personnage)
{
	char race[4][9] =
	{	"elfe",
		"nain",
		"humain",
		"halfling"
	};

	char genre[2][9] =
	{	"masculin",
		"feminin"
	};

	printf("espece:%s\n", race[personnage->race]);
	printf("genre:%s\n", genre[personnage->genre]);
	printf("age:%d\n", personnage->age);
	printf("taille:%.2f\n", personnage->taille);
	printf("poids:%d\n", personnage->poids);
	printf("nombre de freres et soeurs:%d\n", personnage->nombre_famille);

}

int main(void)
{
	srand(time(NULL));
	personnage personnage;
	personnage.race = rand() % 4;
	cree_general(&personnage);
	montre_personnage(&personnage);
	return 0;
}