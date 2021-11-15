#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour, mois, annee;
    printf("Sasiez la Date De Naissance qui change le mois de nombre a mots JJ/MM/AA : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    if(jour >= 1 && jour <= 31 && mois >= 1 && mois <= 12 ){
         printf("%d-", jour);

        switch(mois){
            case 1:
              printf("Janvier");
              break;

           case 2: printf("Fevrier");
                break;

           case 3: printf("Mars");
                break;

           case 4: printf("Avril");
                break;
           case 5: printf("Mai");
                break;
           case 6: printf("Juin");
                break;
           case 7: printf("Juillet");
                break;
           case 8: printf("Aout");
                break;
           case 9: printf("Septembre");
                break;
           case 10: printf("Octobre");
                break;
           case 11: printf("Novembre");
                 break;
           case 12: printf("Decembre");
               break;
         }
         printf("-%d", annee);
     }
     else{
         printf("Error");
     }

     return 0;
}