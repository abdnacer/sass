#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int heure1, heure2, minute1, minute2, second1, second2, k = 1;
  printf("Sasiez le premier l'heure : ");
  scanf("%d", &heure1);
  printf("Sasiez le dexieume l'heure : ");
  scanf("%d", &heure2);

  printf("Sasiez le premier Minutes : ");
  scanf("%d", &minute1);
  printf("Sasiez le dexieume Minutes : ");
  scanf("%d", &minute2);

  printf("Sasiez le premier second : ");
  scanf("%d", &second1);
  printf("Sasiez le dexieume second : ");
  scanf("%d", &second2);

  if(heure1 > heure2){
    k = 2;
  }   
  else if(heure1 == heure2 && minute1 > minute2){
    k = 2;
  }
  else if(heure1 == heure2 && minute1 == minute2 && second1 > second2){
    k = 2;
  }
  else {
    k = 0;
  }

  switch(k){
    case 0 :
      printf("Il s'agit du meme instant.\n");
      break;

  case 1 :
      printf("Le premier instant vient avant le deuxieme.\n");
      break;
      
    case 2 : 
      printf("Le deuxieme instant vient avant le premier.\n");
      break;

      default : 
      printf("Error");
      break
  }

  
  return 0;
}