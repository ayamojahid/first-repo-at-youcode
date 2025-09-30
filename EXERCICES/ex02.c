/* Compter les voyelles et consonnes
Écrire un programme qui lit une chaîne et affiche :
le nombre de voyelles (a, e, i, o, u, y)
le nombre de consonnes.*/ 

#include<stdio.h>
int main() {
char convoy[100];
int i=0;
int voyelles=0;
int consonnes=0;
printf("Veuillez entrer une chaine : ");
scanf("%s" , convoy);

while (convoy[i]!='\0')
{
   if (convoy[i]=='a' || convoy[i]=='e' || convoy[i]=='i' || convoy[i]=='o' ||convoy[i]=='u' || convoy[i]=='y') 
   {
    voyelles++;
   }
   else{
    consonnes++;
   }
   i++;
}

printf("Voyelles : %d\n", voyelles);
printf("Consonnes : %d\n", consonnes);
return 0;
}

