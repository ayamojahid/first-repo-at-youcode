#include<stdio.h>
int main()  {
    int n;
    int s=1;
    printf("entrer un nombre");
    scanf("%d" , &n );

    for (int i=1;i<=n ; i++) {
        s=s*i;
        printf("Le factoriel de %d est %d\n", i, s);  // Afficher s, pas i
    }
} 