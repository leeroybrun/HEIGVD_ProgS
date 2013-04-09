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
void printTwoDimArray(int tab[NBLINES][NBCOLS]);

void main()
{
    int tab[NBLINES][NBCOLS];
    
    fillTwoDimArray(tab);
    
    printTwoDimArray(tab);
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

void printTwoDimArray(int tab[NBLINES][NBCOLS])
{
    int i, j, totLine, total;
    
    // Affichage du tableau
    for(i = 0; i < NBLINES; i++)
    {
        total = 0;
        
        for(j = 0; j < NBCOLS; j++)
        {
            printf("|%5d", tab[i][j]);
            total += tab[i][j];
        }
        printf("|%5d", total); // Total de la ligne
        
        // Affichage de la ligne séparatrice
        puts("");
        for(j = 0; j <= NBCOLS; j++)
        {
            printf("|-----");
        }
        puts("");
    }
    
    // Total des colonnes
    for(j = 0; j < NBCOLS; j++)
    {
        total = 0;
        
        for(i = 0; i < NBLINES; i++)
        {
            total += tab[i][j];
        }
        printf("|%5d", total);
    }
}