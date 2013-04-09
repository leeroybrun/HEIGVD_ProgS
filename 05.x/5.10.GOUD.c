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

void fillTwoDimArray(int tab[NBLINES][NBCOLS]);
int searchTwoDimArray(int tab[NBLINES][NBCOLS], int val);

void main()
{
    int tab[NBLINES][NBCOLS];
    
    fillTwoDimArray(tab);
    
    if(searchTwoDimArray(tab, 0))
    {
        printf("Le tableau contient une valeur nulle.");
    }
    else
    {
        printf("Le tableau ne contient pas de valeur nulle.");
    }
}

void fillTwoDimArray(int tab[NBLINES][NBCOLS])
{
    int i, j, n, nb;
    
    nb = 1;
    
    // Remplissage du tableau
    for(i = 0; i < NBLINES; i++)
    {
        for(j = 0; j < NBCOLS; j++)
        {
            do {
                printf("Entrer 1 entier numéro %d, tab[%d][%d] : ", nb, i, j);
                n = scanf("%d", &tab[i][j]);
                while(getchar() != '\n');
            } while (n != 1);
            
            nb++;
        }
    }
}

int searchTwoDimArray(int tab[NBLINES][NBCOLS], int val)
{
    int i, j;
    
    // Recherche de valeur
    for(i = 0; i < NBLINES; i++)
    {
        for(j = 0; j < NBCOLS; j++)
        {
            if(tab[i][j] == val)
            {
                return 1;
            }
        }
    }
    
    return 0;
}