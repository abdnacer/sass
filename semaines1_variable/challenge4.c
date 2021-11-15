#include <stdio.h>
#include <stdlib.h>

int main() {
    float meters, km, mile;
    printf("Sasiez le nombre de Mile : ");
    scanf("%f", &mile);
    km = mile / 1.609;
    printf("le kolometrage C'est : %f\n\n", km);
    meters = km * 1000;
    printf("le Mile C'est : %f", meters);
    return 0;
}