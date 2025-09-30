/*Ex 6 : Supprimer les espaces
Écrire un programme qui lit une chaîne et supprime tous les espaces.
Exemple : "a b c d" → "abcd".*/
#include <stdio.h>

int main() {
    char phrase[100];
    char sansEspaces[100];
    int i = 0, j = 0;

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);  // lire toute la ligne avec espaces

    while (phrase[i] != '\0') {
        if (phrase[i] != ' ' && phrase[i] != '\n') {
            sansEspaces[j] = phrase[i];   // copier seulement si ce n’est pas un espace
            j++;
        }
        i++;
    }

    sansEspaces[j] = '\0';  // fin de chaîne

    printf("Sans espaces : %s\n", sansEspaces);

    return 0;
}
