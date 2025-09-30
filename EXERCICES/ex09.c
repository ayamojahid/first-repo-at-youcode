/*Ex 9 : Comparer deux chaînes
Écrire un programme qui lit deux chaînes et détermine si elles sont identiques (sans utiliser strcmp).*/
#include <stdio.h>

int main() {
    char chaine1[100], chaine2[100];
    int i = 0, identiques = 1;

    printf("Entrez la premiere chaine (mot) : ");
    scanf("%s", chaine1);

    printf("Entrez la deuxieme chaine (mot) : ");
    scanf("%s", chaine2);

    // comparer caractère par caractère
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            identiques = 0;
            break;
        }
        i++;
    }

    if (chaine1[i] != chaine2[i]) {
        identiques = 0;
    }

    if (identiques) {
        printf("Identiques\n");
    } else {
        printf("Differentes\n");
    }

    return 0;
}
