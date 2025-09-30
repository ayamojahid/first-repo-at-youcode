/*Ex 3 : Inverser une chaîne
Écrire un programme qui lit une chaîne et l’affiche à l’envers.
Exemple : "Bonjour" → "ruojnoB".*/

#include<stdio.h>
int main() {
    char Tb[10];
    int longueur =0;
    printf("Veuillez entrer une chaine : ");
    scanf("%s" , Tb);

    while ((Tb[longueur]!='\0'))
    {
     longueur++;
     }
     
    //afficher linverse
    printf("linserse est : ");
    for(int i=longueur-1 ; i>=0 ; i--) {
        printf(" %c" , Tb[i]);
    }
    printf("\n");
    return 0 ;
}