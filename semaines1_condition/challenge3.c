#include <stdio.h>
#include <stdlib.h>


int main()
{
  float nbr1, nbr2, change;
  printf("Saisez un nomber 1 : ");
  scanf("%f", &nbr1);
  printf("Saisez un nomber 2 : ");
  scanf("%f", &nbr2);

  if(nbr1 != nbr2 || nbr1 < nbr2){
    change = nbr1;
    nbr1 = nbr2;
    nbr2 = change;
    printf("Les Valeurs qui Saisez c'est change nbr1 = %.2f est nbr2 = %.2f ", nbr1, nbr2);
  }
  else{
    printf("Les Valeurs qui Saisez equivalent ");
  }
  return 0;
}