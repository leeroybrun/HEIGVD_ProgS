//
//  4.15.c
//  Exercices 4
//
//  Created by Leeroy Brun on 12.02.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    time_t t;
    int solution, valeur, nbEssais;
    
    srand((unsigned) time(&t));
    solution = rand() % 101;
    
    printf("Entrez une valeur (entre 1 et 100) : ");
    scanf("%d", &valeur);
    
    nbEssais = 1;
    
    while(valeur != solution)
    {
        if(valeur < solution)
        {
            printf("Trop petit...");
            puts("");
        }
        else
        {
            printf("Trop grand...");
            puts("");
        }
        
        printf("Entrez une valeur (entre 1 et 100) : ");
        scanf("%d", &valeur);
        
        nbEssais++;
    }
    
    if(nbEssais <= 5)
    {
        printf("Correct ! Vous avez eu un peu de chance...");
    }
    else if(nbEssais <= 7)
    {
        printf("Bravo !");
    }
    else
    {
        printf("Correct ! Ce score me semble bien minable...");
    }
}