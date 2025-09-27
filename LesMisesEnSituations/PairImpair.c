#include <stdio.h>

int main() {
    int n;

    // Demander la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Remplir le tableau
    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("\nLes nombres pairs sont : ");
    for(int i = 0; i < n; i++) {
        if(tab[i] % 2 == 0) {
            printf("%d ", tab[i]);
        }
    }

    printf("\nLes nombres impairs sont : ");
    for(int i = 0; i < n; i++) {
        if(tab[i] % 2 != 0) {
            printf("%d ", tab[i]);
        }
    }

    printf("\n");
    return 0;
}



/*
#include <stdio.h>

int main() {
    int tab[10];  // Correction ici
    printf("veuillez entrer 10 nombre: \n");

    for(int i = 0; i < 10; i++) {
        printf("tab[%d]=", i);
        scanf("%d", &tab[i]);
    }
 
    printf("les nombres pairs sont ");
    for (int i=0 ; i<10 ; i++) {
        if(tab[i]%2==0){
    printf(" %d  ",tab[i]);
        }
    }
     printf("les nombres impairs sont ");
    for (int i=0 ; i<10 ; i++) {
        if(tab[i]%2!=0){
    printf(" %d  ",tab[i]);
        }
    }    
    
      
    
    return 0;
}
        
*/