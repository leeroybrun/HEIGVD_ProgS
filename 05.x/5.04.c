//
//  5.4.c
//  HEIGVD_ProgS
//
//  Created by Leeroy Brun on 26.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>

void main()
{
    int i, j;
    char c, str[100];
    
    i = 0;
    
    printf("Texte : ");
    do {
        scanf("%c", &c);
        
        if(c == ' ')
            c = '-';
        
        str[i] = c;
        i++;
    } while(c != '.');
    
    for(j = 0; j < i; j++)
    {
        printf("%c", str[j]);
    }
}
