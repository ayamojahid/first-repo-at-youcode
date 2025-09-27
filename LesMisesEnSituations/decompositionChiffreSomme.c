#include<stdio.h> 
int main() {
 int s;
 int n;
 int m;
 int l=0;
 int retenu=0;
     printf("entrer un nombre");
    scanf("%d" , &n );
    

    while (n>0){
    m=n/10;
    s=n%10;
    n=m; 
    retenu=retenu*10 +s;
    l=l+s;
    }
    printf("linverse est : %d \n" , retenu);
    printf("la somme est : %d" , l);
    return 0;
}