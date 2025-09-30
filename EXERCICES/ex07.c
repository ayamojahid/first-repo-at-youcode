/*Ex 7 : Remplacer un caractère
Écrire un programme qui lit une chaîne et remplace toutes les occurrences d’un caractère donné par un autre.
Exemple : "programmation", remplacer a par @ → "progr@mm@tion".*/
#include <stdio.h>

int main() {
    char chaine[100];
    char ancien, nouveau;
    int i = 0;

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);  // lit toute la ligne

    printf("Entrez le caractere a remplacer : ");
    scanf(" %c", &ancien);   // espace avant %c pour ignorer le \n restant

    printf("Entrez le nouveau caractere : ");
    scanf(" %c", &nouveau);

    // Remplacer
    while (chaine[i] != '\0') {
        if (chaine[i] == ancien) {
            chaine[i] = nouveau;
        }
        i++;
    }

    printf("Resultat : %s\n", chaine);

    return 0;
}
