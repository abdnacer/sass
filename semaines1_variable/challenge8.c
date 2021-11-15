#include <stdio.h>
#include <stdlib.h>

int main() {
    int note1, note2, note3, note4, somme, moyenne;

    printf("Saisez la note 1 :");
    scanf("%d", &note1);

    printf("Saisez la note 2 :");
    scanf("%d", &note2);

    printf("Saisez la note 3 :");
    scanf("%d", &note3);

    printf("Saisez la note 4 :");
    scanf("%d", &note4);

    somme = note1 + note2 + note3 + note4;
    printf("La somme des trois note %d + %d + %d + %d c'est : %d\n\n",note1, note2, note3, note4, somme);
    
    moyenne = somme / 4;
    printf("La Moyenne De Trois Note %d / 4 C'est : %d",somme, moyenne);
    return 0;
}