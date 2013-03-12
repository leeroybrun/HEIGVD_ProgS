//
//  main.c
//  Exercices 11
//
//  Created by Leeroy Brun on 12.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#include "lib.c"

float plusGrand(float nb1, float nb2);

void main()
{
    float nb1, nb2;
    
    nb1 = saisieFloat("Veuillez entrer le premier nombre : ");
    nb2 = saisieFloat("Veuillez entrer le deuxième nombre : ");
    
    printf("Le plus grand nombre est : %f", plusGrand(nb1, nb2));
}

float plusGrand(float nb1, float nb2)
{
    if(nb1 > nb2)
        return nb1;
    else
        return nb2;
}