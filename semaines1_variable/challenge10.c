#include <stdio.h>
#include <stdlib.h>

int main() {
    float rayon, circonference;
    float const Pi = 3.14;
    printf("Sasez le rayon de cercle : ");
    scanf("%f", &rayon);
    circonference = 2 * rayon * Pi;
    printf("Le circonference De Cercle C'est : %.2f", circonference);
    return 0;
}