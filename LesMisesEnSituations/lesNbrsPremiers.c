#include<stdio.h>

int main() {
    int n;
    
    printf("Veuillez saisir un nombre : ");
    scanf("%d", &n);
    
    if (n == 0 || n == 1) {
        printf("%d n'est pas un nombre premier", n);
        return 0;
    }

    for (int i=2 ; i<n ; i++) {
       if ( n%i==0 ) {
        printf("%d n'est pas un nombre premier", n);
     return 0; }
    } 

    printf("%d le nombre est premier", n);
    return 0;
}