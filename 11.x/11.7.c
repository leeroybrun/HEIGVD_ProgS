//
//  11.7.c
//  HEIGVD_ProgS
//
//  Created by Leeroy Brun on 12.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#include "lib.c"

void echange(int *pta, int *ptb);

void main()
{
    int vala, valb;
    
    vala = saisieInt("Entrez la première valeur : ");
    valb = saisieInt("Entrez la deuxième valeur : ");
    
    printf("%d %d\n", vala, valb);
    
    echange(&vala, &valb);
    
    printf("%d %d", vala, valb);
}
                     
void echange(int *pta, int *ptb)
{
    int tmp;
    
    tmp = *pta;
    *pta = *ptb;
    *ptb = tmp;
}