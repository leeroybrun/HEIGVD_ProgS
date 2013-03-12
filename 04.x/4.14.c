//
//  4.14.c
//  Exercices 4
//
//  Created by Leeroy Brun on 12.02.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

void main()
{
    float note, total;
    int n, nbNotes;
    
    nbNotes = 0;
    total = 0;
    
    do {        
        do {
            printf("Entrez une note : ");
            n = scanf("%f", &note);
        } while(note < 0 || note > 6 || n != 1);
        
        if(note > 0)
        {
            total += note;
            nbNotes++;
        }
    } while(note > 0);
    
    if(nbNotes > 0)
    {
        printf("La moyenne est : %1.1f", (total/nbNotes));
    }
}