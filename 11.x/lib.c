//
//  lib.c
//  Exercices 11
//
//  Created by Leeroy Brun on 12.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

float saisieFloat(char msg[50]);
int saisieInt(char msg[50]);

float saisieFloat(char msg[50])
{
    int n;
    float nb;
    
    do {
        printf("%s", msg);
        n = scanf("%f", &nb);
        while(getchar() != '\n');
    } while (n != 1);
    
    return nb;
}

int saisieInt(char msg[50])
{
    int n, nb;
    
    do {
        printf("%s", msg);
        n = scanf("%d", &nb);
        while(getchar() != '\n');
    } while (n != 1);
    
    return nb;
}