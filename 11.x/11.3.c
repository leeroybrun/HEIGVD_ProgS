//
//  main.c
//  Exercices 11
//
//  Created by Leeroy Brun on 12.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#include "lib.c"


int puissance(int val, int n);

void main()
{
    int nb, p;
    
    nb = saisieInt("Veuillez entrer le nombre : ");
    p = saisieInt("Veuillez entrer la puissance : ");
    
    printf("Réponse : %d", puissance(nb, p));
}

int puissance(int nb, int p)
{
    int i, res;
    
    res = nb;
    
    for(i = 1; i < p; i++)
    {
        res *= nb;
    }
    
    return res;
}