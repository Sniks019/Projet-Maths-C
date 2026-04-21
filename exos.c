#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intervertir(int *pa, int *pb){
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	return 0;
}



int mult()
{
	system("cls");
    srand(time(NULL));
    int val1;
    val1 = rand() % 10 +1;
    int val2;
    val2 = rand() % 10 +1;
    int guess;
    int resultat;
    resultat = val1*val2;
    int nb_essais;
    nb_essais = 1;
	int pts;
	pts = 0;
	int choix;

    printf(" Exercice 3: Multiplications\n");
    printf(" %d x %d = ?\n", val1, val2);

    while(nb_essais < 4)
    {
        printf(" Entrez le resultat : ");
        scanf("%d", &guess);
		printf("\n");
        printf(" Vous avez entre : %d\n", guess);

        if(guess == resultat)
        {
            printf(" Bravo !\n");
            printf(" Vous avez pris %d essais !\n", nb_essais);
			
			if(nb_essais == 1)
			{
				pts+=10;
			}
			else if(nb_essais == 2)
			{
				pts+=5;
			}
			else if(nb_essais == 3)
			{
				pts+=1;
			}
			
            return 0;
        }
        else
        {
            printf(" Dommage !\n");
            nb_essais = nb_essais + 1;
        }
    }
	
    printf(" Vous n'avez plus d'essais.\n");
    printf(" Peut etre la prochaine fois !\n");
    
	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);

	if(choix == 1){
		return 0;
	}
}



int add(){
	system("cls");
		int resultat;
		int nbr1;
		int nbr2;
		int guess;
		int pts;
		int essais;
		int choix;
	   
		essais = 1;
		pts = 0;
		srand(time(NULL));
		nbr1 = rand () % 100 + 1;
		nbr2 = rand () % 100 + 1;
		guess = nbr1 + nbr2;
	   
		printf (" Exercice 1 : Addition \n");
		printf(" %d + %d =?\n", nbr1, nbr2);
		printf(" Entrez le resultat :\n");
		scanf("%d", &resultat);
		printf("\n");

		while((resultat != guess)&&(essais <= 3))
		{
			essais+=1;
			printf(" Reessayez : \n");
			scanf("%d", &resultat);
			printf("\n");
		}
		if (essais ==  1)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Bravo \n");
			pts+=10;
        }
		else if (essais == 2)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Bien vu \n");
			pts+=5;
		}
		else if (essais == 3)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Pas mal \n");
			pts+=1;
		}
		else
		{
			printf(" Faux ! Le bon resultat etait %d\n", nbr1 + nbr2);
		}

	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");

	if(choix == 1){
		return 0;
	}
	else{
		printf("Erreur : valeur inconnue.");
		return -1;
	}
}



int tabmult()
{
	system("cls");
	int num;
	int i;
	int j;

	printf(" Exercice 4 : Tables de Multiplications\n");
	printf(" Quelle table de multiplications voulez-vous afficher (entre 1 et 10) ? ");
	scanf("%d",&num); 
	printf("\n");
	
	for(i = 1; i <= 10; i = i + 1)
	{
		printf(" %d * %d = %d\n", num, i, num*i);
	}
	
	int choix;
	printf("\n +-----------------------------+\n");
	printf(" | 1-) Lancer l'exercice       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");
	
	if(choix != 1)
	{
		printf(" Erreur : valeur inconnue");
		return -1;
	}
	
	system("cls");
	printf("\n Vous devez donner les resultats de la table dans l'ordre croissant\n");
	int resul;
	int pts;
	pts = 0;
	
	for(j = 1; j <= 10; j = j + 1)
	{
		printf(" %d * %d = ", num, j);
		scanf("%d", &resul);
		printf("\n");
		
		if(resul == num*j)
		{
			pts +=1;
		}
	}
	
	if(pts == 10)
	{
		printf("\n Bravo ! Vous avez gagne !\n");
	}
	else if(pts > 5)
	{
		printf("\n Pas mal ! Vous avez reussi plus de la moitie.");
	}
	else
	{
		printf("\n Dommage ! Peut etre une prochaine fois.\n");
	}
	
	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");

	if(choix == 1){
		return 0;
	}
}



