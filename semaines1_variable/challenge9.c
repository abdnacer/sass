#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    float MN;
    printf("Saisez x1 : ");
    scanf("%f", &x1);

    printf("Saisez x2 : ");
    scanf("%f", &x2);

    printf("Saisez y1 : ");
    scanf("%f", &y1);

    printf("Saisez y2 : ");
    scanf("%f", &y2);

    MN = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
    printf("Le resultat de MN C'est : %f", MN);

    return 0;
}
