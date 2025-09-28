#include <stdio.h>
#include "header.h"

// Exemple de fonction Menu
void MainMenu(void) {
    int choix;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Ajouter un avion\n");
        printf("2. Modifier un avion\n");
        printf("3. Supprimer un avion\n");
        printf("4. Afficher la liste des avions\n");
        printf("5. Rechercher un avion\n");
        printf("6. Trier les avions\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterAvion(); break;
            case 2: modifierAvion(); break;
            case 3: supprimerAvion(); break;
            case 4: afficherAvions(); break;
            case 5: rechercherAvion(); break;
            case 6: trierAvions(); break;
            case 0: printf("Au revoir\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

// Squelettes à compléter
void ajouterAvion(void) { printf("Ajouter avion...\n"); }
void modifierAvion(void) { printf("Modifier avion...\n"); }
void supprimerAvion(void) { printf("Supprimer avion...\n"); }
void afficherAvions(void) { printf("Afficher avions...\n"); }
void rechercherAvion(void) { printf("Rechercher avion...\n"); }
void trierAvions(void) { printf("Trier avions...\n"); }
