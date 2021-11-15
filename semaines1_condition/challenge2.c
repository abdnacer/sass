#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nbr;
    printf("Saisez un nomber : ");
    scanf("%d", &nbr);

    if(nbr % 2 == 0){
        printf("Le nomber %d qui saisez c'est : Paire", nbr);
    }
    else{
        printf("Le nomber %d qui saisez c'est : Impaire", nbr);
    }
    return 0;
}