int divis(){
	system("cls");
    float resultat;
    int  nbr1;
    int  nbr2;
    float guess;
	int pts;
	int nb_essais;
	int choix;
       
	srand(time(NULL));
    nbr1 = rand () % 100 + 1;
    nbr2 = rand () % 100 + 1;
    resultat = nbr1 / nbr2;
	pts = 0;
	nb_essais = 1;
    
	printf (" Exercice 5 : Division \n");
    printf(" %d / %d = ?\n", nbr1, nbr2);
    printf(" Entrez le resultat :");
	scanf("%d", &guess);
	printf("\n");

	while((resultat != guess)&&(nb_essais <= 3))
	{
		nb_essais+=1;
		printf(" Reessayez : ");
		scanf("%d", &guess);
		printf("\n");
	}
	if (nb_essais ==  1)
	{
		printf (" Vous avez entre %d\n", guess);
		printf(" Bravo \n");
		pts+=10;
    }
	else if (nb_essais == 2)
	{
		printf (" Vous avez entre %d\n", guess);
		printf(" Bien vu \n");
		pts+=5;
	}
	else if (nb_essais == 3)
	{
		printf (" Vous avez entre %d\n", guess);
		printf(" Pas mal \n");
		pts+=1;
	}
	else
	{
		printf(" Faux ! Le bon resultat etait %d\n", nbr1 / nbr2);
	}

	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");

	if(choix == 1){
		return 0;
	}
}



int sous(){
	system("cls");
    int resultat;
    int nbr1;
    int nbr2;
    int guess;
	int pts;
	int nb_essais;
	int choix;

    srand(time(NULL));
    nbr1 = rand () % 100 + 1;
    nbr2 = rand () % 100 + 1;
	pts = 0;
	nb_essais = 1;

    if (nbr2 > nbr1 ){
        intervertir(&nbr1 , &nbr2);
    }
       
	resultat = nbr1 - nbr2;
    printf (" Exercice 2 : Soustraction \n");
    printf(" %d - %d =?\n", nbr1, nbr2);
    printf(" Entrez le resultat :");
    scanf("%d", &guess);
	printf("\n");

	while((resultat != guess)&&(nb_essais <= 3))
	{
		nb_essais+=1;
		printf(" Reessayez ");
		scanf("%d", &guess);
		printf("\n");
	}

    if (nb_essais ==  1)
	{
		printf (" Vous avez entre %d\n", guess);
		printf("\n Bravo \n");
		pts+=10;
    }
	else if (nb_essais == 2)
	{
		printf (" Vous avez entre %d\n", guess);
		printf("\n Bien vu \n");
		pts+=5;
	}
	else if (nb_essais == 3)
	{
		printf (" Vous avez entre %d\n", guess);
		printf("\n Pas mal \n");
		pts+=1;
	}
	else
	{
		printf("\n Faux ! Le bon resultat etait %d\n", nbr1 - nbr2);
	}

	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");

	if(choix == 1){
		return 0;
	}
}



int suite_add()
{
	system("cls");
	int resultat;
	int nbr1;
	int nbr2;
	int guess;
	int essais;
	int choix;
	int pts;
	int i;
	   
	essais = 1;
	pts = 0;
	srand(time(NULL));
	nbr1 = rand () % 100 + 1;
	resultat = nbr1;
	printf("Exercice 1.2 : Suite d'Additions \n\n");
	   
	for(i = 1; i <= 10; i += 1)
	{
		nbr2 = rand () % 100 + 1;
		printf(" %d + %d = ?\n", resultat, nbr2);
		resultat += nbr2;
		printf(" Entrez le resultat : ");
		scanf("%d", &guess);
		printf("\n");
	}

		while((resultat != guess)&&(essais <= 3))
		{
			essais+=1;
			printf(" Reessayez : \n");
			scanf("%d", &resultat);
			printf("\n");
		}
		if (essais ==  1)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Bravo \n");
			pts+=10;
        }
		else if (essais == 2)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Bien vu \n");
			pts+=5;
		}
		else if (essais == 3)
		{
			printf (" Vous avez entre %d\n", resultat);
			printf(" Pas mal \n");
			pts+=1;
		}
		else
		{
			printf(" Faux ! Le bon resultat etait %d\n", resultat);
		}

	printf("\n +-----------------------------+\n");
	printf(" | 1-) Retourner au menu       |\n");
	printf(" +-----------------------------+\n");
	printf(" Votre choix : ");
	scanf("%d", &choix);
	printf("\n");

	if(choix == 1){
		return 0;
	}
	else{
		printf("Erreur : valeur inconnue.");
		return -1;
	}
}