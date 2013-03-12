//
//  4.23.c
//  Exercices 4
//
//  Created by Leeroy Brun on 05.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

void main()
{
    int demiH, h, n, i, spaces;
    
    printf("Demi-hauteur du losange : ");
    n = scanf("%d", &demiH);
    
    if(n == 1 && demiH > 0)
    {
        spaces = demiH - 1;
        
        for(h = 0; h <= demiH * 2; h++)
        {
            for(i = 0; i <= spaces; i++)
            {
                printf(" ");
            }
            
            puts("*");
            
            if(h >= demiH)
                spaces++;
            else
                spaces--;
        }
        
        h++;
    }
}