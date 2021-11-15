#include <stdio.h>
#include <stdlib.h>

int main()
{
    float math, info, philo, francais, moyenne;
    printf("Saisez La Note General de Matier Math Entre 0 et 20 : ");
    scanf("%f", &math);

    printf("Saisez La Note General de Matier Informatique Entre 0 et 20 : ");
    scanf("%f", &info);

    printf("Saisez La Note General de Matier Philosophie Entre 0 et 20 : ");
    scanf("%f", &philo);

    printf("Saisez La Note General de Matier fancais Entre 0 et 20 : ");
    scanf("%f", &francais);

    moyenne = (math + info + philo + francais) / 4;

    printf("La Moyenne De Cette Eleve C'est : %.2f\n\n", moyenne);

    if(moyenne > 0 && moyenne < 10){
        printf("La Moyenne que vous avez entré ne vous donne pas le pouvoir de passer");
    }

    else if(moyenne >= 10 && moyenne <= 12){
        printf("La moyenne qui prends c'est passable");
    }
    else if(moyenne > 12 && moyenne <= 14){
        printf("La moyenne qui prends c'est Assez Bien");
    }
    else if(moyenne > 14 && moyenne <= 16){
        printf("La moyenne qui prends c'est Bien");
    }
    else if(moyenne > 16 && moyenne < 20){
        printf("La moyenne qui prends c'est Tres Bien");
    }
    else{
        printf("Error");
    }
    return 0;
}