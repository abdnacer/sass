#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;
    printf("Saisez le degre Celsius qui multipli la Fahrenheit : ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("La Fahrenheit C'est : %.2f", fahrenheit);
    return 0;
}

