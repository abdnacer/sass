int main() {
    float celsius, fahrenheit;
    printf("Saisez temperature en Fahrenheit qui multipli la degre Celsius: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("La Fahrenheit C'est : %.2f", celsius);
    return 0;
}