#include<stdio.h>
#include<stdlib.h>

int main()
{
    char alpha;
    printf("Saisez un caractere qui detecter c'est une minuscule ou majuscule : ");
    scanf(" %c", &alpha);

    if(((alpha >= 'a') && (alpha <= 'z')) || ((alpha >= 'A') && (alpha <= 'Z'))){
        printf("\nLe caractere qui Saisez c'est une partie de Alphabet \n\n");
        
        if((alpha >= 'a') && (alpha <= 'z')){
            printf("Le caractere qui Saisez c'est un Minuscule");
        }
        else{
            printf("Le caractere qui Saisez c'est un Majuscule");
        }
    }

    else{
        printf("Le Caractere n est Pas Alphabet");
    }


    return 0;
}