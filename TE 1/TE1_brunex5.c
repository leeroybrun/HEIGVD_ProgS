//
//  main.c
//  ExaProgS
//
//  Created by Leeroy Brun on 26.02.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//
// Entrées : montant, années
// Sorties : Intérêt, intérêt pour chaque année, montant final

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    float montant, interet, tauxInteret;
    int annees, n, i;
    
    // Saisie des données
    do {
        printf ("Montant : ");
        n = scanf ("%f", &montant);
    } while (n != 1 || montant <= 0 || montant > 100000);
    
    do {
        printf ("Durée (ans) : ");
        n = scanf ("%d", &annees);
    } while (n != 1 || annees <= 0 || annees > 10);
    
    // Calcul du taux d'intérêt
    if(montant < 10000)         tauxInteret = 0.025;
    else if(montant < 50000)    tauxInteret = 0.03;
    else                        tauxInteret = 0.035;
    
    printf("\nInteret : %1.1f%%\n\n", tauxInteret*100);
    
    // Affichage du tableau des années
    printf("An | Interet | Montant\n");
    printf("---------------------------\n");
    
    for(i = 1; i <= annees; i++)
    {
        interet = montant * tauxInteret;
        printf("%2d | %7.2f | %10.2f\n", i, interet, montant);
        montant = montant + interet;
    }
    
    printf("Montant final : %10.2f", montant);
        
    system("pause");
}