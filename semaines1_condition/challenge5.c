#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nbr1, nbr2, nbr3, x1, x2, x, d;
    printf("Saisez Le nomber 1 : ");
    scanf("%f", &nbr1);

    printf("Saisez Le nomber 2 : ");
    scanf("%f", &nbr2);

    printf("Saisez Le nomber 3 : ");
    scanf("%f", &nbr3);

    d = pow(nbr2, 2) - 4 * nbr1 * nbr3;
    printf("La solution de delta C'est : %.2f\n\n", d);

    if(d < 0){
        printf("Il n y a pas de solutions reel ");
    }

    else if(d > 0){
        x1 = (-nbr2 - sqrt(d)) / (2 * nbr1);
        x2 = (-nbr2 + sqrt(d)) / (2 * nbr1);
        printf("Les Solution de x1 c'est : %.2f\n\n", x1);
        printf("Les Solution de x2 c'est : %.2f", x2);
    }

    else{
        x = (-nbr2) / (2 * nbr1);
        printf("La solution est : %.2f", x);
    }

    return 0;
}