//
//  5.10.c
//  HEIGVD_ProgS
//
//  Created by Leeroy Brun on 09.04.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

#define NBLINES 3
#define NBCOLS 4

void fillTwoDimArray(int *tab, int nbLines, int nbCols);
int searchTwoDimArray(int *tab, int nbLines, int nbCols, int val);

void main()
{
    int tab[NBLINES][NBCOLS];
    
    fillTwoDimArray(&tab[0][0], NBLINES, NBCOLS);
    
    if(searchTwoDimArray(&tab[0][0], NBLINES, NBCOLS, 0))
    {
        printf("Le tableau contient une valeur nulle.");
    }
    else
    {
        printf("Le tableau ne contient pas de valeur nulle.");
    }
}

void fillTwoDimArray(int *tab, int nbLines, int nbCols)
{
    int i, j, n, nb;
    
    nb = 1;
    
    // Remplissage du tableau
    for(i = 0; i < nbLines; i++)
    {
        for(j = 0; j < nbCols; j++)
        {
            do {
                printf("Entrer 1 entier numéro %d, tab[%d][%d] : ", nb, i, j);
                n = scanf("%d", &tab[i*nbCols+j]);
                while(getchar() != '\n');
            } while (n != 1);
            
            nb++;
        }
    }
}

int searchTwoDimArray(int *tab, int nbLines, int nbCols, int val)
{
    int i, j;
    
    // Recherche de valeur
    for(i = 0; i < nbLines; i++)
    {
        for(j = 0; j < nbCols; j++)
        {
            if(tab[i*nbCols+j] == val)
            {
                return 1;
            }
        }
    }
    
    return 0;
}