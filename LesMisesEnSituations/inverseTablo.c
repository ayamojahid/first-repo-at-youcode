#include<stdio.h>
int main() {
    int T[10];
    printf("Veuillez saisir les nombres :\n");

    for(int i=0 ; i<10 ; i++) {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }

    printf("\n");  // Ligne vide pour séparer
    for(int i=0 ; i<10 ; i++) {
        printf("T[%d]=%d\n", i, T[i]);  // ✅ \n DANS la chaîne
    }
    
    return 0;
}