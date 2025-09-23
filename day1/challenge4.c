#include<stdio.h>
int main(void){
float m;
float ttc;
printf(" Entrer un montant en dollars: " );
scanf("%f",&m);

// printf(" Entrer un montant en cents: %f" );
// scant("%d",&cents);

ttc=m*(1+5.0/100.0);// 5/100=0.05 
printf("ttc= %f " ,ttc);
}
