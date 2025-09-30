/*Ex 8 : Compter la fréquence de chaque caractère
Écrire un programme qui lit une chaîne et affiche combien de fois chaque caractère apparaît.
Exemple : "hello" → h:1, e:1, l:2, o:1.*/
#include <stdio.h>

int main() {
    char chaine[100];
    int freq[256] = {0}; // tableau de fréquences initialisé à 0
    int i = 0;

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    // compter les fréquences
    while (chaine[i] != '\0') {
        unsigned char c = chaine[i];  // prendre le caractère
        if (c != '\n') {              // ignorer le retour à la ligne
            freq[c]++;
        }
        i++;
    }

    // afficher les résultats
    printf("Frequences des caracteres :\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}
