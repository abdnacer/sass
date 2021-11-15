#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nom[50],prenom[50], sexe[50];
    int age, num;
    printf("Saisez un nom : ");
    scanf("%s",&nom);
    printf("Saisez un prenom : ");
    scanf("%s",&prenom);
    printf("le nom est le prenom de cette Personne c'est %s %s\n\n", nom, prenom);
    printf("Saisez l'age : ");
    scanf("%d",&age);
    printf("Saisez le Sexe : ");
    scanf("%s",&sexe);
    printf("Saisez le numero de telephone : "); 
    scanf("%d",&num);
    printf("Les Infos de Cette Personne %s %s\n et l'age %d ans\n et le sexe %s\n le numero de telephone c'est %d", nom, prenom, age, sexe, num);
	return 0;
}
 