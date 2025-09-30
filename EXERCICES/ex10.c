/*Ex 10 : Trouver le mot le plus long
Écrire un programme qui lit une phrase et affiche le mot le plus long.
Exemple : "Je fais du C langage" → "langage".*/
#include <stdio.h>
#include <string.h>

int main() {
    char phrase[200];
    char mot[50];
    char plusLong[50] = "";
    int i = 0, j = 0;

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    while (1) {
        if (phrase[i] == ' ' || phrase[i] == '\n' || phrase[i] == '\0') {
            mot[j] = '\0'; // fin du mot courant

            // comparer la longueur avec le plus long mot trouvé
            if (strlen(mot) > strlen(plusLong)) {
                strcpy(plusLong, mot);
            }

            j = 0; // réinitialiser pour le prochain mot
            if (phrase[i] == '\0' || phrase[i] == '\n') break; // fin de phrase
        } else {
            mot[j] = phrase[i];
            j++;
        }
        i++;
    }

    printf("Le mot le plus long est : %s\n", plusLong);

    return 0;
}
