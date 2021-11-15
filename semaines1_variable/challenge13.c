#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
    int number;
    printf("Saisez un Number : ");
    scanf("%d", &number);

    printf("Number qui ajouter C'est : %d\n\n", number);
    printf("L'octale de number %d C'est : %o\n\n", number, number);
    printf("L'exadecimale de number %d C'est : %x\n\n", number, number);
    return 0;
}