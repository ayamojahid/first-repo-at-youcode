
#include<stdio.h>
int main() {
    float T[10];
    int i;
    float S , P , M;
    
    printf("Entrez 10 nombres (un par ligne) :\n");
    
    for( i = 0; i < 10; i++) {
        printf("T[%d] = " ,i);
        scanf("%f", &T[i]);  // Juste scanf, pas de printf
    }
    
    
    S=0;
    P=1;
    for( i = 0; i < 10; i++) {
    S=S+T[i];
    P=P*T[i];
    }
    M=S/10;
    
    printf("la somme  des elements est %f \n",S);
    printf("le produit  des elements est %f \n",P);
    printf("la moyenne  des elements est %f \n",M);



    return 0;
}




// Méthode 1 :
//int tab[5] = {10, 20, 30, 40, 50};
/*
// Méthode 2 :
int tab[5];
tab[0] = 10;  // Premier élément (indice 0)
tab[1] = 20;  // Deuxième élément
tab[2] = 30;
tab[3] = 40;
tab[4] = 50;  // Dernier élément 
printf("%d", tab[0]);
 
for(int i=0 ; i<5 ; i++){
     printf("tab[%d] = %d\n", i, tab[i]);
}
*/