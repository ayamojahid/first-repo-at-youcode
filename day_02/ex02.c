#include <stdio.h>

int main() {
    int nbr;
    int unite, di, inverse;

    printf("Entrez un nombre à deux chiffres : ");
    scanf("%d", &nbr);


    di = nbr / 10;
    unite = nbr % 10;


    inverse = unite * 10 + di;

    printf("L'inverse est : %d\n", inverse);

    return 0;
}


/*  #include<stdio.h>
int main(){
    int nbr;
    int nbr1;
    int nbr2;
    int nbr3;
    int x;
    printf("Entrez un nombre à deux chiffres : ");
    scanf("%d",&nbr);
   

    nbr1=nbr/10;
    nbr2=nbr1%10;
    nbr3=nbr2*10+nbr1;
    x= ((nbr%10)*10)+nbr/10

    printf("L'inverse est : %d\n", nbr3);

    return 0;
}    */  