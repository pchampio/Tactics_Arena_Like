/**
 * \file main.c
 * \brief Programme lançant notre version du jeu Tactics Arena.
 * \author CHAMPION Pierre, LAVILLE Martin, MOK Modira
 * \version 0.1
 * \date 6 septembre 2007
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "../include/save.h"
#include "../include/placement.h"
#include "../include/tour.h"
#include "../include/map.h"
//#include "../include/list_attack.h"



int main() {

	srand(time(NULL));
	int choix_menu = 0;
	do{
		// system("clear");
		printf("1 - Nouvelle Partie\n");
		printf("2 - Charger une partie\n");
		printf("3 - Quitter\n");
		scanf("%i", &choix_menu);
		switch(choix_menu){
			case 1: initialise_map();
					afficher_map();
					placement_perso();
					partie();
					break; /*Nouvelle Partie*/
			case 2:	charge();
					partie();
					break; /*Charger une partie */
			case 3:
					break;
		}
	}while(choix_menu != 3);
	return 0;
}
