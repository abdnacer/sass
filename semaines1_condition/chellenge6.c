#include <stdio.h>
#include <string.h>

int main()
{
    char nom[50] , change[50];
    printf("Entrez Le mot lu des deux cotes ensemble : ");
    scanf("%s",&nom);
    strlwr(nom);
    strcpy(change,nom);
    strrev(change);
    int a = strcmp(change, nom);
    if(a == 0)
    {
        printf("palindrome");
    }
    else{
        printf("nest pas un palindrome");
    }
    return 0;
    }