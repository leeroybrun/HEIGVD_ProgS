//
//  5.6.c
//  HEIGVD_ProgS
//
//  Created by Leeroy Brun on 26.03.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void main()
{
    int i, n, str[MAX];
    
    i = 0;
    
    printf("Valeurs : ");
    do {
        n = scanf("%d", &str[i]);
        i++;
    } while (i < MAX);
    
    str[MAX] = '\0';
    printf("%s", str);
}