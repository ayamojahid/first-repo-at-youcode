#include<stdio.h> 
int main ()
{
    char isbn[30];
    int t = 0; //
    int i = 0;
    printf("Veuillez entrer ISBN : ");
    scanf("%s",isbn);
    
    printf("Prefixe GS1 : ");
     
    while (isbn[i] != '\0') 
    {
        if (isbn[i] == '-') 
        {
            t++;
            if (t==1) printf("\nIdentifiant de groupe :" );
            if (t==2) printf("\nCode de l'éditeur :"); 
            if (t==3) printf("\nNuméro d'article :");
            if (t==4) printf("\n Chiffre de contrôle : ");
        }
        else
        {
            printf("%c",isbn[i]);
        }
        i++;
    }
    return 0;
}