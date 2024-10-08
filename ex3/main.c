#include <stdio.h>
#include <stdlib.h>
#include "struct.h"



int main()
{

	character *chara = malloc(sizeof(*chara));

	chara->strenght = 80;  
    chara->intelligence = 75;
    chara->wisdom = 88;
    chara->agility = 85;
    chara->endurance = 97;
	


	printf("Votre joueur a %d de force, %d d'intellignece, %d de sagesse, %d d'agilité et %d d'endurance.\n", chara->strenght, chara->intelligence, chara->wisdom, chara->agility, chara->endurance);

	free(chara);
	exit(0);
}