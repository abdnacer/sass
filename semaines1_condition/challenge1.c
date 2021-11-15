#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float celsius, fahrenheit;
    printf("Saisez le degre Celsius qui multipli la Fahrenheit : ");
    scanf("%f", &celsius);

    celsius = (fahrenheit * 1.8) + 32;
    printf("La Fahrenheit C'est : %.2f\n\n", celsius);

    if(celsius <= 0){
        printf("La Sesation C'est Trés Froid ");
    }
    else if(celsius > 0 && celsius < 15){
        printf("La Sesation C'est Froid ");
    }
    else if(celsius > 15 && celsius < 25){
        printf("La Sesation C'est Normale");
    }
    else if(celsius > 25 && celsius < 35){
        printf("La Sesation C'est Chaud");
    }
    else if(celsius > 35 && celsius < 50){
        printf("La Sesation C'est Tres Chaud");
    }
    else{
        printf("La Sesation C'est mort de chaud");
    }
    return 0;
}