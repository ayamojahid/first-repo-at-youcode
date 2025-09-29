// #include "variables.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Importation des variables globales
Avion avions[100];
int nbAvions = 0;
int idCounter = 1;


void MainMenu(void) {
    int choix;
    do {
        printf("\n=== MENU AVION ===\n");
        printf("1. Ajouter un avion\n");
        printf("2. Modifier un avion\n");
        printf("3. Supprimer un avion\n");
        printf("4. Afficher la liste des avions\n");
        printf("5. Rechercher un avion\n");
        printf("6. Trier les avions\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        system("cls"); // Effacer

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

void ajouterAvion(void) {
    printf("\n--- AJOUTER AVION ---\n");
    printf("Modele: ");
    scanf("%s", avions[nbAvions].modele);

    printf("Capacite: ");
    scanf("%d", &avions[nbAvions].capacite);

    printf("Statut: ");
    scanf("%s", avions[nbAvions].statut);

    avions[nbAvions].idAvion = idCounter++;
    nbAvions++;

    printf(" Avion ajoute! ID: %d\n", avions[nbAvions - 1].idAvion);
}

void modifierAvion(void) {
    int id, i, trouve = 0;
    printf("\n--- MODIFIER AVION ---\n");
    printf("ID avion a modifier: ");
    scanf("%d", &id);

    for (i = 0; i < nbAvions; i++) {
        if (avions[i].idAvion == id) {
            printf("Nouveau modele: ");
            scanf("%s", avions[i].modele);
            printf("Nouvelle capacite: ");
            scanf("%d", &avions[i].capacite);
            printf("Nouveau statut: ");
            scanf("%s", avions[i].statut);
            printf(" Avion modifie.\n");
            trouve = 1;
            break;
        }
    }
    if (!trouve) printf(" Avion non trouve.\n");
}

void supprimerAvion(void) {
    int id, i, j, trouve = 0;
    printf("\n--- SUPPRIMER AVION ---\n");
    printf("ID avion a supprimer: ");
    scanf("%d", &id);

    for (i = 0; i < nbAvions; i++) {
        if (avions[i].idAvion == id) {
            for (j = i; j < nbAvions - 1; j++) {
                avions[j] = avions[j + 1];
            }
            nbAvions--;
            printf(" Avion supprime.\n");
            trouve = 1;
            break;
        }
    }
    if (!trouve) printf(" Avion non trouve.\n");
}

void afficherAvions(void) {
    int i;
    printf("\n--- LISTE DES AVIONS ---\n");
    if (nbAvions == 0) {
        printf("Aucun avion disponible.\n");
        return;
    }
    for (i = 0; i < nbAvions; i++) {
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
               avions[i].idAvion, avions[i].modele, avions[i].capacite, avions[i].statut);
    }
}

void rechercherAvion(void) {
    int id, i, trouve = 0;
    printf("\n--- RECHERCHER AVION ---\n");
    printf("ID avion a rechercher: ");
    scanf("%d", &id);

    for (i = 0; i < nbAvions; i++) {
        if (avions[i].idAvion == id) {
            printf(" Trouve : ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                   avions[i].idAvion, avions[i].modele, avions[i].capacite, avions[i].statut);
            trouve = 1;
            break;
        }
    }
    if (!trouve) printf(" Avion non trouve.\n"); }


void trierAvions(void) {
    int choix;
    printf("\n=== TRI DES AVIONS ===\n");
    printf("1. Trier par capacite (croissant)\n");
    printf("2. Trier par modele (alphabétique)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    int i, j;
    Avion temp;

    switch (choix) {
        case 1: // Tri par capacité
            for (i = 0; i < nbAvions - 1; i++) {
                for (j = 0; j < nbAvions - i - 1; j++) {
                    if (avions[j].capacite > avions[j + 1].capacite) {
                        temp = avions[j];
                        avions[j] = avions[j + 1];
                        avions[j + 1] = temp;
                    }
                }
            }
            printf(" Tri par capacite termine.\n");
            break;

        case 2: // Tri par modèle
            for (i = 0; i < nbAvions - 1; i++) {
                for (j = 0; j < nbAvions - i - 1; j++) {
                    if (strcmp(avions[j].modele, avions[j + 1].modele) > 0) {
                        temp = avions[j];
                        avions[j] = avions[j + 1];
                        avions[j + 1] = temp;
                    }
                }
            }
            printf(" Tri par modele termine.\n");
            break;

        default:
            printf(" Choix invalide.\n");
            return;
    }
}



