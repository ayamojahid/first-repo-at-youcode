/*Longueur d’une chaîne
Écrire un programme qui lit une chaîne et calcule sa longueur sans utiliser strlen.*/
#include<stdio.h>

int main(){
    char st[100];
    int i=0;
    
    printf("Veuillez entrer une chaine : ");
    scanf("%s" , st);

    while(st[i]!='\0'){
    i++;
    }
    printf("La longueur de chaine est : %i" , i);

}
