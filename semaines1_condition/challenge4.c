#include <stdio.h>
#include <stdlib.h>


int main()
{
  int nbr1, nbr2, somme;
  printf("Saisez le nobmer 1 : ");
  scanf("%d", &nbr1);
  printf("Saisez le nobmer 2 : ");
  scanf("%d", &nbr2);

  if(nbr1 == nbr2){
    somme = nbr1 + nbr2;
    printf("la somme de %d + %d C'est : %d \n", nbr1, nbr2, somme);
    somme = somme * 3;
    printf("La somme General C'est : %d", somme);
  }
  else{
    somme = nbr1 + nbr2;
    printf("la somme de %d + %d C'est : %d \n", nbr1, nbr2, somme);
  }
  return 0;
}