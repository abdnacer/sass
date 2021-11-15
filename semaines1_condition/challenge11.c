#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int heure1, heure2, minute1, minute2, second1, second2;
  printf("Saisez l'instant N1 sous forme HH/MM/SS : ");
  scanf("%d:%d:%d", &heure1, &minute1, &second1);
  printf("Saisez l'instant N2 sous forme HH/MM/SS : ");
  scanf("%d:%d:%d", &heure2, &minute2, &second2);
  if(heure1 < heure2){
    printf("Le premier instant avant le deuxieme ");
  } 
  else if(heure1 > heure2){
    printf("Le deuxieme instant vient avant le premier");
  }
  else if(heure1 == heure2){
    if( minute1 < minute2){
      printf("Le premier instant avant le deuxieme ");
    }
    else if( minute1 > minute2){
      printf("Le deuxieme instant  avant le premier");
    }
    else if(minute1 == minute2){ 
      
      if(second1 < second2){
        printf("Le premier instant avant le deuxieme ");
      }
      else if(second1 > second2){
        printf("Le deuxieme instant vient avant le premier");
      }
      else{
        printf("Il s'agit du meme instant");
      }
    }
  }
  return 0 ;
}