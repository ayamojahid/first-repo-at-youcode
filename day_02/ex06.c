#include<stdio.h>
int main (){

int m,n,r;

printf("GCD, entrez deux nombres : " );
scanf("%d  %d" ,&m , &n);

//printf("%d, %d", nb1,nb2);


while (n!=0)  {
    r=m%n;
    m=n;
    n=r;
}

 printf("Le plus grand commun diviseur est : %d\n", m);

return 0;
}