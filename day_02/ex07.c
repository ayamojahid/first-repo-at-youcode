#include<stdio.h>
int main (){

int num,den ,m,n,r;

printf("Entrez une fraction (ex : 6/12) : ");
    scanf("%d/%d", &num, &den);

    
    m = num;
    n = den;

while (n!=0)  {
    r=m%n;
    m=n;
    n=r;
}

  int gcd = m;  

    num = num / gcd;
    den = den / gcd;

    printf("Sous sa forme la plus simple : %d/%d\n", num, den);

return 0;
}