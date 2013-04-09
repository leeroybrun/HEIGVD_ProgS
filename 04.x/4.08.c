//
//  4.8.c
//  Exercices 4
//
//  Created by Leeroy Brun on 22.01.13.
//  Copyright (c) 2013 Leeroy Brun. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

void main()
{
    unsigned char caractere;
    int nbEntre;
    
    do {
        printf("Veuillez entrer un caractère : ");
        nbEntre = scanf("%c", &caractere);
    } while (nbEntre != 1 || isalpha(caractere) == 0);
        
    caractere = tolower(caractere);
    
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("\"%c\" est une voyelle.", caractere);
            break;
            
        default:
            printf("\"%c\" est une consonne.", caractere);
            break;
    }
}