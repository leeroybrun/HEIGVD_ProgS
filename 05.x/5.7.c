/* Programme de tri d'un tableau */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB 20

/* Imprimer les nb ÈlÈments du tableau */
void printTab (int tab[], int nb);

/* Initialiser le tableau avec des valeurs alÈatoires */
void initTab (int tab[], int nb);

/* Trier par ordre croissant les nb ÈlÈments du tableau */
void triTab (int tab[], int nb);

void rechercheTab(int tab[], int max, int val);

void main () {
	int table [NB], val;
    
	// Initialiser le tableau
	initTab (table, NB);
    
	puts ("Tableau avant le tri : ");
	// Imprimer les valeurs du tableau avant le tri
	printTab (table, NB);
    
	// Trier les ÈlÈments du tableau
	triTab (table, NB);
    
	puts ("Tableau aprËs le tri : ");
	// Imprimer le tableau triÈ
	printTab (table, NB);
    
    printf("Quelle est la valeur recherchée ?");
    scanf("%d", &val);
    
    rechercheTab(table, NB, val);
    
    //system ("pause");
}

void rechercheTab(int tab[], int max, int val)
{
    int min, milieu;
    
    min = 0;
    milieu = max/2;
    
    if(tab[milieu] == val)
    {
        printf("La valeur se trouve à la position %d", milieu+1);
    }
    // Recherche à gauche val < milieu
    else if(tab[milieu] > val)
    {
        max = milieu - 1;
        
        while(tab[milieu] != val && max > min)
        {
            milieu = max/2;
            max = milieu - 1;
        }
    }
    // Recherche à droite val > milieu
    else
    {
        max = milieu + 1;
        
        while(tab[milieu] != val && max > min)
        {
            milieu = max/2;
            max = milieu + 1;
        }
    }
    
    if(tab[milieu] == val)
    {
        printf("La valeur se trouve à la position %d", milieu+1);
    }
    else
    {
        printf("Valeur introuvable");
    }
}

/* Imprimer les valeurs des nb ÈlÈments du tableau */
void printTab (int tab[], int nb) {
	int i;
    
	for (i = 0 ; i < nb ; i ++ ) {
		printf ("%d ", tab[i]);
	}
	puts ("");
}

/* Initialiser le tableau avec des valeurs alÈatoires */
void initTab (int tab[], int nb) {
	int i;
	time_t t;
	
	srand ((unsigned) time (&t)); // Initialisation des nombres alÈatoires
    
	for (i = 0 ; i < nb ; i++) {
		tab[i] = rand() % 101; // Valeur alÈatoire entre 0 et 100
	}
}

/* Trier par ordre croissant les nb ÈlÈments du tableau */
void triTab (int tab[], int nb) {
	int i, j, jmin;
	int min;
    
	for (i = 0 ; i < nb-1 ; i++) {
		min = tab[i]; // On considËre que le premier ÈlÈment ‡ trier est le plus petit
		jmin = i;     //jmin est l'indice du plus petit
		for (j = i+1 ; j < nb ; j++) { // Rechercher le min dans la partie ‡ trier
			if (tab[j] < min) {
				min = tab[j];  // On a trouvÈ un plus petit
				jmin = j;      // On se souvient de l'indice
			}
		}
		if (i != jmin) {       // L'ÈlÈment courant n'est pas le plus petit
			tab [jmin] = tab [i]; // Echange de l'ÈlÈment courant avec le
			tab [i] = min;        // plus petit
		}
	}
}