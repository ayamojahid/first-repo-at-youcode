#include<stdio.h>

int main() {
    char pl[20];
    int longueur = 0;   // il faut initialiser à 0
    int i = 0;
    int estPalindrome = 1; // on suppose que c’est un palindrome

    printf("Veuillez entrer un caractere : ");
    scanf("%s" , pl);   // pas pl[20] !!

    // calculer la longueur
    while (pl[longueur] != '\0') {
        longueur++;
    }

    // afficher l’inverse (optionnel, juste pour voir)
    printf("linverse est : ");
    for (i = longueur - 1; i >= 0; i--) {
        printf("%c", pl[i]);
    }
    printf("\n");

    // vérifier palindrome
    for (i = 0; i < longueur / 2; i++) {
        if (pl[i] != pl[longueur - 1 - i]) {
            estPalindrome = 0;
            break;
        }
    }

    if (estPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Pas palindrome\n");
    }

    return 0;
}
