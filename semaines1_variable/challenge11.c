#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largeur, longueur, circonference;
    printf("Saisez Largeur De Rectangle : ");
    scanf("%d", &largeur);
    printf("Saisez Longueur De Rectangle : ");
    scanf("%d", &longueur);
    circonference = 2 *(longueur + largeur);
    printf("La circonference de rectangle c'est : %d", circonference);

    return 0;
}