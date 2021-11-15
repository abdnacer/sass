#include <stdio.h>
#include <stdlib.h>

int main() {

    float meters, km, mile;
    printf("Sasiez le nombre metres : ");
    scanf("%f", &meters);
    km = meters / 1000;
    printf("le kolometrage C'est : %f\n\n", km);
    mile = km * 1.609;
    printf("le Mile C'est : %f", mile);
    return 0;
}