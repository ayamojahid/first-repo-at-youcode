#include <stdio.h>

int main() {
    int n;

    // Demander la taille du tableau
    printf("Combien d'éléments voulez-vous entrer ? ");
    scanf("%d", &n);

    int tab[n];  // Tableau de taille n

    // Lecture des éléments du tableau
    printf("Veuillez entrer %d nombres :\n", n);
    for (int i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    // Initialiser max1 et max2
    int max1 = tab[0], max2 = tab[0];  // Commencer avec le premier élément

    // Parcourir le tableau pour trouver les max1 et max2
    for (int i = 1; i < n; i++) {
        if (tab[i] > max1) {  // Si un élément est plus grand que max1
            max2 = max1;  // max1 devient max2 (la deuxième plus grande)
            max1 = tab[i];  // tab[i] devient le nouveau max1
        } else if (tab[i] > max2 && tab[i] != max1) {  // Si tab[i] est plus grand que max2 mais pas égal à max1
            max2 = tab[i];  // tab[i] devient le nouveau max2
        }
    }

    // Affichage des résultats
    printf("Le premier maximum est : %d\n", max1);
    printf("Le deuxième maximum est : %d\n", max2);


    #include <stdio.h>

int main() {
    int n;

    // Demander la taille du tableau
    printf("Combien d'éléments voulez-vous entrer ? ");
    scanf("%d", &n);

    int tab[n];  // Tableau de taille n

    // Lecture des éléments du tableau
    printf("Veuillez entrer %d nombres :\n", n);
    for (int i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    // Initialiser min1 et min2
    int min1 = tab[0], min2 = tab[0];  // Commencer avec le premier élément

    // Parcourir le tableau pour trouver les min1 et min2
    for (int i = 1; i < n; i++) {
        if (tab[i] < min1) {  // Si un élément est plus petit que min1
            min2 = min1;  // min1 devient min2 (la deuxième plus petite)
            min1 = tab[i];  // tab[i] devient le nouveau min1
        } else if (tab[i] < min2 && tab[i] != min1) {  // Si tab[i] est plus petit que min2 mais pas égal à min1
            min2 = tab[i];  // tab[i] devient le nouveau min2
        }
    }

    // Affichage des résultats
    printf("Le premier minimum est : %d\n", min1); 
    return 0;
}
