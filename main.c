#include <stdio.h>
#include <stdlib.h>
#include "Include/aff.h"
#include "Include/exos.h"

int main()
{
    FILE *fichier;
    char nom[30];
    printf(" Quel est votre nom ? ");
    scanf("%s", &nom);
    system("cls");
    menu();
    int choix;
    int choix_2;
    scanf("%d", &choix);
	int ptsT;
	ptsT = 0;
    int score;
    int pts;
	

    while(choix != 0)
    {
        switch(choix)
        {
        case 1: system("cls");
                aff_add(); 
                scanf("%d", &choix_2);
                if(choix_2 == 1){
                    add(); break;
                } 
                else if(choix_2 == 2){
                    suite_add(); break;
                }
                else{
                    printf(" Erreur: choix doit etre comprit entre 1 et 2.\n");
                }
        case 2: sous(); break;
        case 3: system("cls");
                aff_mult(); 
                scanf("%d", &choix_2);
                if(choix_2 == 1){
                    mult(); break;
                } 
                else if(choix_2 == 2){
                    tabmult(); break;
                }
                else{
                    printf(" Erreur: choix doit etre comprit entre 1 et 2.\n");
                }
        case 4: divis(); break;
        default: printf(" Erreur: choix doit etre comprit entre 0 et 4.\n");
        }
		ptsT += 1;
        system("cls");
        menu();
        scanf("%d", &choix);
    }

    score += ptsT;
    score += pts;

    fichier = fopen("Scores.txt", "a");
    if(fichier != NULL){
        fprintf(fichier, "Joueur %s | Score : %d pts\n", nom, score);
        fclose(fichier);
    }
    printf("\n");

    printf(" Merci de votre visite\n");
    return 0;
}