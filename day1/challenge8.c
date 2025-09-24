#include<stdio.h>
int main() {
    float m;
    float t;
    float p;
    float nt;
    float solde;

printf("Veuillez entrer le montant du pret: ");
scanf("%f",&m);

printf("veuillez entrer le taux d'interet: ");
scanf("%f",&t);


printf("veuillez entre le paiement mensuel: ");
scanf("%f",&p);


nt = t / 100.0f / 12.0f;


solde=m;
solde=solde+solde*nt-p;

printf("Solde restant après le premier paiement : %.2f\n", solde);

solde=solde+solde*nt-p;
printf("Solde restant après le deuxième paiement : %.2f\n", solde);

solde=solde+solde*nt-p;
printf("Solde restant après le troisième paiement : %.2f\n", solde);


return 0;



}