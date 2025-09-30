/*Ex 5 : Compter les mots
Écrire un programme qui lit une phrase et compte le nombre de mots (un mot est séparé par des espaces).
 Exemple : "Je suis étudiant" → 3 mots.*/
 #include <stdio.h>

int main() {
    char phrase[100];
    int i = 0, mots = 0;

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);  // lit toute la ligne (espaces inclus)

    // parcourir la phrase
    while (phrase[i] != '\0') {
        // si on trouve un espace suivi d'une lettre → nouveau mot
        if (phrase[i] == ' ' && phrase[i+1] != ' ' && phrase[i+1] != '\0' && phrase[i+1] != '\n') {
            mots++;
        }
        i++;
    }

    // ajouter 1 pour le premier mot (si la phrase n’est pas vide)
    if (i > 0 && phrase[0] != ' ' && phrase[0] != '\n') {
        mots++;
    }

    printf("Nombre de mots : %d\n", mots);

    return 0;
}
