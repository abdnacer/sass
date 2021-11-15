#include <stdio.h>
#include <stdlib.h>

int main()
{
   float xa, xb, xc, ya, yb, yc, xAC, xAB, yAC, yAB, resultat;
   printf("Saisez le Cordonnee xa : ");
   scanf("%f", &xa);
   printf("Saisez le Cordonnee ya : ");
   scanf("%f", &ya);
   printf("Saisez le Cordonnee xb : ");
   scanf("%f", &xb);
   printf("Saisez le Cordonnee yb : ");
   scanf("%f", &yb);
   printf("Saisez le Cordonnee xc : ");
   scanf("%f", &xc);
   printf("Saisez le Cordonnee yc : ");
   scanf("%f", &yc);
   xAC = (xc - xa);
   yAC = (yc - ya);
   xAB = (xb - xa);
   yAB = (yb - ya);
   resultat = (xAC * yAB) - (xAB * yAC);
   if(resultat == 0){
    printf("C appartient au segement [AB] ");
   }
   else{
    printf("C N a partient pas au segement [AB]");
   }
    return 0;
}