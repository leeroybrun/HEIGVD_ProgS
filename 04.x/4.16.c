//
//  4.16.c
//  Exercices 4
//
//  Created by Leeroy Brun on 12.02.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

void main()
{
    char car;
    int nbCars, nbLignes, nbMots;
    int etat;
    
    nbCars = 0;
    nbLignes = 0;
    nbMots = 0;
    
    printf("Entrez votre texte : ");
    scanf("%c", &car);
    while(car != '#')
    {
        nbCars++;
        
        switch (car) {
            case '.':
            case ',':
            case ' ':
            case '?':
            case '!':
            case '\t':
                etat = 0;
                break;
                
            case '\n':
                nbLignes++;
                etat = 0;
                break;
                
            default:
                if(etat == 0)
                {
                    nbMots++;
                    etat = 1;
                }
                break;
        }
        
        scanf("%c", &car);
    }
    
    printf("Nombre de caracteres : %d", nbCars);
    puts("");
    printf("Nombre de mots : %d", nbMots);
    puts("");
    printf("Nombre de lignes : %d", nbLignes);
    
}