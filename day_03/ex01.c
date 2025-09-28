#include <stdbool.h> /* C99 seulement */
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};  // chiffres déjà vus
    bool stoque[10] = {false};      // chiffres répétés

    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

   
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            stoque[digit] = true;   // si déjà vu -> répété
        }
        digit_seen[digit] = true;   // marquer comme vu
        n /= 10;
    }

    // Affichage 
    bool has_repeat = false;
    printf("Chiffre(s) répété(s) : ");
    for (int i = 0; i < 10; i++) {
        if (stoque[i]) {
            printf("%d ", i);
            has_repeat = true;
        }
    }

    if (!has_repeat)
        printf("Aucun");

    printf("\n");
    return 0;
}
