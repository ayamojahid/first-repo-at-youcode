#include <stdio.h>

int main(void) {
    int count[10] = {0};  // Compteur des occurrences pour chaque chiffre
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    // Comptage des occurrences
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    // Affichage de l'en-tête
    printf("Chiffre :     ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\nOccurrences : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}
