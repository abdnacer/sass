#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int jour;
  // srand(time(NULL));
  jour = time(NULL);
  jour = 1 + jour % 7;
  printf("Le Jour Qui Choisez Hasard c est : %d\n\n", jour);
  switch(jour){
    case 1:
      printf("Le Jour C'est Lundi \n\n");
      break;
  
  case 2:
      printf("Le Jour C'est Mardi \n\n");
      break;

  case 3:
      printf("Le Jour C'est Mercredi \n\n");
      break;

  case 4:
      printf("Le Jour C'est Jeudi \n\n");
      break;

  case 5:
      printf("Le Jour C'est Vendredi\n\n");
      break;

  case 6:
      printf("Le Jour C'est Samedi\n\n");
      break;

  case 7:
      printf("Le Jour C'est Dimache\n\n");
      break;
  }
  return 0;
}