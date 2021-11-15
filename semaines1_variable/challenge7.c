#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1, n2, resultat;
    printf("Saisez Le number 1 : ");
    scanf("%d", &n1);
    printf("Saisez Le number 2 : ");
    scanf("%d", &n2);
    resultat = n1 + n2;
    printf("Le resultat de %d + %d c'est : %d\n\n",n1, n2, resultat);
    resultat = n1 - n2;
    printf("Le resultat de %d - %d c'est : %d\n\n",n1, n2, resultat);
    resultat = n1 * n2;
    printf("Le resultat de %d * %d c'est : %d\n\n",n1, n2, resultat);
    resultat = n1 / n2;
    printf("Le resultat de %d / %d c'est : %d\n\n",n1, n2, resultat);
    resultat = n1 % n2;
    printf("Le resultat de %d %% %d c'est : %d\n\n",n1, n2, resultat);
    return 0;
}