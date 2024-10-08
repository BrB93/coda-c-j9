#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"



int main()
{

	character *chara = malloc(sizeof(*chara));
	chara->joueur = malloc(strlen("moi") * sizeof(char));  
    chara->joueur = strcpy(chara->joueur, "moi");  

	chara->strenght = 80;  
    chara->intelligence = 75;
    chara->wisdom = 88;
    chara->agility = 85;
    chara->endurance = 97;
	


	printf("Le joueur s'appele %s. Votre joueur a %d de force, %d d'intellignece, %d de sagesse, %d d'agilité et %d d'endurance.\n",chara->joueur, chara->strenght, chara->intelligence, chara->wisdom, chara->agility, chara->endurance);

	free(chara->joueur);
	free(chara);
	exit(0);
}