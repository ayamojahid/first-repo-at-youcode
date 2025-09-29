#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Avion avions[100];   // tableau qui stocke jusqu’à 100 avions
// int nbAvions = 0;    // combien d’avions ajoutés
// int idCounter = 1;   // compteur automatique pour générer des IDs




Avion avions[100];
int nbAvions=0;
int idCounter=1;



void MainMenu{
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
        printf("Votre Choix : ");
        scanf("%d" , &choix);
        system("cls");

        switch (choix)
        {
        case 1: ajoutAvion(); break;
        case 2: modifierAvion(); break;
        case 3: supprimerAvion(); break;
        case 4: afficherAvions(); break;
        case 5: rechercherAvion(); break;
        case 6: trierAvions(); break;
        case 0: printf("Au revoir\n");
        default: printf("Choix invalide.\n"); break;
        }
    } while (choix!=0)
    
    void ajouterAvion(){
     printf("\n--- AJOUTER AVION ---\n");

     printf("modele : ");
     scanf("%s" , avions[nbAvions].modele);

     printf(" capacite : ");
     scanf("%d" , avions[nbAvions].capacite);

     printf("statue : ");
     scanf("%s" , avions[nbAvions].statue);

     avions[nbAvions].idAvion=idCounter++;
     
     nbAvions++;
    }
}