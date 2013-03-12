//
//  main.c
//  ExaProgS
//
//  Created by Leeroy Brun on 26.02.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//
// Entrées : valeurs
// Sorties : diviseurs

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int val, i, n;
    
    // Saisie de la valeur
    do {
        printf ("Valeur : ");
        n = scanf ("%d", &val);
    } while (n != 1 || val < 0);
    
    // Affichage des diviseurs
    printf("Diviseurs : ");
    for(i = val - 1; i > n; i--)
    {
        if(val % i == 0)
        {
            printf("%d ", i);
        }
    }
    
    system("pause");
}